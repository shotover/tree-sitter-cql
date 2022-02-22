#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 341
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 124
#define ALIAS_COUNT 2
#define TOKEN_COUNT 62
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 13

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
  sym_source_file = 62,
  sym__statement = 63,
  sym_select_statement = 64,
  sym_select_elements = 65,
  sym_select_element = 66,
  sym_function_call = 67,
  sym_function_args = 68,
  sym_constant = 69,
  sym__uuid = 70,
  sym__string_literal = 71,
  aux_sym__decimal_literal = 72,
  sym__float_literal = 73,
  sym__hexadecimal_literal = 74,
  sym_from_spec = 75,
  sym_from_spec_element = 76,
  sym_where_spec = 77,
  sym_relation_elements = 78,
  sym_relation_element = 79,
  sym_assignment_tuple = 80,
  sym_relalationContainsKey = 81,
  sym_relalationContains = 82,
  sym_order_spec = 83,
  sym_order_spec_element = 84,
  sym_delete_statement = 85,
  sym_begin_batch = 86,
  sym_delete_column_list = 87,
  sym_delete_column_item = 88,
  sym_using_timestamp_spec = 89,
  sym_timestamp = 90,
  sym_if_exist = 91,
  sym_if_spec = 92,
  sym_if_condition_list = 93,
  sym_if_condition = 94,
  sym_insert_statement = 95,
  sym_keyspace = 96,
  sym_table = 97,
  sym_insert_column_spec = 98,
  sym_column_list = 99,
  sym_column = 100,
  sym_insert_values_spec = 101,
  sym_expression_list = 102,
  sym_expression = 103,
  sym_assignment_map = 104,
  sym_assignment_set = 105,
  sym_assignment_list = 106,
  sym_if_not_exist = 107,
  sym_using_ttl_timestamp = 108,
  sym_ttl = 109,
  aux_sym_source_file_repeat1 = 110,
  aux_sym_select_elements_repeat1 = 111,
  aux_sym_function_args_repeat1 = 112,
  aux_sym__hexadecimal_literal_repeat1 = 113,
  aux_sym__hexadecimal_literal_repeat2 = 114,
  aux_sym_relation_elements_repeat1 = 115,
  aux_sym_relation_element_repeat1 = 116,
  aux_sym_relation_element_repeat2 = 117,
  aux_sym_assignment_tuple_repeat1 = 118,
  aux_sym_delete_column_list_repeat1 = 119,
  aux_sym_if_condition_list_repeat1 = 120,
  aux_sym_column_list_repeat1 = 121,
  aux_sym_expression_list_repeat1 = 122,
  aux_sym_assignment_map_repeat1 = 123,
  anon_alias_sym_CONTAINS = 124,
  anon_alias_sym_IF = 125,
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
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [6] = {.index = 5, .length = 3},
  [7] = {.index = 8, .length = 3},
  [8] = {.index = 11, .length = 1},
  [9] = {.index = 12, .length = 1},
  [11] = {.index = 13, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_keyspace, 0},
  [1] =
    {field_table, 0},
  [2] =
    {field_function, 0},
  [3] =
    {field_arguments, 2},
    {field_function, 0},
  [5] =
    {field_keyspace, 0},
    {field_keyspace, 1},
    {field_keyspace, 2},
  [8] =
    {field_table, 0},
    {field_table, 1},
    {field_table, 2},
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
  [5] = {
    [0] = anon_alias_sym_IF,
  },
  [10] = {
    [1] = anon_alias_sym_CONTAINS,
  },
  [12] = {
    [0] = aux_sym_if_not_exist_token1,
    [2] = aux_sym_if_not_exist_token1,
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
  [20] = 19,
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
  [31] = 28,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 30,
  [36] = 36,
  [37] = 33,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 42,
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
  [74] = 56,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 48,
  [80] = 80,
  [81] = 75,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 51,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 43,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 42,
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
  [114] = 112,
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
  [134] = 117,
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
  [149] = 148,
  [150] = 150,
  [151] = 151,
  [152] = 144,
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
  [251] = 224,
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
  [270] = 224,
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
  [340] = 305,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(140);
      if (lookahead == '"') ADVANCE(245);
      if (lookahead == '$') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(169);
      if (lookahead == '(') ADVANCE(153);
      if (lookahead == ')') ADVANCE(154);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == ',') ADVANCE(150);
      if (lookahead == '-') ADVANCE(157);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '0') ADVANCE(161);
      if (lookahead == ':') ADVANCE(248);
      if (lookahead == ';') ADVANCE(141);
      if (lookahead == '<') ADVANCE(220);
      if (lookahead == '=') ADVANCE(219);
      if (lookahead == '>') ADVANCE(221);
      if (lookahead == 'X') ADVANCE(6);
      if (lookahead == '[') ADVANCE(237);
      if (lookahead == ']') ADVANCE(238);
      if (lookahead == '{') ADVANCE(247);
      if (lookahead == '}') ADVANCE(249);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(165);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(163);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(160);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(164);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(168);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(167);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(42);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(109);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(25);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(56);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(91);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(100);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(41);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(58);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(89);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(14);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(245);
      if (lookahead == '\'') ADVANCE(134);
      if (lookahead == '(') ADVANCE(153);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(211);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 2:
      if (lookahead == '$') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(170);
      if (lookahead == ')') ADVANCE(154);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '-') ADVANCE(157);
      if (lookahead == '0') ADVANCE(177);
      if (lookahead == 'X') ADVANCE(184);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(185);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(209);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(214);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 3:
      if (lookahead == '$') ADVANCE(173);
      END_STATE();
    case 4:
      if (lookahead == '$') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(174);
      if (lookahead != 0) ADVANCE(175);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(169);
      if (lookahead == '(') ADVANCE(153);
      if (lookahead == ')') ADVANCE(154);
      if (lookahead == ',') ADVANCE(150);
      if (lookahead == ':') ADVANCE(248);
      if (lookahead == ']') ADVANCE(238);
      if (lookahead == '}') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(160);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(179);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(183);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(134);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(189);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(134);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(153);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '<') ADVANCE(220);
      if (lookahead == '=') ADVANCE(219);
      if (lookahead == '>') ADVANCE(221);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(96);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(120);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(51);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(132);
      END_STATE();
    case 12:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(73);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(77);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(132);
      END_STATE();
    case 13:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 14:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 15:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 16:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(230);
      END_STATE();
    case 17:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(231);
      END_STATE();
    case 18:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(53);
      END_STATE();
    case 19:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(118);
      END_STATE();
    case 20:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(218);
      END_STATE();
    case 21:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(234);
      END_STATE();
    case 22:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(235);
      END_STATE();
    case 23:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(37);
      END_STATE();
    case 24:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 25:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 26:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 27:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 28:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 29:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(132);
      END_STATE();
    case 30:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 31:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 32:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 33:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 34:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 35:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 36:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 37:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 38:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 39:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 40:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 41:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 42:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(241);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(225);
      END_STATE();
    case 43:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(241);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 44:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(241);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 45:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(239);
      END_STATE();
    case 46:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(148);
      END_STATE();
    case 47:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(35);
      END_STATE();
    case 49:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(38);
      END_STATE();
    case 50:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(60);
      END_STATE();
    case 51:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(131);
      END_STATE();
    case 52:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(49);
      END_STATE();
    case 53:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(236);
      END_STATE();
    case 54:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(32);
      END_STATE();
    case 55:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 56:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(80);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 57:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 58:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(81);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(66);
      END_STATE();
    case 59:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 60:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 61:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 62:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 63:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 64:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(69);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(20);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(132);
      END_STATE();
    case 65:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(69);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(20);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(16);
      END_STATE();
    case 66:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(251);
      END_STATE();
    case 67:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(126);
      END_STATE();
    case 68:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(155);
      END_STATE();
    case 69:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 70:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 71:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(33);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(17);
      END_STATE();
    case 72:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(131);
      END_STATE();
    case 73:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(131);
      END_STATE();
    case 74:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 75:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 76:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 77:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 78:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(216);
      END_STATE();
    case 79:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(98);
      END_STATE();
    case 80:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(61);
      END_STATE();
    case 81:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(40);
      END_STATE();
    case 82:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 83:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(233);
      END_STATE();
    case 84:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(224);
      END_STATE();
    case 85:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 86:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 87:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 88:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 89:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(74);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(59);
      END_STATE();
    case 90:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 91:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(115);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 92:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 93:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 94:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(244);
      END_STATE();
    case 95:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 96:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 97:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 98:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(240);
      END_STATE();
    case 99:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(228);
      END_STATE();
    case 100:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 101:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 102:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 103:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 104:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 105:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(242);
      END_STATE();
    case 106:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(246);
      END_STATE();
    case 107:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(226);
      END_STATE();
    case 108:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(59);
      END_STATE();
    case 109:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(92);
      END_STATE();
    case 110:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(121);
      END_STATE();
    case 111:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(34);
      END_STATE();
    case 112:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(34);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(94);
      END_STATE();
    case 113:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(119);
      END_STATE();
    case 114:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(30);
      END_STATE();
    case 115:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(250);
      END_STATE();
    case 116:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(146);
      END_STATE();
    case 117:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(243);
      END_STATE();
    case 118:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(142);
      END_STATE();
    case 119:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(13);
      END_STATE();
    case 120:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(131);
      END_STATE();
    case 121:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(105);
      END_STATE();
    case 122:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(15);
      END_STATE();
    case 123:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(28);
      END_STATE();
    case 124:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(39);
      END_STATE();
    case 125:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 126:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 127:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 128:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(147);
      END_STATE();
    case 129:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(132);
      END_STATE();
    case 130:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(227);
      END_STATE();
    case 131:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
      END_STATE();
    case 132:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(131);
      END_STATE();
    case 133:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(132);
      END_STATE();
    case 134:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 135:
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(175);
      END_STATE();
    case 136:
      if (eof) ADVANCE(140);
      if (lookahead == '$') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(169);
      if (lookahead == '(') ADVANCE(153);
      if (lookahead == ')') ADVANCE(154);
      if (lookahead == ',') ADVANCE(150);
      if (lookahead == '-') ADVANCE(157);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '0') ADVANCE(177);
      if (lookahead == ':') ADVANCE(248);
      if (lookahead == ';') ADVANCE(141);
      if (lookahead == '<') ADVANCE(220);
      if (lookahead == '=') ADVANCE(219);
      if (lookahead == '>') ADVANCE(221);
      if (lookahead == 'X') ADVANCE(6);
      if (lookahead == '[') ADVANCE(237);
      if (lookahead == ']') ADVANCE(238);
      if (lookahead == '{') ADVANCE(247);
      if (lookahead == '}') ADVANCE(249);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(64);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(11);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(133);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(29);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(129);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(12);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(43);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(25);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(56);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(125);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(100);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(41);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(103);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(89);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(136)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(178);
      END_STATE();
    case 137:
      if (eof) ADVANCE(140);
      if (lookahead == '$') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(169);
      if (lookahead == '(') ADVANCE(153);
      if (lookahead == ')') ADVANCE(154);
      if (lookahead == ',') ADVANCE(150);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == ':') ADVANCE(248);
      if (lookahead == ';') ADVANCE(141);
      if (lookahead == ']') ADVANCE(238);
      if (lookahead == '}') ADVANCE(249);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(65);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(24);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(31);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(44);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(55);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(100);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(41);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(108);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(137)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      END_STATE();
    case 138:
      if (eof) ADVANCE(140);
      if (lookahead == ';') ADVANCE(141);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(165);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(162);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(164);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(90);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(55);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(100);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(138)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('C' <= lookahead && lookahead <= 'F') ||
          ('c' <= lookahead && lookahead <= 'f')) ADVANCE(160);
      END_STATE();
    case 139:
      if (eof) ADVANCE(140);
      if (lookahead == ';') ADVANCE(141);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(166);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(162);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(164);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(44);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(41);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(139)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('C' <= lookahead && lookahead <= 'F') ||
          ('c' <= lookahead && lookahead <= 'f')) ADVANCE(160);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_select_statement_token1);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_select_statement_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_select_statement_token3);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_select_statement_token3);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_select_statement_token4);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_select_statement_token5);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_select_statement_token6);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_select_element_token1);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__hex_4digit);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__hex_4digit);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__hex_digit);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'X') ADVANCE(180);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(50);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(229);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(69);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(57);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(172);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym__string_literal_token2);
      if (lookahead == '$') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(174);
      if (lookahead != 0) ADVANCE(175);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym__string_literal_token2);
      if (lookahead == '$') ADVANCE(135);
      if (lookahead != 0) ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__dec_digit);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__dec_digit);
      if (lookahead == 'X') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(132);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__dec_digit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(132);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_X_SQUOTE);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_0X);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__boolean_literal);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__boolean_literal);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_object_name);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == '\'') ADVANCE(179);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(213);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(206);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(182);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(196);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(204);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(205);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(156);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(192);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(215);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(145);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(186);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(195);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(194);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(210);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(198);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(215);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(187);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(197);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(207);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(208);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(143);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(188);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(201);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(193);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(187);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(190);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(159);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(213);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_from_spec_token1);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_where_spec_token1);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_relation_elements_token1);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(222);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(223);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_relation_element_token1);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_relation_element_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(34);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(94);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_relalationContainsKey_token1);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_relalationContainsKey_token2);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_order_spec_token1);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_order_spec_token2);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_order_spec_element_token1);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_order_spec_element_token2);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_delete_statement_token1);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_begin_batch_token1);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_begin_batch_token2);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_begin_batch_token3);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_begin_batch_token4);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_using_timestamp_spec_token1);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_timestamp_token1);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_if_exist_token1);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_if_exist_token2);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_insert_statement_token1);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_insert_statement_token2);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__dquote);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_insert_values_spec_token1);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_if_not_exist_token1);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_ttl_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 136},
  [2] = {.lex_state = 136},
  [3] = {.lex_state = 136},
  [4] = {.lex_state = 137},
  [5] = {.lex_state = 137},
  [6] = {.lex_state = 137},
  [7] = {.lex_state = 136},
  [8] = {.lex_state = 136},
  [9] = {.lex_state = 137},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 137},
  [12] = {.lex_state = 136},
  [13] = {.lex_state = 136},
  [14] = {.lex_state = 136},
  [15] = {.lex_state = 136},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 136},
  [18] = {.lex_state = 136},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 136},
  [23] = {.lex_state = 136},
  [24] = {.lex_state = 136},
  [25] = {.lex_state = 136},
  [26] = {.lex_state = 136},
  [27] = {.lex_state = 136},
  [28] = {.lex_state = 136},
  [29] = {.lex_state = 136},
  [30] = {.lex_state = 136},
  [31] = {.lex_state = 136},
  [32] = {.lex_state = 136},
  [33] = {.lex_state = 136},
  [34] = {.lex_state = 136},
  [35] = {.lex_state = 136},
  [36] = {.lex_state = 136},
  [37] = {.lex_state = 136},
  [38] = {.lex_state = 136},
  [39] = {.lex_state = 136},
  [40] = {.lex_state = 136},
  [41] = {.lex_state = 136},
  [42] = {.lex_state = 138},
  [43] = {.lex_state = 138},
  [44] = {.lex_state = 136},
  [45] = {.lex_state = 139},
  [46] = {.lex_state = 136},
  [47] = {.lex_state = 136},
  [48] = {.lex_state = 136},
  [49] = {.lex_state = 136},
  [50] = {.lex_state = 136},
  [51] = {.lex_state = 136},
  [52] = {.lex_state = 136},
  [53] = {.lex_state = 136},
  [54] = {.lex_state = 136},
  [55] = {.lex_state = 136},
  [56] = {.lex_state = 136},
  [57] = {.lex_state = 136},
  [58] = {.lex_state = 136},
  [59] = {.lex_state = 136},
  [60] = {.lex_state = 136},
  [61] = {.lex_state = 136},
  [62] = {.lex_state = 139},
  [63] = {.lex_state = 136},
  [64] = {.lex_state = 136},
  [65] = {.lex_state = 136},
  [66] = {.lex_state = 136},
  [67] = {.lex_state = 136},
  [68] = {.lex_state = 136},
  [69] = {.lex_state = 137},
  [70] = {.lex_state = 136},
  [71] = {.lex_state = 136},
  [72] = {.lex_state = 136},
  [73] = {.lex_state = 137},
  [74] = {.lex_state = 136},
  [75] = {.lex_state = 10},
  [76] = {.lex_state = 137},
  [77] = {.lex_state = 137},
  [78] = {.lex_state = 136},
  [79] = {.lex_state = 136},
  [80] = {.lex_state = 137},
  [81] = {.lex_state = 10},
  [82] = {.lex_state = 137},
  [83] = {.lex_state = 137},
  [84] = {.lex_state = 136},
  [85] = {.lex_state = 136},
  [86] = {.lex_state = 136},
  [87] = {.lex_state = 136},
  [88] = {.lex_state = 137},
  [89] = {.lex_state = 136},
  [90] = {.lex_state = 136},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 136},
  [93] = {.lex_state = 136},
  [94] = {.lex_state = 136},
  [95] = {.lex_state = 136},
  [96] = {.lex_state = 136},
  [97] = {.lex_state = 136},
  [98] = {.lex_state = 136},
  [99] = {.lex_state = 5},
  [100] = {.lex_state = 136},
  [101] = {.lex_state = 136},
  [102] = {.lex_state = 136},
  [103] = {.lex_state = 136},
  [104] = {.lex_state = 136},
  [105] = {.lex_state = 136},
  [106] = {.lex_state = 136},
  [107] = {.lex_state = 136},
  [108] = {.lex_state = 136},
  [109] = {.lex_state = 136},
  [110] = {.lex_state = 136},
  [111] = {.lex_state = 8},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 136},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 136},
  [116] = {.lex_state = 136},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 10},
  [119] = {.lex_state = 136},
  [120] = {.lex_state = 136},
  [121] = {.lex_state = 136},
  [122] = {.lex_state = 136},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 9},
  [125] = {.lex_state = 136},
  [126] = {.lex_state = 136},
  [127] = {.lex_state = 136},
  [128] = {.lex_state = 136},
  [129] = {.lex_state = 136},
  [130] = {.lex_state = 136},
  [131] = {.lex_state = 10},
  [132] = {.lex_state = 136},
  [133] = {.lex_state = 136},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 136},
  [136] = {.lex_state = 136},
  [137] = {.lex_state = 136},
  [138] = {.lex_state = 136},
  [139] = {.lex_state = 136},
  [140] = {.lex_state = 136},
  [141] = {.lex_state = 136},
  [142] = {.lex_state = 136},
  [143] = {.lex_state = 137},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 136},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 1},
  [169] = {.lex_state = 136},
  [170] = {.lex_state = 1},
  [171] = {.lex_state = 136},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 1},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 136},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 136},
  [181] = {.lex_state = 136},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 1},
  [185] = {.lex_state = 5},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 136},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 1},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 5},
  [206] = {.lex_state = 136},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 136},
  [213] = {.lex_state = 136},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 136},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 1},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 137},
  [221] = {.lex_state = 136},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 136},
  [224] = {.lex_state = 5},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 136},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 136},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 137},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 1},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 136},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 136},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 137},
  [241] = {.lex_state = 1},
  [242] = {.lex_state = 136},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 137},
  [245] = {.lex_state = 136},
  [246] = {.lex_state = 136},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 5},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 136},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 137},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 137},
  [258] = {.lex_state = 137},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 137},
  [261] = {.lex_state = 1},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 136},
  [265] = {.lex_state = 1},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 136},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 5},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 5},
  [273] = {.lex_state = 136},
  [274] = {.lex_state = 5},
  [275] = {.lex_state = 136},
  [276] = {.lex_state = 137},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 137},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 137},
  [284] = {.lex_state = 136},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 136},
  [288] = {.lex_state = 136},
  [289] = {.lex_state = 136},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 136},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 136},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 1},
  [297] = {.lex_state = 1},
  [298] = {.lex_state = 136},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 136},
  [301] = {.lex_state = 136},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 5},
  [305] = {.lex_state = 1},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 136},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 136},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 136},
  [316] = {.lex_state = 136},
  [317] = {.lex_state = 136},
  [318] = {.lex_state = 136},
  [319] = {.lex_state = 1},
  [320] = {.lex_state = 1},
  [321] = {.lex_state = 136},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 136},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 1},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 1},
  [333] = {.lex_state = 1},
  [334] = {.lex_state = 4},
  [335] = {.lex_state = 136},
  [336] = {.lex_state = 171},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 1},
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
  },
  [1] = {
    [sym_source_file] = STATE(331),
    [sym__statement] = STATE(53),
    [sym_select_statement] = STATE(122),
    [sym_delete_statement] = STATE(122),
    [sym_begin_batch] = STATE(264),
    [sym_insert_statement] = STATE(122),
    [aux_sym_source_file_repeat1] = STATE(53),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_select_statement_token1] = ACTIONS(5),
    [aux_sym_delete_statement_token1] = ACTIONS(7),
    [aux_sym_begin_batch_token1] = ACTIONS(9),
    [aux_sym_insert_statement_token1] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      sym__hex_4digit,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(25), 1,
      sym__dec_digit,
    ACTIONS(27), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_0X,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(173), 1,
      sym_expression,
    STATE(325), 1,
      sym_expression_list,
    ACTIONS(15), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
    STATE(247), 5,
      sym_constant,
      sym_assignment_tuple,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [57] = 15,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      sym__hex_4digit,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(25), 1,
      sym__dec_digit,
    ACTIONS(27), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_0X,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(271), 1,
      sym_expression,
    ACTIONS(15), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
    STATE(247), 5,
      sym_constant,
      sym_assignment_tuple,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [111] = 3,
    ACTIONS(37), 1,
      sym__dec_digit,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(35), 20,
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
  [140] = 4,
    ACTIONS(42), 1,
      anon_sym_DOT,
    ACTIONS(44), 1,
      sym__dec_digit,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(40), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
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
  [170] = 4,
    ACTIONS(44), 1,
      sym__dec_digit,
    ACTIONS(48), 1,
      anon_sym_DOT,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(46), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
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
  [200] = 2,
    ACTIONS(52), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(50), 18,
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
  [225] = 2,
    ACTIONS(56), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(54), 18,
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
  [250] = 3,
    ACTIONS(44), 1,
      sym__dec_digit,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(58), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
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
  [277] = 15,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(25), 1,
      sym__dec_digit,
    ACTIONS(27), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_0X,
    ACTIONS(60), 1,
      anon_sym_STAR,
    ACTIONS(62), 1,
      anon_sym_RPAREN,
    ACTIONS(66), 1,
      sym__hex_4digit,
    ACTIONS(68), 1,
      anon_sym_SQUOTE,
    ACTIONS(70), 1,
      sym_object_name,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(328), 1,
      sym_function_args,
    ACTIONS(64), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(190), 2,
      sym_function_call,
      sym_constant,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [328] = 3,
    ACTIONS(44), 1,
      sym__dec_digit,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(72), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
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
  [355] = 2,
    ACTIONS(76), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(74), 18,
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
  [380] = 1,
    ACTIONS(78), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
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
  [401] = 1,
    ACTIONS(46), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
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
  [422] = 1,
    ACTIONS(80), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
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
  [443] = 13,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(25), 1,
      sym__dec_digit,
    ACTIONS(27), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_0X,
    ACTIONS(66), 1,
      sym__hex_4digit,
    ACTIONS(68), 1,
      anon_sym_SQUOTE,
    ACTIONS(70), 1,
      sym_object_name,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(310), 1,
      sym_function_args,
    ACTIONS(64), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(190), 2,
      sym_function_call,
      sym_constant,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [488] = 1,
    ACTIONS(82), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
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
  [509] = 13,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      sym__hex_4digit,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(25), 1,
      sym__dec_digit,
    ACTIONS(27), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_0X,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(172), 1,
      sym_constant,
    STATE(280), 1,
      sym_assignment_tuple,
    ACTIONS(15), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [553] = 12,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(25), 1,
      sym__dec_digit,
    ACTIONS(27), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(66), 1,
      sym__hex_4digit,
    ACTIONS(68), 1,
      anon_sym_SQUOTE,
    ACTIONS(84), 1,
      anon_sym_0X,
    ACTIONS(86), 1,
      sym_object_name,
    STATE(6), 1,
      aux_sym__decimal_literal,
    ACTIONS(64), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(47), 2,
      sym_function_call,
      sym_constant,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [595] = 12,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(25), 1,
      sym__dec_digit,
    ACTIONS(27), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(66), 1,
      sym__hex_4digit,
    ACTIONS(68), 1,
      anon_sym_SQUOTE,
    ACTIONS(86), 1,
      sym_object_name,
    ACTIONS(88), 1,
      anon_sym_0X,
    STATE(6), 1,
      aux_sym__decimal_literal,
    ACTIONS(64), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(47), 2,
      sym_function_call,
      sym_constant,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [637] = 12,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(25), 1,
      sym__dec_digit,
    ACTIONS(27), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_0X,
    ACTIONS(66), 1,
      sym__hex_4digit,
    ACTIONS(68), 1,
      anon_sym_SQUOTE,
    ACTIONS(90), 1,
      sym_object_name,
    STATE(6), 1,
      aux_sym__decimal_literal,
    ACTIONS(64), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(268), 2,
      sym_function_call,
      sym_constant,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [679] = 12,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      sym__hex_4digit,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(25), 1,
      sym__dec_digit,
    ACTIONS(27), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_0X,
    ACTIONS(92), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(166), 1,
      sym_constant,
    ACTIONS(15), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [720] = 12,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      sym__hex_4digit,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(25), 1,
      sym__dec_digit,
    ACTIONS(27), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(88), 1,
      anon_sym_0X,
    ACTIONS(94), 1,
      aux_sym_relalationContainsKey_token2,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(46), 1,
      sym_constant,
    ACTIONS(15), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [761] = 12,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      sym__hex_4digit,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(25), 1,
      sym__dec_digit,
    ACTIONS(27), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(84), 1,
      anon_sym_0X,
    ACTIONS(96), 1,
      aux_sym_relalationContainsKey_token2,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(46), 1,
      sym_constant,
    ACTIONS(15), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [802] = 11,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      sym__hex_4digit,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(25), 1,
      sym__dec_digit,
    ACTIONS(27), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_0X,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(196), 1,
      sym_constant,
    ACTIONS(15), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [840] = 11,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      sym__hex_4digit,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(25), 1,
      sym__dec_digit,
    ACTIONS(27), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_0X,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(172), 1,
      sym_constant,
    ACTIONS(15), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [878] = 11,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      sym__hex_4digit,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(25), 1,
      sym__dec_digit,
    ACTIONS(27), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(88), 1,
      anon_sym_0X,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(93), 1,
      sym_constant,
    ACTIONS(15), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [916] = 11,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      sym__hex_4digit,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(25), 1,
      sym__dec_digit,
    ACTIONS(27), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(84), 1,
      anon_sym_0X,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(55), 1,
      sym_constant,
    ACTIONS(15), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [954] = 11,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      sym__hex_4digit,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(25), 1,
      sym__dec_digit,
    ACTIONS(27), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_0X,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(236), 1,
      sym_constant,
    ACTIONS(15), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [992] = 11,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      sym__hex_4digit,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(25), 1,
      sym__dec_digit,
    ACTIONS(27), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(84), 1,
      anon_sym_0X,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(49), 1,
      sym_constant,
    ACTIONS(15), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [1030] = 11,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      sym__hex_4digit,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(25), 1,
      sym__dec_digit,
    ACTIONS(27), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(88), 1,
      anon_sym_0X,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(55), 1,
      sym_constant,
    ACTIONS(15), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [1068] = 11,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      sym__hex_4digit,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(25), 1,
      sym__dec_digit,
    ACTIONS(27), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_0X,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(312), 1,
      sym_constant,
    ACTIONS(15), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [1106] = 11,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      sym__hex_4digit,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(25), 1,
      sym__dec_digit,
    ACTIONS(27), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(84), 1,
      anon_sym_0X,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(47), 1,
      sym_constant,
    ACTIONS(15), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [1144] = 11,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      sym__hex_4digit,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(25), 1,
      sym__dec_digit,
    ACTIONS(27), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_0X,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(208), 1,
      sym_constant,
    ACTIONS(15), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [1182] = 11,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      sym__hex_4digit,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(25), 1,
      sym__dec_digit,
    ACTIONS(27), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(88), 1,
      anon_sym_0X,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(49), 1,
      sym_constant,
    ACTIONS(15), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [1220] = 11,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      sym__hex_4digit,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(25), 1,
      sym__dec_digit,
    ACTIONS(27), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_0X,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(123), 1,
      sym_constant,
    ACTIONS(15), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [1258] = 11,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      sym__hex_4digit,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(25), 1,
      sym__dec_digit,
    ACTIONS(27), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(88), 1,
      anon_sym_0X,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(47), 1,
      sym_constant,
    ACTIONS(15), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [1296] = 11,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      sym__hex_4digit,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(25), 1,
      sym__dec_digit,
    ACTIONS(27), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(88), 1,
      anon_sym_0X,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(109), 1,
      sym_constant,
    ACTIONS(15), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(14), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [1334] = 7,
    ACTIONS(100), 1,
      aux_sym_select_statement_token4,
    ACTIONS(102), 1,
      aux_sym_select_statement_token5,
    ACTIONS(104), 1,
      aux_sym_where_spec_token1,
    ACTIONS(106), 1,
      aux_sym_order_spec_token1,
    STATE(64), 1,
      sym_where_spec,
    STATE(100), 1,
      sym_order_spec,
    ACTIONS(98), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [1361] = 2,
    ACTIONS(110), 1,
      anon_sym_DOT,
    ACTIONS(108), 11,
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
  [1378] = 7,
    ACTIONS(104), 1,
      aux_sym_where_spec_token1,
    ACTIONS(106), 1,
      aux_sym_order_spec_token1,
    ACTIONS(114), 1,
      aux_sym_select_statement_token4,
    ACTIONS(116), 1,
      aux_sym_select_statement_token5,
    STATE(72), 1,
      sym_where_spec,
    STATE(95), 1,
      sym_order_spec,
    ACTIONS(112), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [1405] = 3,
    ACTIONS(120), 1,
      sym__hex_digit,
    STATE(42), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(118), 10,
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
  [1424] = 3,
    ACTIONS(125), 1,
      sym__hex_digit,
    STATE(42), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(123), 10,
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
  [1443] = 7,
    ACTIONS(104), 1,
      aux_sym_where_spec_token1,
    ACTIONS(106), 1,
      aux_sym_order_spec_token1,
    ACTIONS(129), 1,
      aux_sym_select_statement_token4,
    ACTIONS(131), 1,
      aux_sym_select_statement_token5,
    STATE(65), 1,
      sym_where_spec,
    STATE(92), 1,
      sym_order_spec,
    ACTIONS(127), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [1470] = 3,
    ACTIONS(133), 1,
      sym__hex_digit,
    STATE(45), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(118), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_relation_elements_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
  [1488] = 1,
    ACTIONS(136), 11,
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
  [1502] = 1,
    ACTIONS(138), 11,
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
  [1516] = 3,
    ACTIONS(142), 1,
      aux_sym_relation_elements_token1,
    STATE(48), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(140), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [1534] = 1,
    ACTIONS(145), 11,
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
  [1548] = 1,
    ACTIONS(147), 11,
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
  [1562] = 3,
    ACTIONS(151), 1,
      aux_sym_relation_elements_token1,
    STATE(48), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(149), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [1580] = 1,
    ACTIONS(153), 11,
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
  [1594] = 8,
    ACTIONS(5), 1,
      aux_sym_select_statement_token1,
    ACTIONS(7), 1,
      aux_sym_delete_statement_token1,
    ACTIONS(9), 1,
      aux_sym_begin_batch_token1,
    ACTIONS(11), 1,
      aux_sym_insert_statement_token1,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
    STATE(264), 1,
      sym_begin_batch,
    STATE(54), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(122), 3,
      sym_select_statement,
      sym_delete_statement,
      sym_insert_statement,
  [1622] = 8,
    ACTIONS(157), 1,
      ts_builtin_sym_end,
    ACTIONS(159), 1,
      aux_sym_select_statement_token1,
    ACTIONS(162), 1,
      aux_sym_delete_statement_token1,
    ACTIONS(165), 1,
      aux_sym_begin_batch_token1,
    ACTIONS(168), 1,
      aux_sym_insert_statement_token1,
    STATE(264), 1,
      sym_begin_batch,
    STATE(54), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(122), 3,
      sym_select_statement,
      sym_delete_statement,
      sym_insert_statement,
  [1650] = 1,
    ACTIONS(171), 11,
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
  [1664] = 3,
    ACTIONS(151), 1,
      aux_sym_relation_elements_token1,
    STATE(51), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(173), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [1682] = 1,
    ACTIONS(175), 11,
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
  [1696] = 1,
    ACTIONS(140), 11,
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
  [1710] = 1,
    ACTIONS(177), 11,
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
  [1724] = 1,
    ACTIONS(179), 11,
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
  [1738] = 1,
    ACTIONS(181), 11,
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
  [1752] = 3,
    ACTIONS(183), 1,
      sym__hex_digit,
    STATE(45), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(123), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_relation_elements_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
  [1770] = 5,
    ACTIONS(187), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(189), 1,
      aux_sym_if_exist_token1,
    STATE(101), 1,
      sym_if_not_exist,
    STATE(128), 1,
      sym_using_ttl_timestamp,
    ACTIONS(185), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [1791] = 5,
    ACTIONS(106), 1,
      aux_sym_order_spec_token1,
    ACTIONS(114), 1,
      aux_sym_select_statement_token4,
    ACTIONS(116), 1,
      aux_sym_select_statement_token5,
    STATE(95), 1,
      sym_order_spec,
    ACTIONS(112), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [1812] = 5,
    ACTIONS(100), 1,
      aux_sym_select_statement_token4,
    ACTIONS(102), 1,
      aux_sym_select_statement_token5,
    ACTIONS(106), 1,
      aux_sym_order_spec_token1,
    STATE(100), 1,
      sym_order_spec,
    ACTIONS(98), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [1833] = 5,
    ACTIONS(187), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(189), 1,
      aux_sym_if_exist_token1,
    STATE(105), 1,
      sym_if_not_exist,
    STATE(126), 1,
      sym_using_ttl_timestamp,
    ACTIONS(191), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [1854] = 5,
    ACTIONS(187), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(189), 1,
      aux_sym_if_exist_token1,
    STATE(94), 1,
      sym_if_not_exist,
    STATE(140), 1,
      sym_using_ttl_timestamp,
    ACTIONS(193), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [1875] = 1,
    ACTIONS(195), 10,
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
  [1888] = 3,
    ACTIONS(44), 1,
      sym__dec_digit,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(197), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_where_spec_token1,
      aux_sym_relation_elements_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [1905] = 5,
    ACTIONS(187), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(189), 1,
      aux_sym_if_exist_token1,
    STATE(102), 1,
      sym_if_not_exist,
    STATE(129), 1,
      sym_using_ttl_timestamp,
    ACTIONS(199), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [1926] = 5,
    ACTIONS(187), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(189), 1,
      aux_sym_if_exist_token1,
    STATE(98), 1,
      sym_if_not_exist,
    STATE(130), 1,
      sym_using_ttl_timestamp,
    ACTIONS(201), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [1947] = 5,
    ACTIONS(106), 1,
      aux_sym_order_spec_token1,
    ACTIONS(205), 1,
      aux_sym_select_statement_token4,
    ACTIONS(207), 1,
      aux_sym_select_statement_token5,
    STATE(97), 1,
      sym_order_spec,
    ACTIONS(203), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [1968] = 2,
    ACTIONS(211), 2,
      aux_sym_order_spec_element_token1,
      aux_sym_order_spec_element_token2,
    ACTIONS(209), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [1983] = 3,
    ACTIONS(213), 1,
      aux_sym_relation_elements_token1,
    STATE(85), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(173), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
  [1999] = 6,
    ACTIONS(215), 1,
      anon_sym_DOT,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      aux_sym_relation_element_token1,
    ACTIONS(225), 1,
      aux_sym_relalationContainsKey_token1,
    ACTIONS(221), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(219), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2021] = 4,
    ACTIONS(44), 1,
      sym__dec_digit,
    ACTIONS(229), 1,
      aux_sym_select_statement_token5,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(227), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [2039] = 3,
    ACTIONS(44), 1,
      sym__dec_digit,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(231), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_relation_elements_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [2055] = 3,
    ACTIONS(235), 1,
      aux_sym_if_exist_token1,
    STATE(115), 2,
      sym_if_exist,
      sym_if_spec,
    ACTIONS(233), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [2071] = 3,
    ACTIONS(237), 1,
      aux_sym_relation_elements_token1,
    STATE(79), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(140), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
  [2087] = 4,
    ACTIONS(44), 1,
      sym__dec_digit,
    ACTIONS(207), 1,
      aux_sym_select_statement_token5,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(203), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [2105] = 6,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      aux_sym_relation_element_token1,
    ACTIONS(240), 1,
      anon_sym_DOT,
    ACTIONS(246), 1,
      aux_sym_relalationContainsKey_token1,
    ACTIONS(244), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(242), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2127] = 4,
    ACTIONS(44), 1,
      sym__dec_digit,
    ACTIONS(116), 1,
      aux_sym_select_statement_token5,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(112), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [2145] = 4,
    ACTIONS(44), 1,
      sym__dec_digit,
    ACTIONS(250), 1,
      aux_sym_select_statement_token5,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(248), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [2163] = 3,
    ACTIONS(235), 1,
      aux_sym_if_exist_token1,
    STATE(141), 2,
      sym_if_exist,
      sym_if_spec,
    ACTIONS(252), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [2179] = 3,
    ACTIONS(213), 1,
      aux_sym_relation_elements_token1,
    STATE(79), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(149), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
  [2195] = 3,
    ACTIONS(235), 1,
      aux_sym_if_exist_token1,
    STATE(127), 2,
      sym_if_exist,
      sym_if_spec,
    ACTIONS(254), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [2211] = 3,
    ACTIONS(235), 1,
      aux_sym_if_exist_token1,
    STATE(120), 2,
      sym_if_exist,
      sym_if_spec,
    ACTIONS(256), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [2227] = 4,
    ACTIONS(44), 1,
      sym__dec_digit,
    ACTIONS(260), 1,
      aux_sym_select_statement_token5,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(258), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [2245] = 3,
    ACTIONS(264), 1,
      aux_sym_relation_elements_token1,
    STATE(106), 1,
      aux_sym_if_condition_list_repeat1,
    ACTIONS(262), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [2260] = 1,
    ACTIONS(266), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [2271] = 3,
    ACTIONS(268), 1,
      sym__hex_digit,
    STATE(99), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(123), 6,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_RBRACE,
  [2286] = 3,
    ACTIONS(100), 1,
      aux_sym_select_statement_token4,
    ACTIONS(102), 1,
      aux_sym_select_statement_token5,
    ACTIONS(98), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [2301] = 1,
    ACTIONS(270), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
  [2312] = 3,
    ACTIONS(187), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(136), 1,
      sym_using_ttl_timestamp,
    ACTIONS(272), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [2327] = 3,
    ACTIONS(205), 1,
      aux_sym_select_statement_token4,
    ACTIONS(207), 1,
      aux_sym_select_statement_token5,
    ACTIONS(203), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [2342] = 3,
    ACTIONS(264), 1,
      aux_sym_relation_elements_token1,
    STATE(89), 1,
      aux_sym_if_condition_list_repeat1,
    ACTIONS(274), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [2357] = 3,
    ACTIONS(260), 1,
      aux_sym_select_statement_token5,
    ACTIONS(276), 1,
      aux_sym_select_statement_token4,
    ACTIONS(258), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [2372] = 3,
    ACTIONS(187), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(126), 1,
      sym_using_ttl_timestamp,
    ACTIONS(191), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [2387] = 3,
    ACTIONS(278), 1,
      sym__hex_digit,
    STATE(99), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(118), 6,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_RBRACE,
  [2402] = 3,
    ACTIONS(114), 1,
      aux_sym_select_statement_token4,
    ACTIONS(116), 1,
      aux_sym_select_statement_token5,
    ACTIONS(112), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [2417] = 3,
    ACTIONS(187), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(130), 1,
      sym_using_ttl_timestamp,
    ACTIONS(201), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [2432] = 3,
    ACTIONS(187), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(140), 1,
      sym_using_ttl_timestamp,
    ACTIONS(193), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [2447] = 1,
    ACTIONS(281), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [2458] = 1,
    ACTIONS(283), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
  [2469] = 3,
    ACTIONS(187), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(129), 1,
      sym_using_ttl_timestamp,
    ACTIONS(199), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [2484] = 3,
    ACTIONS(287), 1,
      aux_sym_relation_elements_token1,
    STATE(106), 1,
      aux_sym_if_condition_list_repeat1,
    ACTIONS(285), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [2499] = 1,
    ACTIONS(285), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_relation_elements_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [2509] = 2,
    ACTIONS(292), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(290), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [2521] = 1,
    ACTIONS(294), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_relation_elements_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [2531] = 1,
    ACTIONS(296), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_insert_statement_token1,
  [2541] = 7,
    ACTIONS(298), 1,
      aux_sym_select_statement_token2,
    ACTIONS(300), 1,
      aux_sym_select_statement_token3,
    ACTIONS(302), 1,
      anon_sym_STAR,
    ACTIONS(304), 1,
      sym_object_name,
    STATE(206), 1,
      sym_select_element,
    STATE(212), 1,
      sym_function_call,
    STATE(245), 1,
      sym_select_elements,
  [2563] = 6,
    ACTIONS(306), 1,
      anon_sym_LPAREN,
    ACTIONS(308), 1,
      sym_object_name,
    STATE(68), 1,
      sym_relation_elements,
    STATE(74), 1,
      sym_relation_element,
    STATE(144), 1,
      sym_function_call,
    STATE(52), 2,
      sym_relalationContainsKey,
      sym_relalationContains,
  [2583] = 2,
    ACTIONS(310), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(290), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [2595] = 6,
    ACTIONS(306), 1,
      anon_sym_LPAREN,
    ACTIONS(312), 1,
      sym_object_name,
    STATE(56), 1,
      sym_relation_element,
    STATE(68), 1,
      sym_relation_elements,
    STATE(152), 1,
      sym_function_call,
    STATE(52), 2,
      sym_relalationContainsKey,
      sym_relalationContains,
  [2615] = 1,
    ACTIONS(252), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [2624] = 1,
    ACTIONS(314), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [2633] = 5,
    ACTIONS(306), 1,
      anon_sym_LPAREN,
    ACTIONS(312), 1,
      sym_object_name,
    STATE(58), 1,
      sym_relation_element,
    STATE(152), 1,
      sym_function_call,
    STATE(52), 2,
      sym_relalationContainsKey,
      sym_relalationContains,
  [2650] = 2,
    ACTIONS(318), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(316), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_relation_element_token1,
  [2661] = 1,
    ACTIONS(227), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [2670] = 1,
    ACTIONS(320), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [2679] = 1,
    ACTIONS(203), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [2688] = 2,
    ACTIONS(324), 1,
      anon_sym_SEMI,
    ACTIONS(322), 5,
      ts_builtin_sym_end,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [2699] = 6,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(326), 1,
      anon_sym_COMMA,
    ACTIONS(328), 1,
      anon_sym_RPAREN,
    STATE(189), 1,
      aux_sym_assignment_tuple_repeat1,
    STATE(193), 1,
      aux_sym_relation_element_repeat2,
    STATE(194), 1,
      sym_assignment_tuple,
  [2718] = 6,
    ACTIONS(302), 1,
      anon_sym_STAR,
    ACTIONS(304), 1,
      sym_object_name,
    ACTIONS(330), 1,
      aux_sym_select_statement_token3,
    STATE(206), 1,
      sym_select_element,
    STATE(212), 1,
      sym_function_call,
    STATE(235), 1,
      sym_select_elements,
  [2737] = 1,
    ACTIONS(112), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [2746] = 1,
    ACTIONS(199), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [2755] = 1,
    ACTIONS(256), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [2764] = 1,
    ACTIONS(201), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [2773] = 1,
    ACTIONS(193), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [2782] = 1,
    ACTIONS(191), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [2791] = 2,
    ACTIONS(334), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(332), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_relation_element_token1,
  [2802] = 1,
    ACTIONS(336), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [2811] = 1,
    ACTIONS(338), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [2820] = 5,
    ACTIONS(306), 1,
      anon_sym_LPAREN,
    ACTIONS(308), 1,
      sym_object_name,
    STATE(58), 1,
      sym_relation_element,
    STATE(144), 1,
      sym_function_call,
    STATE(52), 2,
      sym_relalationContainsKey,
      sym_relalationContains,
  [2837] = 1,
    ACTIONS(248), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [2846] = 1,
    ACTIONS(340), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [2855] = 1,
    ACTIONS(258), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [2864] = 1,
    ACTIONS(342), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [2873] = 1,
    ACTIONS(344), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [2882] = 1,
    ACTIONS(272), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [2891] = 1,
    ACTIONS(254), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [2900] = 1,
    ACTIONS(346), 5,
      ts_builtin_sym_end,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
  [2908] = 5,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(348), 1,
      sym__dec_digit,
    STATE(220), 1,
      aux_sym__decimal_literal,
    STATE(308), 1,
      sym__string_literal,
  [2924] = 2,
    ACTIONS(352), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(350), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2934] = 5,
    ACTIONS(354), 1,
      aux_sym_select_statement_token3,
    ACTIONS(356), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      aux_sym_insert_values_spec_token1,
    STATE(70), 1,
      sym_insert_values_spec,
    STATE(197), 1,
      sym_insert_column_spec,
  [2950] = 5,
    ACTIONS(354), 1,
      aux_sym_select_statement_token3,
    ACTIONS(356), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      aux_sym_insert_values_spec_token1,
    STATE(66), 1,
      sym_insert_values_spec,
    STATE(198), 1,
      sym_insert_column_spec,
  [2966] = 3,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    STATE(147), 1,
      aux_sym_assignment_tuple_repeat1,
    ACTIONS(363), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [2978] = 2,
    ACTIONS(367), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(365), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2988] = 2,
    ACTIONS(371), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(369), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2998] = 5,
    ACTIONS(354), 1,
      aux_sym_select_statement_token3,
    ACTIONS(356), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      aux_sym_insert_values_spec_token1,
    STATE(71), 1,
      sym_insert_values_spec,
    STATE(177), 1,
      sym_insert_column_spec,
  [3014] = 5,
    ACTIONS(302), 1,
      anon_sym_STAR,
    ACTIONS(373), 1,
      sym_object_name,
    STATE(206), 1,
      sym_select_element,
    STATE(212), 1,
      sym_function_call,
    STATE(253), 1,
      sym_select_elements,
  [3030] = 2,
    ACTIONS(377), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(375), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3040] = 5,
    ACTIONS(379), 1,
      sym_object_name,
    ACTIONS(381), 1,
      aux_sym_from_spec_token1,
    STATE(167), 1,
      sym_from_spec,
    STATE(215), 1,
      sym_delete_column_item,
    STATE(228), 1,
      sym_delete_column_list,
  [3056] = 5,
    ACTIONS(354), 1,
      aux_sym_select_statement_token3,
    ACTIONS(356), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      aux_sym_insert_values_spec_token1,
    STATE(63), 1,
      sym_insert_values_spec,
    STATE(195), 1,
      sym_insert_column_spec,
  [3072] = 4,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    ACTIONS(385), 1,
      anon_sym_DOT,
    ACTIONS(387), 1,
      aux_sym_select_element_token1,
    ACTIONS(383), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [3086] = 5,
    ACTIONS(302), 1,
      anon_sym_STAR,
    ACTIONS(373), 1,
      sym_object_name,
    STATE(206), 1,
      sym_select_element,
    STATE(212), 1,
      sym_function_call,
    STATE(235), 1,
      sym_select_elements,
  [3102] = 5,
    ACTIONS(379), 1,
      sym_object_name,
    ACTIONS(381), 1,
      aux_sym_from_spec_token1,
    STATE(162), 1,
      sym_from_spec,
    STATE(215), 1,
      sym_delete_column_item,
    STATE(242), 1,
      sym_delete_column_list,
  [3118] = 4,
    ACTIONS(389), 1,
      sym_object_name,
    ACTIONS(391), 1,
      sym__dquote,
    STATE(154), 1,
      sym_table,
    STATE(337), 1,
      sym_keyspace,
  [3131] = 4,
    ACTIONS(393), 1,
      sym_object_name,
    ACTIONS(395), 1,
      sym__dquote,
    STATE(211), 1,
      sym_column,
    STATE(324), 1,
      sym_column_list,
  [3144] = 2,
    ACTIONS(399), 1,
      anon_sym_DOT,
    ACTIONS(397), 3,
      aux_sym_select_statement_token3,
      anon_sym_LPAREN,
      aux_sym_insert_values_spec_token1,
  [3153] = 4,
    ACTIONS(401), 1,
      aux_sym_where_spec_token1,
    ACTIONS(403), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(86), 1,
      sym_where_spec,
    STATE(229), 1,
      sym_using_timestamp_spec,
  [3166] = 4,
    ACTIONS(401), 1,
      aux_sym_where_spec_token1,
    ACTIONS(403), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(84), 1,
      sym_where_spec,
    STATE(278), 1,
      sym_using_timestamp_spec,
  [3179] = 2,
    ACTIONS(407), 1,
      anon_sym_DOT,
    ACTIONS(405), 3,
      aux_sym_select_statement_token3,
      anon_sym_LPAREN,
      aux_sym_insert_values_spec_token1,
  [3188] = 4,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    ACTIONS(409), 1,
      anon_sym_COMMA,
    ACTIONS(411), 1,
      anon_sym_RPAREN,
    STATE(207), 1,
      aux_sym_function_args_repeat1,
  [3201] = 4,
    ACTIONS(413), 1,
      aux_sym_timestamp_token1,
    ACTIONS(415), 1,
      aux_sym_ttl_token1,
    STATE(108), 1,
      sym_timestamp,
    STATE(113), 1,
      sym_ttl,
  [3214] = 4,
    ACTIONS(417), 1,
      anon_sym_COMMA,
    ACTIONS(419), 1,
      anon_sym_COLON,
    ACTIONS(421), 1,
      anon_sym_RBRACE,
    STATE(183), 1,
      aux_sym_assignment_tuple_repeat1,
  [3227] = 4,
    ACTIONS(401), 1,
      aux_sym_where_spec_token1,
    ACTIONS(403), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(78), 1,
      sym_where_spec,
    STATE(263), 1,
      sym_using_timestamp_spec,
  [3240] = 4,
    ACTIONS(389), 1,
      sym_object_name,
    ACTIONS(391), 1,
      sym__dquote,
    STATE(150), 1,
      sym_table,
    STATE(286), 1,
      sym_keyspace,
  [3253] = 3,
    ACTIONS(403), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(267), 1,
      sym_using_timestamp_spec,
    ACTIONS(423), 2,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
  [3264] = 4,
    ACTIONS(425), 1,
      sym_object_name,
    ACTIONS(427), 1,
      aux_sym_if_exist_token2,
    STATE(96), 1,
      sym_if_condition,
    STATE(139), 1,
      sym_if_condition_list,
  [3277] = 3,
    ACTIONS(403), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(273), 1,
      sym_using_timestamp_spec,
    ACTIONS(429), 2,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
  [3288] = 1,
    ACTIONS(363), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [3295] = 3,
    ACTIONS(431), 1,
      anon_sym_COMMA,
    ACTIONS(433), 1,
      anon_sym_RPAREN,
    STATE(204), 1,
      aux_sym_expression_list_repeat1,
  [3305] = 3,
    ACTIONS(435), 1,
      anon_sym_COMMA,
    ACTIONS(438), 1,
      anon_sym_RPAREN,
    STATE(174), 1,
      aux_sym_relation_element_repeat1,
  [3315] = 3,
    ACTIONS(440), 1,
      anon_sym_COMMA,
    ACTIONS(442), 1,
      anon_sym_RPAREN,
    STATE(200), 1,
      aux_sym_relation_element_repeat2,
  [3325] = 3,
    ACTIONS(444), 1,
      sym_object_name,
    ACTIONS(446), 1,
      sym__dquote,
    STATE(145), 1,
      sym_table,
  [3335] = 3,
    ACTIONS(354), 1,
      aux_sym_select_statement_token3,
    ACTIONS(358), 1,
      aux_sym_insert_values_spec_token1,
    STATE(66), 1,
      sym_insert_values_spec,
  [3345] = 1,
    ACTIONS(448), 3,
      aux_sym_where_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
  [3351] = 3,
    ACTIONS(440), 1,
      anon_sym_COMMA,
    ACTIONS(450), 1,
      anon_sym_RPAREN,
    STATE(199), 1,
      aux_sym_relation_element_repeat2,
  [3361] = 3,
    ACTIONS(452), 1,
      anon_sym_COMMA,
    ACTIONS(455), 1,
      aux_sym_from_spec_token1,
    STATE(180), 1,
      aux_sym_delete_column_list_repeat1,
  [3371] = 2,
    ACTIONS(459), 1,
      aux_sym_begin_batch_token4,
    ACTIONS(457), 2,
      aux_sym_begin_batch_token2,
      aux_sym_begin_batch_token3,
  [3379] = 3,
    ACTIONS(461), 1,
      anon_sym_COMMA,
    ACTIONS(464), 1,
      anon_sym_RPAREN,
    STATE(182), 1,
      aux_sym_expression_list_repeat1,
  [3389] = 3,
    ACTIONS(417), 1,
      anon_sym_COMMA,
    ACTIONS(466), 1,
      anon_sym_RBRACE,
    STATE(147), 1,
      aux_sym_assignment_tuple_repeat1,
  [3399] = 3,
    ACTIONS(444), 1,
      sym_object_name,
    ACTIONS(446), 1,
      sym__dquote,
    STATE(146), 1,
      sym_table,
  [3409] = 3,
    ACTIONS(468), 1,
      sym__hex_digit,
    ACTIONS(471), 1,
      anon_sym_SQUOTE,
    STATE(185), 1,
      aux_sym__hexadecimal_literal_repeat1,
  [3419] = 2,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    ACTIONS(473), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3427] = 3,
    ACTIONS(417), 1,
      anon_sym_COMMA,
    ACTIONS(475), 1,
      anon_sym_RBRACK,
    STATE(147), 1,
      aux_sym_assignment_tuple_repeat1,
  [3437] = 3,
    ACTIONS(473), 1,
      anon_sym_RPAREN,
    ACTIONS(477), 1,
      anon_sym_COMMA,
    STATE(188), 1,
      aux_sym_function_args_repeat1,
  [3447] = 3,
    ACTIONS(417), 1,
      anon_sym_COMMA,
    ACTIONS(480), 1,
      anon_sym_RPAREN,
    STATE(147), 1,
      aux_sym_assignment_tuple_repeat1,
  [3457] = 3,
    ACTIONS(409), 1,
      anon_sym_COMMA,
    ACTIONS(411), 1,
      anon_sym_RPAREN,
    STATE(207), 1,
      aux_sym_function_args_repeat1,
  [3467] = 3,
    ACTIONS(482), 1,
      anon_sym_COMMA,
    ACTIONS(484), 1,
      anon_sym_RPAREN,
    STATE(174), 1,
      aux_sym_relation_element_repeat1,
  [3477] = 3,
    ACTIONS(486), 1,
      anon_sym_COMMA,
    ACTIONS(488), 1,
      aux_sym_from_spec_token1,
    STATE(180), 1,
      aux_sym_delete_column_list_repeat1,
  [3487] = 3,
    ACTIONS(440), 1,
      anon_sym_COMMA,
    ACTIONS(480), 1,
      anon_sym_RPAREN,
    STATE(200), 1,
      aux_sym_relation_element_repeat2,
  [3497] = 3,
    ACTIONS(440), 1,
      anon_sym_COMMA,
    ACTIONS(480), 1,
      anon_sym_RPAREN,
    STATE(175), 1,
      aux_sym_relation_element_repeat2,
  [3507] = 3,
    ACTIONS(354), 1,
      aux_sym_select_statement_token3,
    ACTIONS(358), 1,
      aux_sym_insert_values_spec_token1,
    STATE(71), 1,
      sym_insert_values_spec,
  [3517] = 3,
    ACTIONS(490), 1,
      anon_sym_COMMA,
    ACTIONS(492), 1,
      anon_sym_RBRACE,
    STATE(216), 1,
      aux_sym_assignment_map_repeat1,
  [3527] = 3,
    ACTIONS(354), 1,
      aux_sym_select_statement_token3,
    ACTIONS(358), 1,
      aux_sym_insert_values_spec_token1,
    STATE(67), 1,
      sym_insert_values_spec,
  [3537] = 3,
    ACTIONS(354), 1,
      aux_sym_select_statement_token3,
    ACTIONS(358), 1,
      aux_sym_insert_values_spec_token1,
    STATE(70), 1,
      sym_insert_values_spec,
  [3547] = 3,
    ACTIONS(440), 1,
      anon_sym_COMMA,
    ACTIONS(494), 1,
      anon_sym_RPAREN,
    STATE(200), 1,
      aux_sym_relation_element_repeat2,
  [3557] = 3,
    ACTIONS(496), 1,
      anon_sym_COMMA,
    ACTIONS(499), 1,
      anon_sym_RPAREN,
    STATE(200), 1,
      aux_sym_relation_element_repeat2,
  [3567] = 3,
    ACTIONS(440), 1,
      anon_sym_COMMA,
    ACTIONS(494), 1,
      anon_sym_RPAREN,
    STATE(222), 1,
      aux_sym_relation_element_repeat2,
  [3577] = 3,
    ACTIONS(393), 1,
      sym_object_name,
    ACTIONS(395), 1,
      sym__dquote,
    STATE(239), 1,
      sym_column,
  [3587] = 3,
    ACTIONS(501), 1,
      anon_sym_COMMA,
    ACTIONS(503), 1,
      anon_sym_RPAREN,
    STATE(209), 1,
      aux_sym_column_list_repeat1,
  [3597] = 3,
    ACTIONS(431), 1,
      anon_sym_COMMA,
    ACTIONS(505), 1,
      anon_sym_RPAREN,
    STATE(182), 1,
      aux_sym_expression_list_repeat1,
  [3607] = 3,
    ACTIONS(507), 1,
      sym__hex_digit,
    ACTIONS(509), 1,
      anon_sym_SQUOTE,
    STATE(185), 1,
      aux_sym__hexadecimal_literal_repeat1,
  [3617] = 3,
    ACTIONS(511), 1,
      anon_sym_COMMA,
    ACTIONS(513), 1,
      aux_sym_from_spec_token1,
    STATE(221), 1,
      aux_sym_select_elements_repeat1,
  [3627] = 3,
    ACTIONS(409), 1,
      anon_sym_COMMA,
    ACTIONS(515), 1,
      anon_sym_RPAREN,
    STATE(188), 1,
      aux_sym_function_args_repeat1,
  [3637] = 3,
    ACTIONS(417), 1,
      anon_sym_COMMA,
    ACTIONS(517), 1,
      anon_sym_RBRACK,
    STATE(187), 1,
      aux_sym_assignment_tuple_repeat1,
  [3647] = 3,
    ACTIONS(519), 1,
      anon_sym_COMMA,
    ACTIONS(522), 1,
      anon_sym_RPAREN,
    STATE(209), 1,
      aux_sym_column_list_repeat1,
  [3657] = 3,
    ACTIONS(482), 1,
      anon_sym_COMMA,
    ACTIONS(524), 1,
      anon_sym_RPAREN,
    STATE(191), 1,
      aux_sym_relation_element_repeat1,
  [3667] = 3,
    ACTIONS(501), 1,
      anon_sym_COMMA,
    ACTIONS(526), 1,
      anon_sym_RPAREN,
    STATE(203), 1,
      aux_sym_column_list_repeat1,
  [3677] = 2,
    ACTIONS(387), 1,
      aux_sym_select_element_token1,
    ACTIONS(383), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [3685] = 2,
    ACTIONS(530), 1,
      anon_sym_LBRACK,
    ACTIONS(528), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [3693] = 1,
    ACTIONS(405), 3,
      aux_sym_select_statement_token3,
      anon_sym_LPAREN,
      aux_sym_insert_values_spec_token1,
  [3699] = 3,
    ACTIONS(486), 1,
      anon_sym_COMMA,
    ACTIONS(532), 1,
      aux_sym_from_spec_token1,
    STATE(192), 1,
      aux_sym_delete_column_list_repeat1,
  [3709] = 3,
    ACTIONS(490), 1,
      anon_sym_COMMA,
    ACTIONS(534), 1,
      anon_sym_RBRACE,
    STATE(219), 1,
      aux_sym_assignment_map_repeat1,
  [3719] = 1,
    ACTIONS(397), 3,
      aux_sym_select_statement_token3,
      anon_sym_LPAREN,
      aux_sym_insert_values_spec_token1,
  [3725] = 3,
    ACTIONS(373), 1,
      sym_object_name,
    STATE(212), 1,
      sym_function_call,
    STATE(226), 1,
      sym_select_element,
  [3735] = 3,
    ACTIONS(536), 1,
      anon_sym_COMMA,
    ACTIONS(539), 1,
      anon_sym_RBRACE,
    STATE(219), 1,
      aux_sym_assignment_map_repeat1,
  [3745] = 3,
    ACTIONS(44), 1,
      sym__dec_digit,
    ACTIONS(541), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      aux_sym__decimal_literal,
  [3755] = 3,
    ACTIONS(511), 1,
      anon_sym_COMMA,
    ACTIONS(543), 1,
      aux_sym_from_spec_token1,
    STATE(223), 1,
      aux_sym_select_elements_repeat1,
  [3765] = 3,
    ACTIONS(440), 1,
      anon_sym_COMMA,
    ACTIONS(545), 1,
      anon_sym_RPAREN,
    STATE(200), 1,
      aux_sym_relation_element_repeat2,
  [3775] = 3,
    ACTIONS(547), 1,
      anon_sym_COMMA,
    ACTIONS(550), 1,
      aux_sym_from_spec_token1,
    STATE(223), 1,
      aux_sym_select_elements_repeat1,
  [3785] = 2,
    ACTIONS(552), 1,
      sym__hex_digit,
    STATE(43), 1,
      aux_sym__hexadecimal_literal_repeat2,
  [3792] = 2,
    ACTIONS(413), 1,
      aux_sym_timestamp_token1,
    STATE(178), 1,
      sym_timestamp,
  [3799] = 1,
    ACTIONS(550), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [3804] = 1,
    ACTIONS(438), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3809] = 2,
    ACTIONS(554), 1,
      aux_sym_from_spec_token1,
    STATE(162), 1,
      sym_from_spec,
  [3816] = 2,
    ACTIONS(401), 1,
      aux_sym_where_spec_token1,
    STATE(87), 1,
      sym_where_spec,
  [3823] = 1,
    ACTIONS(556), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3828] = 2,
    ACTIONS(558), 1,
      sym__dec_digit,
    STATE(76), 1,
      aux_sym__decimal_literal,
  [3835] = 1,
    ACTIONS(560), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3840] = 2,
    ACTIONS(562), 1,
      sym_object_name,
    STATE(59), 1,
      sym_from_spec_element,
  [3847] = 1,
    ACTIONS(564), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3852] = 2,
    ACTIONS(554), 1,
      aux_sym_from_spec_token1,
    STATE(39), 1,
      sym_from_spec,
  [3859] = 1,
    ACTIONS(566), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3864] = 1,
    ACTIONS(568), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [3869] = 1,
    ACTIONS(570), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3874] = 1,
    ACTIONS(522), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3879] = 2,
    ACTIONS(572), 1,
      sym__dec_digit,
    STATE(77), 1,
      aux_sym__decimal_literal,
  [3886] = 2,
    ACTIONS(574), 1,
      sym_object_name,
    STATE(90), 1,
      sym_order_spec_element,
  [3893] = 2,
    ACTIONS(554), 1,
      aux_sym_from_spec_token1,
    STATE(161), 1,
      sym_from_spec,
  [3900] = 1,
    ACTIONS(576), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3905] = 2,
    ACTIONS(578), 1,
      sym__dec_digit,
    STATE(9), 1,
      aux_sym__decimal_literal,
  [3912] = 2,
    ACTIONS(554), 1,
      aux_sym_from_spec_token1,
    STATE(44), 1,
      sym_from_spec,
  [3919] = 1,
    ACTIONS(580), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [3924] = 1,
    ACTIONS(582), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3929] = 1,
    ACTIONS(584), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3934] = 2,
    ACTIONS(415), 1,
      aux_sym_ttl_token1,
    STATE(132), 1,
      sym_ttl,
  [3941] = 2,
    ACTIONS(413), 1,
      aux_sym_timestamp_token1,
    STATE(132), 1,
      sym_timestamp,
  [3948] = 2,
    ACTIONS(586), 1,
      sym__hex_digit,
    STATE(62), 1,
      aux_sym__hexadecimal_literal_repeat2,
  [3955] = 1,
    ACTIONS(588), 2,
      aux_sym_select_statement_token3,
      aux_sym_insert_values_spec_token1,
  [3960] = 2,
    ACTIONS(554), 1,
      aux_sym_from_spec_token1,
    STATE(41), 1,
      sym_from_spec,
  [3967] = 1,
    ACTIONS(590), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3972] = 2,
    ACTIONS(592), 1,
      sym__dec_digit,
    STATE(82), 1,
      aux_sym__decimal_literal,
  [3979] = 1,
    ACTIONS(594), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3984] = 2,
    ACTIONS(596), 1,
      sym__dec_digit,
    STATE(83), 1,
      aux_sym__decimal_literal,
  [3991] = 2,
    ACTIONS(598), 1,
      sym__dec_digit,
    STATE(69), 1,
      aux_sym__decimal_literal,
  [3998] = 2,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    STATE(179), 1,
      sym_assignment_tuple,
  [4005] = 2,
    ACTIONS(600), 1,
      sym__dec_digit,
    STATE(80), 1,
      aux_sym__decimal_literal,
  [4012] = 2,
    ACTIONS(425), 1,
      sym_object_name,
    STATE(107), 1,
      sym_if_condition,
  [4019] = 1,
    ACTIONS(602), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4024] = 2,
    ACTIONS(401), 1,
      aux_sym_where_spec_token1,
    STATE(84), 1,
      sym_where_spec,
  [4031] = 2,
    ACTIONS(604), 1,
      aux_sym_delete_statement_token1,
    ACTIONS(606), 1,
      aux_sym_insert_statement_token1,
  [4038] = 2,
    ACTIONS(379), 1,
      sym_object_name,
    STATE(275), 1,
      sym_delete_column_item,
  [4045] = 1,
    ACTIONS(608), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4050] = 1,
    ACTIONS(429), 2,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
  [4055] = 1,
    ACTIONS(473), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4060] = 1,
    ACTIONS(610), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4065] = 2,
    ACTIONS(612), 1,
      sym__hex_digit,
    STATE(91), 1,
      aux_sym__hexadecimal_literal_repeat2,
  [4072] = 1,
    ACTIONS(464), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4077] = 1,
    ACTIONS(471), 2,
      sym__hex_digit,
      anon_sym_SQUOTE,
  [4082] = 1,
    ACTIONS(614), 2,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
  [4087] = 2,
    ACTIONS(507), 1,
      sym__hex_digit,
    STATE(205), 1,
      aux_sym__hexadecimal_literal_repeat1,
  [4094] = 1,
    ACTIONS(455), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [4099] = 2,
    ACTIONS(616), 1,
      sym__dec_digit,
    STATE(11), 1,
      aux_sym__decimal_literal,
  [4106] = 2,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    STATE(201), 1,
      sym_assignment_tuple,
  [4113] = 2,
    ACTIONS(401), 1,
      aux_sym_where_spec_token1,
    STATE(86), 1,
      sym_where_spec,
  [4120] = 2,
    ACTIONS(618), 1,
      sym__dec_digit,
    STATE(5), 1,
      aux_sym__decimal_literal,
  [4127] = 1,
    ACTIONS(499), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4132] = 2,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    STATE(280), 1,
      sym_assignment_tuple,
  [4139] = 1,
    ACTIONS(620), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4144] = 2,
    ACTIONS(622), 1,
      sym__dec_digit,
    STATE(88), 1,
      aux_sym__decimal_literal,
  [4151] = 1,
    ACTIONS(624), 1,
      sym__hex_4digit,
  [4155] = 1,
    ACTIONS(626), 1,
      anon_sym_LPAREN,
  [4159] = 1,
    ACTIONS(628), 1,
      anon_sym_DOT,
  [4163] = 1,
    ACTIONS(630), 1,
      aux_sym_select_statement_token6,
  [4167] = 1,
    ACTIONS(632), 1,
      aux_sym_insert_statement_token2,
  [4171] = 1,
    ACTIONS(634), 1,
      sym__hex_4digit,
  [4175] = 1,
    ACTIONS(636), 1,
      anon_sym_LPAREN,
  [4179] = 1,
    ACTIONS(638), 1,
      sym__dquote,
  [4183] = 1,
    ACTIONS(640), 1,
      aux_sym_select_statement_token6,
  [4187] = 1,
    ACTIONS(642), 1,
      anon_sym_DASH,
  [4191] = 1,
    ACTIONS(644), 1,
      aux_sym_select_statement_token6,
  [4195] = 1,
    ACTIONS(646), 1,
      aux_sym_if_not_exist_token1,
  [4199] = 1,
    ACTIONS(648), 1,
      sym_object_name,
  [4203] = 1,
    ACTIONS(650), 1,
      sym_object_name,
  [4207] = 1,
    ACTIONS(652), 1,
      aux_sym_select_statement_token6,
  [4211] = 1,
    ACTIONS(654), 1,
      anon_sym_DASH,
  [4215] = 1,
    ACTIONS(656), 1,
      aux_sym_begin_batch_token4,
  [4219] = 1,
    ACTIONS(658), 1,
      aux_sym_select_statement_token6,
  [4223] = 1,
    ACTIONS(660), 1,
      anon_sym_SQUOTE,
  [4227] = 1,
    ACTIONS(660), 1,
      anon_sym_DOLLAR_DOLLAR,
  [4231] = 1,
    ACTIONS(662), 1,
      sym__hex_digit,
  [4235] = 1,
    ACTIONS(664), 1,
      sym_object_name,
  [4239] = 1,
    ACTIONS(666), 1,
      anon_sym_STAR,
  [4243] = 1,
    ACTIONS(668), 1,
      anon_sym_LPAREN,
  [4247] = 1,
    ACTIONS(541), 1,
      anon_sym_RBRACK,
  [4251] = 1,
    ACTIONS(670), 1,
      sym__hex_4digit,
  [4255] = 1,
    ACTIONS(672), 1,
      anon_sym_RPAREN,
  [4259] = 1,
    ACTIONS(674), 1,
      anon_sym_LPAREN,
  [4263] = 1,
    ACTIONS(676), 1,
      anon_sym_COLON,
  [4267] = 1,
    ACTIONS(678), 1,
      sym__hex_4digit,
  [4271] = 1,
    ACTIONS(680), 1,
      anon_sym_EQ,
  [4275] = 1,
    ACTIONS(682), 1,
      sym__hex_4digit,
  [4279] = 1,
    ACTIONS(684), 1,
      aux_sym_order_spec_token2,
  [4283] = 1,
    ACTIONS(686), 1,
      aux_sym_select_statement_token6,
  [4287] = 1,
    ACTIONS(688), 1,
      sym__hex_4digit,
  [4291] = 1,
    ACTIONS(690), 1,
      sym_object_name,
  [4295] = 1,
    ACTIONS(692), 1,
      sym_object_name,
  [4299] = 1,
    ACTIONS(694), 1,
      aux_sym_if_exist_token2,
  [4303] = 1,
    ACTIONS(696), 1,
      anon_sym_RPAREN,
  [4307] = 1,
    ACTIONS(698), 1,
      aux_sym_select_statement_token6,
  [4311] = 1,
    ACTIONS(700), 1,
      anon_sym_RPAREN,
  [4315] = 1,
    ACTIONS(702), 1,
      anon_sym_RPAREN,
  [4319] = 1,
    ACTIONS(666), 1,
      sym_object_name,
  [4323] = 1,
    ACTIONS(704), 1,
      sym__dquote,
  [4327] = 1,
    ACTIONS(706), 1,
      anon_sym_RPAREN,
  [4331] = 1,
    ACTIONS(708), 1,
      sym__dquote,
  [4335] = 1,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
  [4339] = 1,
    ACTIONS(710), 1,
      ts_builtin_sym_end,
  [4343] = 1,
    ACTIONS(712), 1,
      sym_object_name,
  [4347] = 1,
    ACTIONS(714), 1,
      sym_object_name,
  [4351] = 1,
    ACTIONS(716), 1,
      aux_sym__string_literal_token2,
  [4355] = 1,
    ACTIONS(718), 1,
      aux_sym_insert_statement_token2,
  [4359] = 1,
    ACTIONS(720), 1,
      aux_sym__string_literal_token1,
  [4363] = 1,
    ACTIONS(722), 1,
      anon_sym_DOT,
  [4367] = 1,
    ACTIONS(724), 1,
      anon_sym_DASH,
  [4371] = 1,
    ACTIONS(726), 1,
      anon_sym_DASH,
  [4375] = 1,
    ACTIONS(728), 1,
      sym_object_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 57,
  [SMALL_STATE(4)] = 111,
  [SMALL_STATE(5)] = 140,
  [SMALL_STATE(6)] = 170,
  [SMALL_STATE(7)] = 200,
  [SMALL_STATE(8)] = 225,
  [SMALL_STATE(9)] = 250,
  [SMALL_STATE(10)] = 277,
  [SMALL_STATE(11)] = 328,
  [SMALL_STATE(12)] = 355,
  [SMALL_STATE(13)] = 380,
  [SMALL_STATE(14)] = 401,
  [SMALL_STATE(15)] = 422,
  [SMALL_STATE(16)] = 443,
  [SMALL_STATE(17)] = 488,
  [SMALL_STATE(18)] = 509,
  [SMALL_STATE(19)] = 553,
  [SMALL_STATE(20)] = 595,
  [SMALL_STATE(21)] = 637,
  [SMALL_STATE(22)] = 679,
  [SMALL_STATE(23)] = 720,
  [SMALL_STATE(24)] = 761,
  [SMALL_STATE(25)] = 802,
  [SMALL_STATE(26)] = 840,
  [SMALL_STATE(27)] = 878,
  [SMALL_STATE(28)] = 916,
  [SMALL_STATE(29)] = 954,
  [SMALL_STATE(30)] = 992,
  [SMALL_STATE(31)] = 1030,
  [SMALL_STATE(32)] = 1068,
  [SMALL_STATE(33)] = 1106,
  [SMALL_STATE(34)] = 1144,
  [SMALL_STATE(35)] = 1182,
  [SMALL_STATE(36)] = 1220,
  [SMALL_STATE(37)] = 1258,
  [SMALL_STATE(38)] = 1296,
  [SMALL_STATE(39)] = 1334,
  [SMALL_STATE(40)] = 1361,
  [SMALL_STATE(41)] = 1378,
  [SMALL_STATE(42)] = 1405,
  [SMALL_STATE(43)] = 1424,
  [SMALL_STATE(44)] = 1443,
  [SMALL_STATE(45)] = 1470,
  [SMALL_STATE(46)] = 1488,
  [SMALL_STATE(47)] = 1502,
  [SMALL_STATE(48)] = 1516,
  [SMALL_STATE(49)] = 1534,
  [SMALL_STATE(50)] = 1548,
  [SMALL_STATE(51)] = 1562,
  [SMALL_STATE(52)] = 1580,
  [SMALL_STATE(53)] = 1594,
  [SMALL_STATE(54)] = 1622,
  [SMALL_STATE(55)] = 1650,
  [SMALL_STATE(56)] = 1664,
  [SMALL_STATE(57)] = 1682,
  [SMALL_STATE(58)] = 1696,
  [SMALL_STATE(59)] = 1710,
  [SMALL_STATE(60)] = 1724,
  [SMALL_STATE(61)] = 1738,
  [SMALL_STATE(62)] = 1752,
  [SMALL_STATE(63)] = 1770,
  [SMALL_STATE(64)] = 1791,
  [SMALL_STATE(65)] = 1812,
  [SMALL_STATE(66)] = 1833,
  [SMALL_STATE(67)] = 1854,
  [SMALL_STATE(68)] = 1875,
  [SMALL_STATE(69)] = 1888,
  [SMALL_STATE(70)] = 1905,
  [SMALL_STATE(71)] = 1926,
  [SMALL_STATE(72)] = 1947,
  [SMALL_STATE(73)] = 1968,
  [SMALL_STATE(74)] = 1983,
  [SMALL_STATE(75)] = 1999,
  [SMALL_STATE(76)] = 2021,
  [SMALL_STATE(77)] = 2039,
  [SMALL_STATE(78)] = 2055,
  [SMALL_STATE(79)] = 2071,
  [SMALL_STATE(80)] = 2087,
  [SMALL_STATE(81)] = 2105,
  [SMALL_STATE(82)] = 2127,
  [SMALL_STATE(83)] = 2145,
  [SMALL_STATE(84)] = 2163,
  [SMALL_STATE(85)] = 2179,
  [SMALL_STATE(86)] = 2195,
  [SMALL_STATE(87)] = 2211,
  [SMALL_STATE(88)] = 2227,
  [SMALL_STATE(89)] = 2245,
  [SMALL_STATE(90)] = 2260,
  [SMALL_STATE(91)] = 2271,
  [SMALL_STATE(92)] = 2286,
  [SMALL_STATE(93)] = 2301,
  [SMALL_STATE(94)] = 2312,
  [SMALL_STATE(95)] = 2327,
  [SMALL_STATE(96)] = 2342,
  [SMALL_STATE(97)] = 2357,
  [SMALL_STATE(98)] = 2372,
  [SMALL_STATE(99)] = 2387,
  [SMALL_STATE(100)] = 2402,
  [SMALL_STATE(101)] = 2417,
  [SMALL_STATE(102)] = 2432,
  [SMALL_STATE(103)] = 2447,
  [SMALL_STATE(104)] = 2458,
  [SMALL_STATE(105)] = 2469,
  [SMALL_STATE(106)] = 2484,
  [SMALL_STATE(107)] = 2499,
  [SMALL_STATE(108)] = 2509,
  [SMALL_STATE(109)] = 2521,
  [SMALL_STATE(110)] = 2531,
  [SMALL_STATE(111)] = 2541,
  [SMALL_STATE(112)] = 2563,
  [SMALL_STATE(113)] = 2583,
  [SMALL_STATE(114)] = 2595,
  [SMALL_STATE(115)] = 2615,
  [SMALL_STATE(116)] = 2624,
  [SMALL_STATE(117)] = 2633,
  [SMALL_STATE(118)] = 2650,
  [SMALL_STATE(119)] = 2661,
  [SMALL_STATE(120)] = 2670,
  [SMALL_STATE(121)] = 2679,
  [SMALL_STATE(122)] = 2688,
  [SMALL_STATE(123)] = 2699,
  [SMALL_STATE(124)] = 2718,
  [SMALL_STATE(125)] = 2737,
  [SMALL_STATE(126)] = 2746,
  [SMALL_STATE(127)] = 2755,
  [SMALL_STATE(128)] = 2764,
  [SMALL_STATE(129)] = 2773,
  [SMALL_STATE(130)] = 2782,
  [SMALL_STATE(131)] = 2791,
  [SMALL_STATE(132)] = 2802,
  [SMALL_STATE(133)] = 2811,
  [SMALL_STATE(134)] = 2820,
  [SMALL_STATE(135)] = 2837,
  [SMALL_STATE(136)] = 2846,
  [SMALL_STATE(137)] = 2855,
  [SMALL_STATE(138)] = 2864,
  [SMALL_STATE(139)] = 2873,
  [SMALL_STATE(140)] = 2882,
  [SMALL_STATE(141)] = 2891,
  [SMALL_STATE(142)] = 2900,
  [SMALL_STATE(143)] = 2908,
  [SMALL_STATE(144)] = 2924,
  [SMALL_STATE(145)] = 2934,
  [SMALL_STATE(146)] = 2950,
  [SMALL_STATE(147)] = 2966,
  [SMALL_STATE(148)] = 2978,
  [SMALL_STATE(149)] = 2988,
  [SMALL_STATE(150)] = 2998,
  [SMALL_STATE(151)] = 3014,
  [SMALL_STATE(152)] = 3030,
  [SMALL_STATE(153)] = 3040,
  [SMALL_STATE(154)] = 3056,
  [SMALL_STATE(155)] = 3072,
  [SMALL_STATE(156)] = 3086,
  [SMALL_STATE(157)] = 3102,
  [SMALL_STATE(158)] = 3118,
  [SMALL_STATE(159)] = 3131,
  [SMALL_STATE(160)] = 3144,
  [SMALL_STATE(161)] = 3153,
  [SMALL_STATE(162)] = 3166,
  [SMALL_STATE(163)] = 3179,
  [SMALL_STATE(164)] = 3188,
  [SMALL_STATE(165)] = 3201,
  [SMALL_STATE(166)] = 3214,
  [SMALL_STATE(167)] = 3227,
  [SMALL_STATE(168)] = 3240,
  [SMALL_STATE(169)] = 3253,
  [SMALL_STATE(170)] = 3264,
  [SMALL_STATE(171)] = 3277,
  [SMALL_STATE(172)] = 3288,
  [SMALL_STATE(173)] = 3295,
  [SMALL_STATE(174)] = 3305,
  [SMALL_STATE(175)] = 3315,
  [SMALL_STATE(176)] = 3325,
  [SMALL_STATE(177)] = 3335,
  [SMALL_STATE(178)] = 3345,
  [SMALL_STATE(179)] = 3351,
  [SMALL_STATE(180)] = 3361,
  [SMALL_STATE(181)] = 3371,
  [SMALL_STATE(182)] = 3379,
  [SMALL_STATE(183)] = 3389,
  [SMALL_STATE(184)] = 3399,
  [SMALL_STATE(185)] = 3409,
  [SMALL_STATE(186)] = 3419,
  [SMALL_STATE(187)] = 3427,
  [SMALL_STATE(188)] = 3437,
  [SMALL_STATE(189)] = 3447,
  [SMALL_STATE(190)] = 3457,
  [SMALL_STATE(191)] = 3467,
  [SMALL_STATE(192)] = 3477,
  [SMALL_STATE(193)] = 3487,
  [SMALL_STATE(194)] = 3497,
  [SMALL_STATE(195)] = 3507,
  [SMALL_STATE(196)] = 3517,
  [SMALL_STATE(197)] = 3527,
  [SMALL_STATE(198)] = 3537,
  [SMALL_STATE(199)] = 3547,
  [SMALL_STATE(200)] = 3557,
  [SMALL_STATE(201)] = 3567,
  [SMALL_STATE(202)] = 3577,
  [SMALL_STATE(203)] = 3587,
  [SMALL_STATE(204)] = 3597,
  [SMALL_STATE(205)] = 3607,
  [SMALL_STATE(206)] = 3617,
  [SMALL_STATE(207)] = 3627,
  [SMALL_STATE(208)] = 3637,
  [SMALL_STATE(209)] = 3647,
  [SMALL_STATE(210)] = 3657,
  [SMALL_STATE(211)] = 3667,
  [SMALL_STATE(212)] = 3677,
  [SMALL_STATE(213)] = 3685,
  [SMALL_STATE(214)] = 3693,
  [SMALL_STATE(215)] = 3699,
  [SMALL_STATE(216)] = 3709,
  [SMALL_STATE(217)] = 3719,
  [SMALL_STATE(218)] = 3725,
  [SMALL_STATE(219)] = 3735,
  [SMALL_STATE(220)] = 3745,
  [SMALL_STATE(221)] = 3755,
  [SMALL_STATE(222)] = 3765,
  [SMALL_STATE(223)] = 3775,
  [SMALL_STATE(224)] = 3785,
  [SMALL_STATE(225)] = 3792,
  [SMALL_STATE(226)] = 3799,
  [SMALL_STATE(227)] = 3804,
  [SMALL_STATE(228)] = 3809,
  [SMALL_STATE(229)] = 3816,
  [SMALL_STATE(230)] = 3823,
  [SMALL_STATE(231)] = 3828,
  [SMALL_STATE(232)] = 3835,
  [SMALL_STATE(233)] = 3840,
  [SMALL_STATE(234)] = 3847,
  [SMALL_STATE(235)] = 3852,
  [SMALL_STATE(236)] = 3859,
  [SMALL_STATE(237)] = 3864,
  [SMALL_STATE(238)] = 3869,
  [SMALL_STATE(239)] = 3874,
  [SMALL_STATE(240)] = 3879,
  [SMALL_STATE(241)] = 3886,
  [SMALL_STATE(242)] = 3893,
  [SMALL_STATE(243)] = 3900,
  [SMALL_STATE(244)] = 3905,
  [SMALL_STATE(245)] = 3912,
  [SMALL_STATE(246)] = 3919,
  [SMALL_STATE(247)] = 3924,
  [SMALL_STATE(248)] = 3929,
  [SMALL_STATE(249)] = 3934,
  [SMALL_STATE(250)] = 3941,
  [SMALL_STATE(251)] = 3948,
  [SMALL_STATE(252)] = 3955,
  [SMALL_STATE(253)] = 3960,
  [SMALL_STATE(254)] = 3967,
  [SMALL_STATE(255)] = 3972,
  [SMALL_STATE(256)] = 3979,
  [SMALL_STATE(257)] = 3984,
  [SMALL_STATE(258)] = 3991,
  [SMALL_STATE(259)] = 3998,
  [SMALL_STATE(260)] = 4005,
  [SMALL_STATE(261)] = 4012,
  [SMALL_STATE(262)] = 4019,
  [SMALL_STATE(263)] = 4024,
  [SMALL_STATE(264)] = 4031,
  [SMALL_STATE(265)] = 4038,
  [SMALL_STATE(266)] = 4045,
  [SMALL_STATE(267)] = 4050,
  [SMALL_STATE(268)] = 4055,
  [SMALL_STATE(269)] = 4060,
  [SMALL_STATE(270)] = 4065,
  [SMALL_STATE(271)] = 4072,
  [SMALL_STATE(272)] = 4077,
  [SMALL_STATE(273)] = 4082,
  [SMALL_STATE(274)] = 4087,
  [SMALL_STATE(275)] = 4094,
  [SMALL_STATE(276)] = 4099,
  [SMALL_STATE(277)] = 4106,
  [SMALL_STATE(278)] = 4113,
  [SMALL_STATE(279)] = 4120,
  [SMALL_STATE(280)] = 4127,
  [SMALL_STATE(281)] = 4132,
  [SMALL_STATE(282)] = 4139,
  [SMALL_STATE(283)] = 4144,
  [SMALL_STATE(284)] = 4151,
  [SMALL_STATE(285)] = 4155,
  [SMALL_STATE(286)] = 4159,
  [SMALL_STATE(287)] = 4163,
  [SMALL_STATE(288)] = 4167,
  [SMALL_STATE(289)] = 4171,
  [SMALL_STATE(290)] = 4175,
  [SMALL_STATE(291)] = 4179,
  [SMALL_STATE(292)] = 4183,
  [SMALL_STATE(293)] = 4187,
  [SMALL_STATE(294)] = 4191,
  [SMALL_STATE(295)] = 4195,
  [SMALL_STATE(296)] = 4199,
  [SMALL_STATE(297)] = 4203,
  [SMALL_STATE(298)] = 4207,
  [SMALL_STATE(299)] = 4211,
  [SMALL_STATE(300)] = 4215,
  [SMALL_STATE(301)] = 4219,
  [SMALL_STATE(302)] = 4223,
  [SMALL_STATE(303)] = 4227,
  [SMALL_STATE(304)] = 4231,
  [SMALL_STATE(305)] = 4235,
  [SMALL_STATE(306)] = 4239,
  [SMALL_STATE(307)] = 4243,
  [SMALL_STATE(308)] = 4247,
  [SMALL_STATE(309)] = 4251,
  [SMALL_STATE(310)] = 4255,
  [SMALL_STATE(311)] = 4259,
  [SMALL_STATE(312)] = 4263,
  [SMALL_STATE(313)] = 4267,
  [SMALL_STATE(314)] = 4271,
  [SMALL_STATE(315)] = 4275,
  [SMALL_STATE(316)] = 4279,
  [SMALL_STATE(317)] = 4283,
  [SMALL_STATE(318)] = 4287,
  [SMALL_STATE(319)] = 4291,
  [SMALL_STATE(320)] = 4295,
  [SMALL_STATE(321)] = 4299,
  [SMALL_STATE(322)] = 4303,
  [SMALL_STATE(323)] = 4307,
  [SMALL_STATE(324)] = 4311,
  [SMALL_STATE(325)] = 4315,
  [SMALL_STATE(326)] = 4319,
  [SMALL_STATE(327)] = 4323,
  [SMALL_STATE(328)] = 4327,
  [SMALL_STATE(329)] = 4331,
  [SMALL_STATE(330)] = 4335,
  [SMALL_STATE(331)] = 4339,
  [SMALL_STATE(332)] = 4343,
  [SMALL_STATE(333)] = 4347,
  [SMALL_STATE(334)] = 4351,
  [SMALL_STATE(335)] = 4355,
  [SMALL_STATE(336)] = 4359,
  [SMALL_STATE(337)] = 4363,
  [SMALL_STATE(338)] = 4367,
  [SMALL_STATE(339)] = 4371,
  [SMALL_STATE(340)] = 4375,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__decimal_literal, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__decimal_literal, 2), SHIFT_REPEAT(4),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_literal, 2),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 4),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 4),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 3),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 3),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_literal, 3),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_literal, 4),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 3),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hexadecimal_literal, 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__uuid, 11),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 3, .production_id = 9),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec_element, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 5),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hexadecimal_literal_repeat2, 2),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hexadecimal_literal_repeat2, 2), SHIFT_REPEAT(42),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hexadecimal_literal, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hexadecimal_literal_repeat2, 2), SHIFT_REPEAT(45),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relalationContains, 3, .production_id = 10),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 3),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2), SHIFT_REPEAT(117),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relalationContainsKey, 4),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec_element, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(111),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(153),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(181),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(335),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 7),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 8),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 9),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 4),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 6),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 8),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_spec, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 7),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 5),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 6),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec_element, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 8),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ttl, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 3),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2), SHIFT_REPEAT(134),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 9),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 4),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 5),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 6),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 7),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec, 3),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 2),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 9),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 1),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hexadecimal_literal_repeat2, 2), SHIFT_REPEAT(99),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec_element, 2),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 4),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2), SHIFT_REPEAT(261),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition, 3),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_not_exist, 3, .production_id = 12),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 10),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 7),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 4),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 11),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 10),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_exist, 2),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_spec, 2, .production_id = 5),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_tuple_repeat1, 2), SHIFT_REPEAT(26),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_tuple_repeat1, 2),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 1),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 1, .production_id = 2),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyspace, 1, .production_id = 1),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3, .production_id = 7),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyspace, 3, .production_id = 6),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 1),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 2),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 3),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2), SHIFT_REPEAT(332),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_timestamp_spec, 2),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [452] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2), SHIFT_REPEAT(265),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [461] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(3),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [468] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hexadecimal_literal_repeat1, 2), SHIFT_REPEAT(304),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hexadecimal_literal_repeat1, 2),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2), SHIFT_REPEAT(21),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 2),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [496] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2), SHIFT_REPEAT(281),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 2),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 1),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 2),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [519] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2), SHIFT_REPEAT(202),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 1),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 1),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 1),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [536] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2), SHIFT_REPEAT(32),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 2),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [547] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2), SHIFT_REPEAT(218),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 6),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 5),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 1, .production_id = 8),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 4),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 4),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 3, .production_id = 11),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 2),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 5),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_column_spec, 3),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 4),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 4),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 3),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 3),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 3),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 4),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 4),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [710] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
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
