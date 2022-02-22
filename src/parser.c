#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 245
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 97
#define ALIAS_COUNT 2
#define TOKEN_COUNT 53
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 6

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
  sym_source_file = 53,
  sym__statement = 54,
  sym_select_statement = 55,
  sym_select_elements = 56,
  sym_select_element = 57,
  sym_function_call = 58,
  sym_function_args = 59,
  sym_constant = 60,
  sym__uuid = 61,
  sym__string_literal = 62,
  aux_sym__decimal_literal = 63,
  sym__float_literal = 64,
  sym__hexadecimal_literal = 65,
  sym_from_spec = 66,
  sym_from_spec_element = 67,
  sym_where_spec = 68,
  sym_relation_elements = 69,
  sym_relation_element = 70,
  sym_assignment_tuple = 71,
  sym_relalationContainsKey = 72,
  sym_relalationContains = 73,
  sym_order_spec = 74,
  sym_order_spec_element = 75,
  sym_delete_statement = 76,
  sym_begin_batch = 77,
  sym_delete_column_list = 78,
  sym_delete_column_item = 79,
  sym_using_timestamp_spec = 80,
  sym_timestamp = 81,
  sym_if_exist = 82,
  sym_if_spec = 83,
  sym_if_condition_list = 84,
  sym_if_condition = 85,
  aux_sym_source_file_repeat1 = 86,
  aux_sym_select_elements_repeat1 = 87,
  aux_sym_function_args_repeat1 = 88,
  aux_sym__hexadecimal_literal_repeat1 = 89,
  aux_sym__hexadecimal_literal_repeat2 = 90,
  aux_sym_relation_elements_repeat1 = 91,
  aux_sym_relation_element_repeat1 = 92,
  aux_sym_relation_element_repeat2 = 93,
  aux_sym_assignment_tuple_repeat1 = 94,
  aux_sym_delete_column_list_repeat1 = 95,
  aux_sym_if_condition_list_repeat1 = 96,
  anon_alias_sym_CONTAINS = 97,
  anon_alias_sym_IF = 98,
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
  field_content = 2,
  field_function = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_arguments] = "arguments",
  [field_content] = "content",
  [field_function] = "function",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [4] = {.index = 3, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_function, 0},
  [1] =
    {field_arguments, 2},
    {field_function, 0},
  [3] =
    {field_content, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [3] = {
    [0] = anon_alias_sym_IF,
  },
  [5] = {
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
  [11] = 8,
  [12] = 12,
  [13] = 13,
  [14] = 13,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 20,
  [22] = 22,
  [23] = 23,
  [24] = 22,
  [25] = 19,
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
  [52] = 33,
  [53] = 53,
  [54] = 54,
  [55] = 31,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 53,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 42,
  [67] = 41,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 39,
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
  [83] = 81,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 90,
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
  [104] = 96,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 101,
  [110] = 31,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 33,
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
  [176] = 175,
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
  [188] = 175,
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
  [244] = 224,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(121);
      if (lookahead == '$') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(150);
      if (lookahead == '(') ADVANCE(134);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == '*') ADVANCE(130);
      if (lookahead == ',') ADVANCE(131);
      if (lookahead == '-') ADVANCE(138);
      if (lookahead == '.') ADVANCE(132);
      if (lookahead == '0') ADVANCE(142);
      if (lookahead == ';') ADVANCE(122);
      if (lookahead == '<') ADVANCE(201);
      if (lookahead == '=') ADVANCE(200);
      if (lookahead == '>') ADVANCE(202);
      if (lookahead == 'X') ADVANCE(5);
      if (lookahead == '[') ADVANCE(217);
      if (lookahead == ']') ADVANCE(218);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(146);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(144);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(141);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(145);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(149);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(148);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(39);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(96);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(22);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(51);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(108);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(91);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(53);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(82);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 1:
      if (lookahead == '$') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(151);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == '*') ADVANCE(130);
      if (lookahead == '-') ADVANCE(138);
      if (lookahead == '0') ADVANCE(158);
      if (lookahead == 'X') ADVANCE(165);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(166);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(190);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(195);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 2:
      if (lookahead == '$') ADVANCE(154);
      END_STATE();
    case 3:
      if (lookahead == '$') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(155);
      if (lookahead != 0) ADVANCE(156);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(150);
      if (lookahead == '(') ADVANCE(134);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == ',') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(141);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(160);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(164);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(115);
      if (lookahead == '(') ADVANCE(134);
      if (lookahead == '*') ADVANCE(130);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(192);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(115);
      if (lookahead == '*') ADVANCE(130);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(170);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(115);
      if (lookahead == '*') ADVANCE(130);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 10:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(114);
      END_STATE();
    case 11:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 12:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 13:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(103);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(43);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(209);
      END_STATE();
    case 14:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(210);
      END_STATE();
    case 15:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(211);
      END_STATE();
    case 16:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(48);
      END_STATE();
    case 17:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(101);
      END_STATE();
    case 18:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(199);
      END_STATE();
    case 19:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(214);
      END_STATE();
    case 20:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(215);
      END_STATE();
    case 21:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(32);
      END_STATE();
    case 22:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 23:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 24:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 25:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 26:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 27:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(114);
      END_STATE();
    case 28:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 29:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 30:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 31:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(114);
      END_STATE();
    case 32:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 33:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 34:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 35:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 36:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 37:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 38:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(221);
      END_STATE();
    case 39:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(221);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(205);
      END_STATE();
    case 40:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(219);
      END_STATE();
    case 41:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(129);
      END_STATE();
    case 42:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(45);
      END_STATE();
    case 43:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(55);
      END_STATE();
    case 44:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(113);
      END_STATE();
    case 45:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(33);
      END_STATE();
    case 46:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(35);
      END_STATE();
    case 47:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(46);
      END_STATE();
    case 48:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(216);
      END_STATE();
    case 49:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(29);
      END_STATE();
    case 50:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 51:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(73);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 52:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 53:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 54:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(78);
      END_STATE();
    case 55:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 56:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 57:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(70);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 58:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 59:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 60:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(63);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(18);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(133);
      END_STATE();
    case 61:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(63);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(114);
      END_STATE();
    case 62:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(136);
      END_STATE();
    case 63:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 64:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 65:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(23);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(113);
      END_STATE();
    case 66:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 67:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 68:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(113);
      END_STATE();
    case 69:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 70:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 71:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(197);
      END_STATE();
    case 72:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(88);
      END_STATE();
    case 73:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(56);
      END_STATE();
    case 74:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(36);
      END_STATE();
    case 75:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 76:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(213);
      END_STATE();
    case 77:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 78:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 79:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 80:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 81:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 82:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(67);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(54);
      END_STATE();
    case 83:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 84:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 85:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 86:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 87:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 88:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(220);
      END_STATE();
    case 89:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(208);
      END_STATE();
    case 90:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 91:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 92:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 93:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 94:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(222);
      END_STATE();
    case 95:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(206);
      END_STATE();
    case 96:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(83);
      END_STATE();
    case 97:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(105);
      END_STATE();
    case 98:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(102);
      END_STATE();
    case 99:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(28);
      END_STATE();
    case 100:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(127);
      END_STATE();
    case 101:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(123);
      END_STATE();
    case 102:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(11);
      END_STATE();
    case 103:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(16);
      END_STATE();
    case 104:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(12);
      END_STATE();
    case 105:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(94);
      END_STATE();
    case 106:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(26);
      END_STATE();
    case 107:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(34);
      END_STATE();
    case 108:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 109:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 110:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(128);
      END_STATE();
    case 111:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(207);
      END_STATE();
    case 112:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(114);
      END_STATE();
    case 113:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(139);
      END_STATE();
    case 114:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(113);
      END_STATE();
    case 115:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 116:
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(156);
      END_STATE();
    case 117:
      if (eof) ADVANCE(121);
      if (lookahead == '$') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(150);
      if (lookahead == '(') ADVANCE(134);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == ',') ADVANCE(131);
      if (lookahead == '.') ADVANCE(132);
      if (lookahead == ';') ADVANCE(122);
      if (lookahead == '<') ADVANCE(201);
      if (lookahead == '=') ADVANCE(200);
      if (lookahead == '>') ADVANCE(202);
      if (lookahead == '[') ADVANCE(217);
      if (lookahead == ']') ADVANCE(218);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(60);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(13);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(86);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(30);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(57);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(39);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(51);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(91);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(37);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(81);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(117)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 118:
      if (eof) ADVANCE(121);
      if (lookahead == '$') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(150);
      if (lookahead == '(') ADVANCE(134);
      if (lookahead == '-') ADVANCE(138);
      if (lookahead == '0') ADVANCE(158);
      if (lookahead == ';') ADVANCE(122);
      if (lookahead == 'X') ADVANCE(5);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(61);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(27);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(31);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(10);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(22);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(50);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(108);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(90);
      if (('C' <= lookahead && lookahead <= 'E') ||
          ('c' <= lookahead && lookahead <= 'e')) ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(118)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 119:
      if (eof) ADVANCE(121);
      if (lookahead == ';') ADVANCE(122);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(146);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(143);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(145);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(50);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(91);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(119)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('C' <= lookahead && lookahead <= 'F') ||
          ('c' <= lookahead && lookahead <= 'f')) ADVANCE(141);
      END_STATE();
    case 120:
      if (eof) ADVANCE(121);
      if (lookahead == ';') ADVANCE(122);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(147);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(143);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(145);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(38);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(120)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('C' <= lookahead && lookahead <= 'F') ||
          ('c' <= lookahead && lookahead <= 'f')) ADVANCE(141);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_select_statement_token1);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_select_statement_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_select_statement_token3);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_select_statement_token3);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_select_statement_token4);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_select_statement_token5);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_select_statement_token6);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_select_element_token1);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__hex_4digit);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__hex_4digit);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__hex_digit);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'X') ADVANCE(161);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(43);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(209);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(63);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(52);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(153);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym__string_literal_token2);
      if (lookahead == '$') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(155);
      if (lookahead != 0) ADVANCE(156);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym__string_literal_token2);
      if (lookahead == '$') ADVANCE(116);
      if (lookahead != 0) ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__dec_digit);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__dec_digit);
      if (lookahead == 'X') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(114);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__dec_digit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(114);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_X_SQUOTE);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_0X);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__boolean_literal);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__boolean_literal);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_object_name);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == '\'') ADVANCE(160);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(194);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(187);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(163);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(177);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(185);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(186);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(193);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(137);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(173);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(196);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(126);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(167);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(176);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(175);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(191);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(179);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(196);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(168);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(178);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(188);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(189);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(124);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(169);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(182);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(174);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(168);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(171);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(140);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(193);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(194);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_from_spec_token1);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_where_spec_token1);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_relation_elements_token1);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(203);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(204);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_relation_element_token1);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_relalationContainsKey_token1);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_relalationContainsKey_token2);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_order_spec_token1);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_order_spec_token2);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_order_spec_element_token1);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_order_spec_element_token2);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_delete_statement_token1);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_begin_batch_token1);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_begin_batch_token2);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_begin_batch_token3);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_begin_batch_token4);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_using_timestamp_spec_token1);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_timestamp_token1);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_if_exist_token1);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_if_exist_token2);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 117},
  [4] = {.lex_state = 117},
  [5] = {.lex_state = 117},
  [6] = {.lex_state = 117},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 118},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 117},
  [13] = {.lex_state = 118},
  [14] = {.lex_state = 118},
  [15] = {.lex_state = 117},
  [16] = {.lex_state = 118},
  [17] = {.lex_state = 117},
  [18] = {.lex_state = 118},
  [19] = {.lex_state = 118},
  [20] = {.lex_state = 118},
  [21] = {.lex_state = 118},
  [22] = {.lex_state = 118},
  [23] = {.lex_state = 118},
  [24] = {.lex_state = 118},
  [25] = {.lex_state = 118},
  [26] = {.lex_state = 117},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 119},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 119},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 120},
  [53] = {.lex_state = 117},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 120},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 117},
  [61] = {.lex_state = 118},
  [62] = {.lex_state = 117},
  [63] = {.lex_state = 117},
  [64] = {.lex_state = 117},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 117},
  [70] = {.lex_state = 117},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 8},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 7},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 7},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 9},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 7},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 7},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 117},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 7},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 117},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 7},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 7},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 7},
  [120] = {.lex_state = 117},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 7},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 117},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 117},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 117},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 7},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 117},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 117},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 4},
  [152] = {.lex_state = 117},
  [153] = {.lex_state = 117},
  [154] = {.lex_state = 117},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 117},
  [158] = {.lex_state = 117},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 7},
  [162] = {.lex_state = 117},
  [163] = {.lex_state = 117},
  [164] = {.lex_state = 117},
  [165] = {.lex_state = 117},
  [166] = {.lex_state = 117},
  [167] = {.lex_state = 117},
  [168] = {.lex_state = 117},
  [169] = {.lex_state = 117},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 117},
  [172] = {.lex_state = 117},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 7},
  [175] = {.lex_state = 4},
  [176] = {.lex_state = 4},
  [177] = {.lex_state = 7},
  [178] = {.lex_state = 7},
  [179] = {.lex_state = 117},
  [180] = {.lex_state = 4},
  [181] = {.lex_state = 117},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 117},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 117},
  [188] = {.lex_state = 4},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 117},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 117},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 117},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 117},
  [199] = {.lex_state = 4},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 117},
  [202] = {.lex_state = 118},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 118},
  [206] = {.lex_state = 117},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 117},
  [210] = {.lex_state = 7},
  [211] = {.lex_state = 7},
  [212] = {.lex_state = 7},
  [213] = {.lex_state = 117},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 118},
  [216] = {.lex_state = 118},
  [217] = {.lex_state = 7},
  [218] = {.lex_state = 117},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 7},
  [225] = {.lex_state = 117},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 117},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 3},
  [230] = {.lex_state = 152},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 4},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 118},
  [238] = {.lex_state = 117},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 118},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 117},
  [244] = {.lex_state = 7},
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
  },
  [1] = {
    [sym_source_file] = STATE(242),
    [sym__statement] = STATE(51),
    [sym_select_statement] = STATE(99),
    [sym_delete_statement] = STATE(99),
    [sym_begin_batch] = STATE(239),
    [aux_sym_source_file_repeat1] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_select_statement_token1] = ACTIONS(5),
    [aux_sym_delete_statement_token1] = ACTIONS(7),
    [aux_sym_begin_batch_token1] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(11), 1,
      anon_sym_STAR,
    ACTIONS(13), 1,
      anon_sym_RPAREN,
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
      sym_object_name,
    STATE(12), 1,
      aux_sym__decimal_literal,
    STATE(219), 1,
      sym_function_args,
    ACTIONS(15), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(150), 2,
      sym_function_call,
      sym_constant,
    STATE(30), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [51] = 2,
    ACTIONS(35), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 17,
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
  [75] = 2,
    ACTIONS(39), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 17,
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
  [99] = 2,
    ACTIONS(43), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 17,
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
  [123] = 3,
    ACTIONS(47), 1,
      sym__dec_digit,
    STATE(6), 1,
      aux_sym__decimal_literal,
    ACTIONS(45), 16,
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
      aux_sym_if_exist_token1,
  [148] = 13,
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
      sym_object_name,
    STATE(12), 1,
      aux_sym__decimal_literal,
    STATE(231), 1,
      sym_function_args,
    ACTIONS(15), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(150), 2,
      sym_function_call,
      sym_constant,
    STATE(30), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [193] = 12,
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
    ACTIONS(50), 1,
      anon_sym_0X,
    ACTIONS(52), 1,
      sym_object_name,
    STATE(12), 1,
      aux_sym__decimal_literal,
    ACTIONS(15), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(40), 2,
      sym_function_call,
      sym_constant,
    STATE(30), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [235] = 12,
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
    ACTIONS(54), 1,
      sym_object_name,
    STATE(12), 1,
      aux_sym__decimal_literal,
    ACTIONS(15), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(160), 2,
      sym_function_call,
      sym_constant,
    STATE(30), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [277] = 13,
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
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    ACTIONS(60), 1,
      sym__hex_4digit,
    ACTIONS(62), 1,
      anon_sym_SQUOTE,
    STATE(12), 1,
      aux_sym__decimal_literal,
    STATE(191), 1,
      sym_constant,
    STATE(193), 1,
      sym_assignment_tuple,
    ACTIONS(58), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(30), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [321] = 12,
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
    ACTIONS(52), 1,
      sym_object_name,
    ACTIONS(64), 1,
      anon_sym_0X,
    STATE(12), 1,
      aux_sym__decimal_literal,
    ACTIONS(15), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(40), 2,
      sym_function_call,
      sym_constant,
    STATE(30), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [363] = 4,
    ACTIONS(68), 1,
      anon_sym_DOT,
    ACTIONS(70), 1,
      sym__dec_digit,
    STATE(6), 1,
      aux_sym__decimal_literal,
    ACTIONS(66), 13,
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
      aux_sym_if_exist_token1,
  [388] = 12,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(25), 1,
      sym__dec_digit,
    ACTIONS(27), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(50), 1,
      anon_sym_0X,
    ACTIONS(60), 1,
      sym__hex_4digit,
    ACTIONS(62), 1,
      anon_sym_SQUOTE,
    ACTIONS(72), 1,
      aux_sym_relalationContainsKey_token2,
    STATE(12), 1,
      aux_sym__decimal_literal,
    STATE(49), 1,
      sym_constant,
    ACTIONS(58), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(30), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [429] = 12,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(25), 1,
      sym__dec_digit,
    ACTIONS(27), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(60), 1,
      sym__hex_4digit,
    ACTIONS(62), 1,
      anon_sym_SQUOTE,
    ACTIONS(64), 1,
      anon_sym_0X,
    ACTIONS(74), 1,
      aux_sym_relalationContainsKey_token2,
    STATE(12), 1,
      aux_sym__decimal_literal,
    STATE(49), 1,
      sym_constant,
    ACTIONS(58), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(30), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [470] = 4,
    ACTIONS(70), 1,
      sym__dec_digit,
    ACTIONS(78), 1,
      anon_sym_DOT,
    STATE(6), 1,
      aux_sym__decimal_literal,
    ACTIONS(76), 13,
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
      aux_sym_if_exist_token1,
  [495] = 11,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(25), 1,
      sym__dec_digit,
    ACTIONS(27), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(50), 1,
      anon_sym_0X,
    ACTIONS(60), 1,
      sym__hex_4digit,
    ACTIONS(62), 1,
      anon_sym_SQUOTE,
    STATE(12), 1,
      aux_sym__decimal_literal,
    STATE(89), 1,
      sym_constant,
    ACTIONS(58), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(30), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [533] = 3,
    ACTIONS(70), 1,
      sym__dec_digit,
    STATE(6), 1,
      aux_sym__decimal_literal,
    ACTIONS(80), 13,
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
      aux_sym_if_exist_token1,
  [555] = 11,
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
      sym__hex_4digit,
    ACTIONS(62), 1,
      anon_sym_SQUOTE,
    STATE(12), 1,
      aux_sym__decimal_literal,
    STATE(191), 1,
      sym_constant,
    ACTIONS(58), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(30), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [593] = 11,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(25), 1,
      sym__dec_digit,
    ACTIONS(27), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(60), 1,
      sym__hex_4digit,
    ACTIONS(62), 1,
      anon_sym_SQUOTE,
    ACTIONS(64), 1,
      anon_sym_0X,
    STATE(12), 1,
      aux_sym__decimal_literal,
    STATE(40), 1,
      sym_constant,
    ACTIONS(58), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(30), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [631] = 11,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(25), 1,
      sym__dec_digit,
    ACTIONS(27), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(60), 1,
      sym__hex_4digit,
    ACTIONS(62), 1,
      anon_sym_SQUOTE,
    ACTIONS(64), 1,
      anon_sym_0X,
    STATE(12), 1,
      aux_sym__decimal_literal,
    STATE(45), 1,
      sym_constant,
    ACTIONS(58), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(30), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [669] = 11,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(25), 1,
      sym__dec_digit,
    ACTIONS(27), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(50), 1,
      anon_sym_0X,
    ACTIONS(60), 1,
      sym__hex_4digit,
    ACTIONS(62), 1,
      anon_sym_SQUOTE,
    STATE(12), 1,
      aux_sym__decimal_literal,
    STATE(45), 1,
      sym_constant,
    ACTIONS(58), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(30), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [707] = 11,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(25), 1,
      sym__dec_digit,
    ACTIONS(27), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(50), 1,
      anon_sym_0X,
    ACTIONS(60), 1,
      sym__hex_4digit,
    ACTIONS(62), 1,
      anon_sym_SQUOTE,
    STATE(12), 1,
      aux_sym__decimal_literal,
    STATE(50), 1,
      sym_constant,
    ACTIONS(58), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(30), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [745] = 11,
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
      sym__hex_4digit,
    ACTIONS(62), 1,
      anon_sym_SQUOTE,
    STATE(12), 1,
      aux_sym__decimal_literal,
    STATE(86), 1,
      sym_constant,
    ACTIONS(58), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(30), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [783] = 11,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(25), 1,
      sym__dec_digit,
    ACTIONS(27), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(60), 1,
      sym__hex_4digit,
    ACTIONS(62), 1,
      anon_sym_SQUOTE,
    ACTIONS(64), 1,
      anon_sym_0X,
    STATE(12), 1,
      aux_sym__decimal_literal,
    STATE(50), 1,
      sym_constant,
    ACTIONS(58), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(30), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [821] = 11,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(25), 1,
      sym__dec_digit,
    ACTIONS(27), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(50), 1,
      anon_sym_0X,
    ACTIONS(60), 1,
      sym__hex_4digit,
    ACTIONS(62), 1,
      anon_sym_SQUOTE,
    STATE(12), 1,
      aux_sym__decimal_literal,
    STATE(40), 1,
      sym_constant,
    ACTIONS(58), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(30), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [859] = 3,
    ACTIONS(70), 1,
      sym__dec_digit,
    STATE(6), 1,
      aux_sym__decimal_literal,
    ACTIONS(82), 13,
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
      aux_sym_if_exist_token1,
  [881] = 1,
    ACTIONS(84), 14,
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
      aux_sym_if_exist_token1,
  [898] = 1,
    ACTIONS(86), 13,
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
      aux_sym_if_exist_token1,
  [914] = 1,
    ACTIONS(88), 13,
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
      aux_sym_if_exist_token1,
  [930] = 1,
    ACTIONS(66), 13,
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
      aux_sym_if_exist_token1,
  [946] = 3,
    ACTIONS(92), 1,
      sym__hex_digit,
    STATE(33), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(90), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
  [964] = 7,
    ACTIONS(96), 1,
      aux_sym_select_statement_token4,
    ACTIONS(98), 1,
      aux_sym_select_statement_token5,
    ACTIONS(100), 1,
      aux_sym_where_spec_token1,
    ACTIONS(102), 1,
      aux_sym_order_spec_token1,
    STATE(56), 1,
      sym_where_spec,
    STATE(76), 1,
      sym_order_spec,
    ACTIONS(94), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
  [990] = 3,
    ACTIONS(106), 1,
      sym__hex_digit,
    STATE(33), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(104), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
  [1008] = 7,
    ACTIONS(100), 1,
      aux_sym_where_spec_token1,
    ACTIONS(102), 1,
      aux_sym_order_spec_token1,
    ACTIONS(111), 1,
      aux_sym_select_statement_token4,
    ACTIONS(113), 1,
      aux_sym_select_statement_token5,
    STATE(54), 1,
      sym_where_spec,
    STATE(80), 1,
      sym_order_spec,
    ACTIONS(109), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
  [1034] = 2,
    ACTIONS(117), 1,
      anon_sym_DOT,
    ACTIONS(115), 10,
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
  [1050] = 7,
    ACTIONS(100), 1,
      aux_sym_where_spec_token1,
    ACTIONS(102), 1,
      aux_sym_order_spec_token1,
    ACTIONS(121), 1,
      aux_sym_select_statement_token4,
    ACTIONS(123), 1,
      aux_sym_select_statement_token5,
    STATE(57), 1,
      sym_where_spec,
    STATE(85), 1,
      sym_order_spec,
    ACTIONS(119), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
  [1076] = 1,
    ACTIONS(125), 10,
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
  [1089] = 1,
    ACTIONS(127), 10,
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
  [1102] = 3,
    ACTIONS(131), 1,
      aux_sym_relation_elements_token1,
    STATE(42), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(129), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
  [1119] = 1,
    ACTIONS(133), 10,
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
  [1132] = 3,
    ACTIONS(135), 1,
      aux_sym_relation_elements_token1,
    STATE(41), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(127), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
  [1149] = 3,
    ACTIONS(131), 1,
      aux_sym_relation_elements_token1,
    STATE(41), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(138), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
  [1166] = 1,
    ACTIONS(140), 10,
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
  [1179] = 1,
    ACTIONS(142), 10,
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
  [1192] = 1,
    ACTIONS(144), 10,
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
  [1205] = 1,
    ACTIONS(146), 10,
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
  [1218] = 1,
    ACTIONS(148), 10,
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
  [1231] = 1,
    ACTIONS(150), 10,
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
  [1244] = 1,
    ACTIONS(152), 10,
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
  [1257] = 1,
    ACTIONS(154), 10,
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
  [1270] = 7,
    ACTIONS(5), 1,
      aux_sym_select_statement_token1,
    ACTIONS(7), 1,
      aux_sym_delete_statement_token1,
    ACTIONS(9), 1,
      aux_sym_begin_batch_token1,
    ACTIONS(156), 1,
      ts_builtin_sym_end,
    STATE(239), 1,
      sym_begin_batch,
    STATE(58), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(99), 2,
      sym_select_statement,
      sym_delete_statement,
  [1294] = 3,
    ACTIONS(158), 1,
      sym__hex_digit,
    STATE(52), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(104), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_relation_elements_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_if_exist_token1,
  [1310] = 6,
    ACTIONS(161), 1,
      anon_sym_DOT,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      aux_sym_relation_element_token1,
    ACTIONS(171), 1,
      aux_sym_relalationContainsKey_token1,
    ACTIONS(167), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1332] = 5,
    ACTIONS(102), 1,
      aux_sym_order_spec_token1,
    ACTIONS(121), 1,
      aux_sym_select_statement_token4,
    ACTIONS(123), 1,
      aux_sym_select_statement_token5,
    STATE(85), 1,
      sym_order_spec,
    ACTIONS(119), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
  [1352] = 3,
    ACTIONS(173), 1,
      sym__hex_digit,
    STATE(52), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(90), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_relation_elements_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_if_exist_token1,
  [1368] = 5,
    ACTIONS(102), 1,
      aux_sym_order_spec_token1,
    ACTIONS(177), 1,
      aux_sym_select_statement_token4,
    ACTIONS(179), 1,
      aux_sym_select_statement_token5,
    STATE(78), 1,
      sym_order_spec,
    ACTIONS(175), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
  [1388] = 5,
    ACTIONS(96), 1,
      aux_sym_select_statement_token4,
    ACTIONS(98), 1,
      aux_sym_select_statement_token5,
    ACTIONS(102), 1,
      aux_sym_order_spec_token1,
    STATE(76), 1,
      sym_order_spec,
    ACTIONS(94), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
  [1408] = 7,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
    ACTIONS(183), 1,
      aux_sym_select_statement_token1,
    ACTIONS(186), 1,
      aux_sym_delete_statement_token1,
    ACTIONS(189), 1,
      aux_sym_begin_batch_token1,
    STATE(239), 1,
      sym_begin_batch,
    STATE(58), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(99), 2,
      sym_select_statement,
      sym_delete_statement,
  [1432] = 1,
    ACTIONS(192), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      aux_sym_order_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_if_exist_token1,
  [1444] = 6,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      aux_sym_relation_element_token1,
    ACTIONS(194), 1,
      anon_sym_DOT,
    ACTIONS(200), 1,
      aux_sym_relalationContainsKey_token1,
    ACTIONS(198), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(196), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1466] = 2,
    ACTIONS(204), 2,
      aux_sym_order_spec_element_token1,
      aux_sym_order_spec_element_token2,
    ACTIONS(202), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
  [1480] = 4,
    ACTIONS(70), 1,
      sym__dec_digit,
    ACTIONS(98), 1,
      aux_sym_select_statement_token5,
    STATE(6), 1,
      aux_sym__decimal_literal,
    ACTIONS(94), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
  [1497] = 4,
    ACTIONS(70), 1,
      sym__dec_digit,
    ACTIONS(208), 1,
      aux_sym_select_statement_token5,
    STATE(6), 1,
      aux_sym__decimal_literal,
    ACTIONS(206), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
  [1514] = 4,
    ACTIONS(70), 1,
      sym__dec_digit,
    ACTIONS(212), 1,
      aux_sym_select_statement_token5,
    STATE(6), 1,
      aux_sym__decimal_literal,
    ACTIONS(210), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
  [1531] = 3,
    ACTIONS(216), 1,
      aux_sym_if_exist_token1,
    STATE(97), 2,
      sym_if_exist,
      sym_if_spec,
    ACTIONS(214), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
  [1546] = 3,
    ACTIONS(218), 1,
      aux_sym_relation_elements_token1,
    STATE(67), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(138), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_if_exist_token1,
  [1561] = 3,
    ACTIONS(220), 1,
      aux_sym_relation_elements_token1,
    STATE(67), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(127), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_if_exist_token1,
  [1576] = 3,
    ACTIONS(216), 1,
      aux_sym_if_exist_token1,
    STATE(105), 2,
      sym_if_exist,
      sym_if_spec,
    ACTIONS(223), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
  [1591] = 4,
    ACTIONS(70), 1,
      sym__dec_digit,
    ACTIONS(227), 1,
      aux_sym_select_statement_token5,
    STATE(6), 1,
      aux_sym__decimal_literal,
    ACTIONS(225), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
  [1608] = 4,
    ACTIONS(70), 1,
      sym__dec_digit,
    ACTIONS(179), 1,
      aux_sym_select_statement_token5,
    STATE(6), 1,
      aux_sym__decimal_literal,
    ACTIONS(175), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
  [1625] = 3,
    ACTIONS(218), 1,
      aux_sym_relation_elements_token1,
    STATE(66), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(129), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_if_exist_token1,
  [1640] = 3,
    ACTIONS(216), 1,
      aux_sym_if_exist_token1,
    STATE(107), 2,
      sym_if_exist,
      sym_if_spec,
    ACTIONS(229), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
  [1655] = 3,
    ACTIONS(216), 1,
      aux_sym_if_exist_token1,
    STATE(100), 2,
      sym_if_exist,
      sym_if_spec,
    ACTIONS(231), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
  [1670] = 3,
    ACTIONS(235), 1,
      aux_sym_relation_elements_token1,
    STATE(82), 1,
      aux_sym_if_condition_list_repeat1,
    ACTIONS(233), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
  [1684] = 7,
    ACTIONS(237), 1,
      aux_sym_select_statement_token2,
    ACTIONS(239), 1,
      aux_sym_select_statement_token3,
    ACTIONS(241), 1,
      anon_sym_STAR,
    ACTIONS(243), 1,
      sym_object_name,
    STATE(153), 1,
      sym_function_call,
    STATE(157), 1,
      sym_select_element,
    STATE(168), 1,
      sym_select_elements,
  [1706] = 3,
    ACTIONS(177), 1,
      aux_sym_select_statement_token4,
    ACTIONS(179), 1,
      aux_sym_select_statement_token5,
    ACTIONS(175), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
  [1720] = 3,
    ACTIONS(235), 1,
      aux_sym_relation_elements_token1,
    STATE(74), 1,
      aux_sym_if_condition_list_repeat1,
    ACTIONS(245), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
  [1734] = 3,
    ACTIONS(208), 1,
      aux_sym_select_statement_token5,
    ACTIONS(247), 1,
      aux_sym_select_statement_token4,
    ACTIONS(206), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
  [1748] = 1,
    ACTIONS(249), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
  [1758] = 3,
    ACTIONS(121), 1,
      aux_sym_select_statement_token4,
    ACTIONS(123), 1,
      aux_sym_select_statement_token5,
    ACTIONS(119), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
  [1772] = 6,
    ACTIONS(251), 1,
      anon_sym_LPAREN,
    ACTIONS(253), 1,
      sym_object_name,
    STATE(59), 1,
      sym_relation_elements,
    STATE(71), 1,
      sym_relation_element,
    STATE(96), 1,
      sym_function_call,
    STATE(48), 2,
      sym_relalationContainsKey,
      sym_relalationContains,
  [1792] = 3,
    ACTIONS(257), 1,
      aux_sym_relation_elements_token1,
    STATE(82), 1,
      aux_sym_if_condition_list_repeat1,
    ACTIONS(255), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
  [1806] = 6,
    ACTIONS(251), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      sym_object_name,
    STATE(39), 1,
      sym_relation_element,
    STATE(59), 1,
      sym_relation_elements,
    STATE(104), 1,
      sym_function_call,
    STATE(48), 2,
      sym_relalationContainsKey,
      sym_relalationContains,
  [1826] = 1,
    ACTIONS(262), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
  [1836] = 3,
    ACTIONS(96), 1,
      aux_sym_select_statement_token4,
    ACTIONS(98), 1,
      aux_sym_select_statement_token5,
    ACTIONS(94), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
  [1850] = 6,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    ACTIONS(264), 1,
      anon_sym_COMMA,
    ACTIONS(266), 1,
      anon_sym_RPAREN,
    STATE(130), 1,
      aux_sym_assignment_tuple_repeat1,
    STATE(131), 1,
      aux_sym_relation_element_repeat2,
    STATE(133), 1,
      sym_assignment_tuple,
  [1869] = 6,
    ACTIONS(241), 1,
      anon_sym_STAR,
    ACTIONS(243), 1,
      sym_object_name,
    ACTIONS(268), 1,
      aux_sym_select_statement_token3,
    STATE(153), 1,
      sym_function_call,
    STATE(157), 1,
      sym_select_element,
    STATE(198), 1,
      sym_select_elements,
  [1888] = 2,
    ACTIONS(272), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(270), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_relation_element_token1,
  [1899] = 1,
    ACTIONS(274), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_relation_elements_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
  [1908] = 5,
    ACTIONS(251), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      sym_object_name,
    STATE(38), 1,
      sym_relation_element,
    STATE(104), 1,
      sym_function_call,
    STATE(48), 2,
      sym_relalationContainsKey,
      sym_relalationContains,
  [1925] = 1,
    ACTIONS(255), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_relation_elements_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
  [1934] = 5,
    ACTIONS(251), 1,
      anon_sym_LPAREN,
    ACTIONS(253), 1,
      sym_object_name,
    STATE(38), 1,
      sym_relation_element,
    STATE(96), 1,
      sym_function_call,
    STATE(48), 2,
      sym_relalationContainsKey,
      sym_relalationContains,
  [1951] = 2,
    ACTIONS(278), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(276), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_relation_element_token1,
  [1962] = 1,
    ACTIONS(210), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
  [1970] = 5,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(62), 1,
      anon_sym_SQUOTE,
    ACTIONS(280), 1,
      sym__dec_digit,
    STATE(135), 1,
      aux_sym__decimal_literal,
    STATE(203), 1,
      sym__string_literal,
  [1986] = 2,
    ACTIONS(284), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(282), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1996] = 1,
    ACTIONS(223), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
  [2004] = 1,
    ACTIONS(206), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
  [2012] = 2,
    ACTIONS(288), 1,
      anon_sym_SEMI,
    ACTIONS(286), 4,
      ts_builtin_sym_end,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
  [2022] = 1,
    ACTIONS(229), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
  [2030] = 2,
    ACTIONS(292), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(290), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2040] = 1,
    ACTIONS(175), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
  [2048] = 5,
    ACTIONS(241), 1,
      anon_sym_STAR,
    ACTIONS(294), 1,
      sym_object_name,
    STATE(153), 1,
      sym_function_call,
    STATE(157), 1,
      sym_select_element,
    STATE(198), 1,
      sym_select_elements,
  [2064] = 2,
    ACTIONS(298), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(296), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2074] = 1,
    ACTIONS(231), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
  [2082] = 4,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_DOT,
    ACTIONS(304), 1,
      aux_sym_select_element_token1,
    ACTIONS(300), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [2096] = 1,
    ACTIONS(306), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
  [2104] = 5,
    ACTIONS(308), 1,
      sym_object_name,
    ACTIONS(310), 1,
      aux_sym_from_spec_token1,
    STATE(122), 1,
      sym_from_spec,
    STATE(147), 1,
      sym_delete_column_item,
    STATE(179), 1,
      sym_delete_column_list,
  [2120] = 2,
    ACTIONS(314), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(312), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2130] = 3,
    ACTIONS(316), 1,
      sym__hex_digit,
    STATE(116), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(90), 3,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2142] = 5,
    ACTIONS(241), 1,
      anon_sym_STAR,
    ACTIONS(294), 1,
      sym_object_name,
    STATE(153), 1,
      sym_function_call,
    STATE(157), 1,
      sym_select_element,
    STATE(169), 1,
      sym_select_elements,
  [2158] = 1,
    ACTIONS(318), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
  [2166] = 1,
    ACTIONS(94), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
  [2174] = 1,
    ACTIONS(225), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
  [2182] = 1,
    ACTIONS(320), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
  [2190] = 3,
    ACTIONS(322), 1,
      sym__hex_digit,
    STATE(116), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(104), 3,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2202] = 1,
    ACTIONS(325), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
  [2210] = 1,
    ACTIONS(327), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
  [2218] = 5,
    ACTIONS(308), 1,
      sym_object_name,
    ACTIONS(310), 1,
      aux_sym_from_spec_token1,
    STATE(124), 1,
      sym_from_spec,
    STATE(147), 1,
      sym_delete_column_item,
    STATE(172), 1,
      sym_delete_column_list,
  [2234] = 3,
    ACTIONS(70), 1,
      sym__dec_digit,
    STATE(6), 1,
      aux_sym__decimal_literal,
    ACTIONS(329), 2,
      aux_sym_where_spec_token1,
      aux_sym_delete_statement_token1,
  [2245] = 1,
    ACTIONS(331), 4,
      ts_builtin_sym_end,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
  [2252] = 4,
    ACTIONS(333), 1,
      aux_sym_where_spec_token1,
    ACTIONS(335), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(65), 1,
      sym_where_spec,
    STATE(182), 1,
      sym_using_timestamp_spec,
  [2265] = 4,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(337), 1,
      anon_sym_COMMA,
    ACTIONS(339), 1,
      anon_sym_RPAREN,
    STATE(149), 1,
      aux_sym_function_args_repeat1,
  [2278] = 4,
    ACTIONS(333), 1,
      aux_sym_where_spec_token1,
    ACTIONS(335), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(68), 1,
      sym_where_spec,
    STATE(173), 1,
      sym_using_timestamp_spec,
  [2291] = 4,
    ACTIONS(333), 1,
      aux_sym_where_spec_token1,
    ACTIONS(335), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(73), 1,
      sym_where_spec,
    STATE(189), 1,
      sym_using_timestamp_spec,
  [2304] = 4,
    ACTIONS(341), 1,
      sym_object_name,
    ACTIONS(343), 1,
      aux_sym_if_exist_token2,
    STATE(77), 1,
      sym_if_condition,
    STATE(112), 1,
      sym_if_condition_list,
  [2317] = 3,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    ACTIONS(347), 1,
      anon_sym_RPAREN,
    STATE(129), 1,
      aux_sym_relation_element_repeat2,
  [2327] = 2,
    ACTIONS(351), 1,
      aux_sym_begin_batch_token4,
    ACTIONS(349), 2,
      aux_sym_begin_batch_token2,
      aux_sym_begin_batch_token3,
  [2335] = 3,
    ACTIONS(353), 1,
      anon_sym_COMMA,
    ACTIONS(356), 1,
      anon_sym_RPAREN,
    STATE(129), 1,
      aux_sym_relation_element_repeat2,
  [2345] = 3,
    ACTIONS(358), 1,
      anon_sym_COMMA,
    ACTIONS(360), 1,
      anon_sym_RPAREN,
    STATE(139), 1,
      aux_sym_assignment_tuple_repeat1,
  [2355] = 3,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    ACTIONS(360), 1,
      anon_sym_RPAREN,
    STATE(129), 1,
      aux_sym_relation_element_repeat2,
  [2365] = 3,
    ACTIONS(362), 1,
      anon_sym_COMMA,
    ACTIONS(365), 1,
      aux_sym_from_spec_token1,
    STATE(132), 1,
      aux_sym_select_elements_repeat1,
  [2375] = 3,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    ACTIONS(360), 1,
      anon_sym_RPAREN,
    STATE(134), 1,
      aux_sym_relation_element_repeat2,
  [2385] = 3,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    ACTIONS(367), 1,
      anon_sym_RPAREN,
    STATE(129), 1,
      aux_sym_relation_element_repeat2,
  [2395] = 3,
    ACTIONS(70), 1,
      sym__dec_digit,
    ACTIONS(369), 1,
      anon_sym_RBRACK,
    STATE(6), 1,
      aux_sym__decimal_literal,
  [2405] = 3,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    ACTIONS(371), 1,
      anon_sym_RPAREN,
    STATE(127), 1,
      aux_sym_relation_element_repeat2,
  [2415] = 3,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    ACTIONS(371), 1,
      anon_sym_RPAREN,
    STATE(129), 1,
      aux_sym_relation_element_repeat2,
  [2425] = 3,
    ACTIONS(373), 1,
      sym__hex_digit,
    ACTIONS(376), 1,
      anon_sym_SQUOTE,
    STATE(138), 1,
      aux_sym__hexadecimal_literal_repeat1,
  [2435] = 3,
    ACTIONS(378), 1,
      anon_sym_COMMA,
    ACTIONS(381), 1,
      anon_sym_RPAREN,
    STATE(139), 1,
      aux_sym_assignment_tuple_repeat1,
  [2445] = 2,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2453] = 3,
    ACTIONS(294), 1,
      sym_object_name,
    STATE(153), 1,
      sym_function_call,
    STATE(167), 1,
      sym_select_element,
  [2463] = 3,
    ACTIONS(383), 1,
      anon_sym_RPAREN,
    ACTIONS(385), 1,
      anon_sym_COMMA,
    STATE(142), 1,
      aux_sym_function_args_repeat1,
  [2473] = 3,
    ACTIONS(388), 1,
      anon_sym_COMMA,
    ACTIONS(390), 1,
      aux_sym_from_spec_token1,
    STATE(132), 1,
      aux_sym_select_elements_repeat1,
  [2483] = 3,
    ACTIONS(392), 1,
      anon_sym_COMMA,
    ACTIONS(394), 1,
      anon_sym_RPAREN,
    STATE(148), 1,
      aux_sym_relation_element_repeat1,
  [2493] = 3,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    ACTIONS(396), 1,
      anon_sym_RPAREN,
    STATE(137), 1,
      aux_sym_relation_element_repeat2,
  [2503] = 3,
    ACTIONS(335), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(398), 1,
      aux_sym_delete_statement_token1,
    STATE(232), 1,
      sym_using_timestamp_spec,
  [2513] = 3,
    ACTIONS(400), 1,
      anon_sym_COMMA,
    ACTIONS(402), 1,
      aux_sym_from_spec_token1,
    STATE(154), 1,
      aux_sym_delete_column_list_repeat1,
  [2523] = 3,
    ACTIONS(392), 1,
      anon_sym_COMMA,
    ACTIONS(404), 1,
      anon_sym_RPAREN,
    STATE(156), 1,
      aux_sym_relation_element_repeat1,
  [2533] = 3,
    ACTIONS(337), 1,
      anon_sym_COMMA,
    ACTIONS(406), 1,
      anon_sym_RPAREN,
    STATE(142), 1,
      aux_sym_function_args_repeat1,
  [2543] = 3,
    ACTIONS(337), 1,
      anon_sym_COMMA,
    ACTIONS(339), 1,
      anon_sym_RPAREN,
    STATE(149), 1,
      aux_sym_function_args_repeat1,
  [2553] = 3,
    ACTIONS(408), 1,
      sym__hex_digit,
    ACTIONS(410), 1,
      anon_sym_SQUOTE,
    STATE(138), 1,
      aux_sym__hexadecimal_literal_repeat1,
  [2563] = 2,
    ACTIONS(414), 1,
      anon_sym_LBRACK,
    ACTIONS(412), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [2571] = 2,
    ACTIONS(304), 1,
      aux_sym_select_element_token1,
    ACTIONS(300), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [2579] = 3,
    ACTIONS(400), 1,
      anon_sym_COMMA,
    ACTIONS(416), 1,
      aux_sym_from_spec_token1,
    STATE(158), 1,
      aux_sym_delete_column_list_repeat1,
  [2589] = 3,
    ACTIONS(335), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(418), 1,
      aux_sym_delete_statement_token1,
    STATE(241), 1,
      sym_using_timestamp_spec,
  [2599] = 3,
    ACTIONS(420), 1,
      anon_sym_COMMA,
    ACTIONS(423), 1,
      anon_sym_RPAREN,
    STATE(156), 1,
      aux_sym_relation_element_repeat1,
  [2609] = 3,
    ACTIONS(388), 1,
      anon_sym_COMMA,
    ACTIONS(425), 1,
      aux_sym_from_spec_token1,
    STATE(143), 1,
      aux_sym_select_elements_repeat1,
  [2619] = 3,
    ACTIONS(427), 1,
      anon_sym_COMMA,
    ACTIONS(430), 1,
      aux_sym_from_spec_token1,
    STATE(158), 1,
      aux_sym_delete_column_list_repeat1,
  [2629] = 1,
    ACTIONS(423), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2634] = 1,
    ACTIONS(383), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2639] = 2,
    ACTIONS(341), 1,
      sym_object_name,
    STATE(91), 1,
      sym_if_condition,
  [2646] = 2,
    ACTIONS(432), 1,
      sym__dec_digit,
    STATE(15), 1,
      aux_sym__decimal_literal,
  [2653] = 1,
    ACTIONS(430), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [2658] = 1,
    ACTIONS(434), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [2663] = 2,
    ACTIONS(436), 1,
      sym__dec_digit,
    STATE(64), 1,
      aux_sym__decimal_literal,
  [2670] = 2,
    ACTIONS(438), 1,
      sym__dec_digit,
    STATE(70), 1,
      aux_sym__decimal_literal,
  [2677] = 1,
    ACTIONS(365), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [2682] = 2,
    ACTIONS(440), 1,
      aux_sym_from_spec_token1,
    STATE(34), 1,
      sym_from_spec,
  [2689] = 2,
    ACTIONS(440), 1,
      aux_sym_from_spec_token1,
    STATE(32), 1,
      sym_from_spec,
  [2696] = 1,
    ACTIONS(442), 2,
      aux_sym_where_spec_token1,
      aux_sym_delete_statement_token1,
  [2701] = 2,
    ACTIONS(444), 1,
      sym__dec_digit,
    STATE(17), 1,
      aux_sym__decimal_literal,
  [2708] = 2,
    ACTIONS(440), 1,
      aux_sym_from_spec_token1,
    STATE(125), 1,
      sym_from_spec,
  [2715] = 2,
    ACTIONS(333), 1,
      aux_sym_where_spec_token1,
    STATE(73), 1,
      sym_where_spec,
  [2722] = 2,
    ACTIONS(446), 1,
      sym_object_name,
    STATE(46), 1,
      sym_from_spec_element,
  [2729] = 2,
    ACTIONS(448), 1,
      sym__hex_digit,
    STATE(31), 1,
      aux_sym__hexadecimal_literal_repeat2,
  [2736] = 2,
    ACTIONS(450), 1,
      sym__hex_digit,
    STATE(55), 1,
      aux_sym__hexadecimal_literal_repeat2,
  [2743] = 2,
    ACTIONS(452), 1,
      sym_object_name,
    STATE(84), 1,
      sym_order_spec_element,
  [2750] = 2,
    ACTIONS(308), 1,
      sym_object_name,
    STATE(163), 1,
      sym_delete_column_item,
  [2757] = 2,
    ACTIONS(440), 1,
      aux_sym_from_spec_token1,
    STATE(124), 1,
      sym_from_spec,
  [2764] = 2,
    ACTIONS(408), 1,
      sym__hex_digit,
    STATE(151), 1,
      aux_sym__hexadecimal_literal_repeat1,
  [2771] = 1,
    ACTIONS(454), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [2776] = 2,
    ACTIONS(333), 1,
      aux_sym_where_spec_token1,
    STATE(68), 1,
      sym_where_spec,
  [2783] = 2,
    ACTIONS(456), 1,
      aux_sym_timestamp_token1,
    STATE(170), 1,
      sym_timestamp,
  [2790] = 2,
    ACTIONS(458), 1,
      sym__dec_digit,
    STATE(69), 1,
      aux_sym__decimal_literal,
  [2797] = 1,
    ACTIONS(460), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2802] = 2,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    STATE(145), 1,
      sym_assignment_tuple,
  [2809] = 2,
    ACTIONS(462), 1,
      sym__dec_digit,
    STATE(120), 1,
      aux_sym__decimal_literal,
  [2816] = 2,
    ACTIONS(464), 1,
      sym__hex_digit,
    STATE(110), 1,
      aux_sym__hexadecimal_literal_repeat2,
  [2823] = 2,
    ACTIONS(333), 1,
      aux_sym_where_spec_token1,
    STATE(72), 1,
      sym_where_spec,
  [2830] = 1,
    ACTIONS(466), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2835] = 1,
    ACTIONS(381), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2840] = 2,
    ACTIONS(468), 1,
      sym__dec_digit,
    STATE(63), 1,
      aux_sym__decimal_literal,
  [2847] = 1,
    ACTIONS(356), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2852] = 2,
    ACTIONS(470), 1,
      sym__dec_digit,
    STATE(26), 1,
      aux_sym__decimal_literal,
  [2859] = 2,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    STATE(136), 1,
      sym_assignment_tuple,
  [2866] = 2,
    ACTIONS(472), 1,
      sym__dec_digit,
    STATE(62), 1,
      aux_sym__decimal_literal,
  [2873] = 1,
    ACTIONS(474), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2878] = 2,
    ACTIONS(440), 1,
      aux_sym_from_spec_token1,
    STATE(36), 1,
      sym_from_spec,
  [2885] = 1,
    ACTIONS(376), 2,
      sym__hex_digit,
      anon_sym_SQUOTE,
  [2890] = 2,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    STATE(193), 1,
      sym_assignment_tuple,
  [2897] = 1,
    ACTIONS(476), 1,
      aux_sym_order_spec_token2,
  [2901] = 1,
    ACTIONS(478), 1,
      sym__hex_4digit,
  [2905] = 1,
    ACTIONS(369), 1,
      anon_sym_RBRACK,
  [2909] = 1,
    ACTIONS(480), 1,
      anon_sym_RPAREN,
  [2913] = 1,
    ACTIONS(482), 1,
      sym__hex_4digit,
  [2917] = 1,
    ACTIONS(484), 1,
      aux_sym_select_statement_token6,
  [2921] = 1,
    ACTIONS(486), 1,
      anon_sym_DASH,
  [2925] = 1,
    ACTIONS(488), 1,
      anon_sym_DASH,
  [2929] = 1,
    ACTIONS(490), 1,
      aux_sym_select_statement_token6,
  [2933] = 1,
    ACTIONS(492), 1,
      sym_object_name,
  [2937] = 1,
    ACTIONS(494), 1,
      sym_object_name,
  [2941] = 1,
    ACTIONS(496), 1,
      sym_object_name,
  [2945] = 1,
    ACTIONS(498), 1,
      aux_sym_select_statement_token6,
  [2949] = 1,
    ACTIONS(500), 1,
      anon_sym_STAR,
  [2953] = 1,
    ACTIONS(502), 1,
      sym__hex_4digit,
  [2957] = 1,
    ACTIONS(504), 1,
      sym__hex_4digit,
  [2961] = 1,
    ACTIONS(500), 1,
      sym_object_name,
  [2965] = 1,
    ACTIONS(506), 1,
      aux_sym_select_statement_token6,
  [2969] = 1,
    ACTIONS(508), 1,
      anon_sym_RPAREN,
  [2973] = 1,
    ACTIONS(510), 1,
      anon_sym_EQ,
  [2977] = 1,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
  [2981] = 1,
    ACTIONS(514), 1,
      anon_sym_DASH,
  [2985] = 1,
    ACTIONS(516), 1,
      anon_sym_LPAREN,
  [2989] = 1,
    ACTIONS(518), 1,
      sym_object_name,
  [2993] = 1,
    ACTIONS(520), 1,
      aux_sym_begin_batch_token4,
  [2997] = 1,
    ACTIONS(522), 1,
      anon_sym_DASH,
  [3001] = 1,
    ACTIONS(524), 1,
      aux_sym_select_statement_token6,
  [3005] = 1,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
  [3009] = 1,
    ACTIONS(526), 1,
      aux_sym__string_literal_token2,
  [3013] = 1,
    ACTIONS(528), 1,
      aux_sym__string_literal_token1,
  [3017] = 1,
    ACTIONS(530), 1,
      anon_sym_RPAREN,
  [3021] = 1,
    ACTIONS(418), 1,
      aux_sym_delete_statement_token1,
  [3025] = 1,
    ACTIONS(532), 1,
      sym__hex_digit,
  [3029] = 1,
    ACTIONS(534), 1,
      anon_sym_LPAREN,
  [3033] = 1,
    ACTIONS(536), 1,
      anon_sym_DOLLAR_DOLLAR,
  [3037] = 1,
    ACTIONS(536), 1,
      anon_sym_SQUOTE,
  [3041] = 1,
    ACTIONS(538), 1,
      sym__hex_4digit,
  [3045] = 1,
    ACTIONS(540), 1,
      aux_sym_select_statement_token6,
  [3049] = 1,
    ACTIONS(542), 1,
      aux_sym_delete_statement_token1,
  [3053] = 1,
    ACTIONS(544), 1,
      sym__hex_4digit,
  [3057] = 1,
    ACTIONS(546), 1,
      aux_sym_delete_statement_token1,
  [3061] = 1,
    ACTIONS(548), 1,
      ts_builtin_sym_end,
  [3065] = 1,
    ACTIONS(550), 1,
      aux_sym_select_statement_token6,
  [3069] = 1,
    ACTIONS(552), 1,
      sym_object_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 51,
  [SMALL_STATE(4)] = 75,
  [SMALL_STATE(5)] = 99,
  [SMALL_STATE(6)] = 123,
  [SMALL_STATE(7)] = 148,
  [SMALL_STATE(8)] = 193,
  [SMALL_STATE(9)] = 235,
  [SMALL_STATE(10)] = 277,
  [SMALL_STATE(11)] = 321,
  [SMALL_STATE(12)] = 363,
  [SMALL_STATE(13)] = 388,
  [SMALL_STATE(14)] = 429,
  [SMALL_STATE(15)] = 470,
  [SMALL_STATE(16)] = 495,
  [SMALL_STATE(17)] = 533,
  [SMALL_STATE(18)] = 555,
  [SMALL_STATE(19)] = 593,
  [SMALL_STATE(20)] = 631,
  [SMALL_STATE(21)] = 669,
  [SMALL_STATE(22)] = 707,
  [SMALL_STATE(23)] = 745,
  [SMALL_STATE(24)] = 783,
  [SMALL_STATE(25)] = 821,
  [SMALL_STATE(26)] = 859,
  [SMALL_STATE(27)] = 881,
  [SMALL_STATE(28)] = 898,
  [SMALL_STATE(29)] = 914,
  [SMALL_STATE(30)] = 930,
  [SMALL_STATE(31)] = 946,
  [SMALL_STATE(32)] = 964,
  [SMALL_STATE(33)] = 990,
  [SMALL_STATE(34)] = 1008,
  [SMALL_STATE(35)] = 1034,
  [SMALL_STATE(36)] = 1050,
  [SMALL_STATE(37)] = 1076,
  [SMALL_STATE(38)] = 1089,
  [SMALL_STATE(39)] = 1102,
  [SMALL_STATE(40)] = 1119,
  [SMALL_STATE(41)] = 1132,
  [SMALL_STATE(42)] = 1149,
  [SMALL_STATE(43)] = 1166,
  [SMALL_STATE(44)] = 1179,
  [SMALL_STATE(45)] = 1192,
  [SMALL_STATE(46)] = 1205,
  [SMALL_STATE(47)] = 1218,
  [SMALL_STATE(48)] = 1231,
  [SMALL_STATE(49)] = 1244,
  [SMALL_STATE(50)] = 1257,
  [SMALL_STATE(51)] = 1270,
  [SMALL_STATE(52)] = 1294,
  [SMALL_STATE(53)] = 1310,
  [SMALL_STATE(54)] = 1332,
  [SMALL_STATE(55)] = 1352,
  [SMALL_STATE(56)] = 1368,
  [SMALL_STATE(57)] = 1388,
  [SMALL_STATE(58)] = 1408,
  [SMALL_STATE(59)] = 1432,
  [SMALL_STATE(60)] = 1444,
  [SMALL_STATE(61)] = 1466,
  [SMALL_STATE(62)] = 1480,
  [SMALL_STATE(63)] = 1497,
  [SMALL_STATE(64)] = 1514,
  [SMALL_STATE(65)] = 1531,
  [SMALL_STATE(66)] = 1546,
  [SMALL_STATE(67)] = 1561,
  [SMALL_STATE(68)] = 1576,
  [SMALL_STATE(69)] = 1591,
  [SMALL_STATE(70)] = 1608,
  [SMALL_STATE(71)] = 1625,
  [SMALL_STATE(72)] = 1640,
  [SMALL_STATE(73)] = 1655,
  [SMALL_STATE(74)] = 1670,
  [SMALL_STATE(75)] = 1684,
  [SMALL_STATE(76)] = 1706,
  [SMALL_STATE(77)] = 1720,
  [SMALL_STATE(78)] = 1734,
  [SMALL_STATE(79)] = 1748,
  [SMALL_STATE(80)] = 1758,
  [SMALL_STATE(81)] = 1772,
  [SMALL_STATE(82)] = 1792,
  [SMALL_STATE(83)] = 1806,
  [SMALL_STATE(84)] = 1826,
  [SMALL_STATE(85)] = 1836,
  [SMALL_STATE(86)] = 1850,
  [SMALL_STATE(87)] = 1869,
  [SMALL_STATE(88)] = 1888,
  [SMALL_STATE(89)] = 1899,
  [SMALL_STATE(90)] = 1908,
  [SMALL_STATE(91)] = 1925,
  [SMALL_STATE(92)] = 1934,
  [SMALL_STATE(93)] = 1951,
  [SMALL_STATE(94)] = 1962,
  [SMALL_STATE(95)] = 1970,
  [SMALL_STATE(96)] = 1986,
  [SMALL_STATE(97)] = 1996,
  [SMALL_STATE(98)] = 2004,
  [SMALL_STATE(99)] = 2012,
  [SMALL_STATE(100)] = 2022,
  [SMALL_STATE(101)] = 2030,
  [SMALL_STATE(102)] = 2040,
  [SMALL_STATE(103)] = 2048,
  [SMALL_STATE(104)] = 2064,
  [SMALL_STATE(105)] = 2074,
  [SMALL_STATE(106)] = 2082,
  [SMALL_STATE(107)] = 2096,
  [SMALL_STATE(108)] = 2104,
  [SMALL_STATE(109)] = 2120,
  [SMALL_STATE(110)] = 2130,
  [SMALL_STATE(111)] = 2142,
  [SMALL_STATE(112)] = 2158,
  [SMALL_STATE(113)] = 2166,
  [SMALL_STATE(114)] = 2174,
  [SMALL_STATE(115)] = 2182,
  [SMALL_STATE(116)] = 2190,
  [SMALL_STATE(117)] = 2202,
  [SMALL_STATE(118)] = 2210,
  [SMALL_STATE(119)] = 2218,
  [SMALL_STATE(120)] = 2234,
  [SMALL_STATE(121)] = 2245,
  [SMALL_STATE(122)] = 2252,
  [SMALL_STATE(123)] = 2265,
  [SMALL_STATE(124)] = 2278,
  [SMALL_STATE(125)] = 2291,
  [SMALL_STATE(126)] = 2304,
  [SMALL_STATE(127)] = 2317,
  [SMALL_STATE(128)] = 2327,
  [SMALL_STATE(129)] = 2335,
  [SMALL_STATE(130)] = 2345,
  [SMALL_STATE(131)] = 2355,
  [SMALL_STATE(132)] = 2365,
  [SMALL_STATE(133)] = 2375,
  [SMALL_STATE(134)] = 2385,
  [SMALL_STATE(135)] = 2395,
  [SMALL_STATE(136)] = 2405,
  [SMALL_STATE(137)] = 2415,
  [SMALL_STATE(138)] = 2425,
  [SMALL_STATE(139)] = 2435,
  [SMALL_STATE(140)] = 2445,
  [SMALL_STATE(141)] = 2453,
  [SMALL_STATE(142)] = 2463,
  [SMALL_STATE(143)] = 2473,
  [SMALL_STATE(144)] = 2483,
  [SMALL_STATE(145)] = 2493,
  [SMALL_STATE(146)] = 2503,
  [SMALL_STATE(147)] = 2513,
  [SMALL_STATE(148)] = 2523,
  [SMALL_STATE(149)] = 2533,
  [SMALL_STATE(150)] = 2543,
  [SMALL_STATE(151)] = 2553,
  [SMALL_STATE(152)] = 2563,
  [SMALL_STATE(153)] = 2571,
  [SMALL_STATE(154)] = 2579,
  [SMALL_STATE(155)] = 2589,
  [SMALL_STATE(156)] = 2599,
  [SMALL_STATE(157)] = 2609,
  [SMALL_STATE(158)] = 2619,
  [SMALL_STATE(159)] = 2629,
  [SMALL_STATE(160)] = 2634,
  [SMALL_STATE(161)] = 2639,
  [SMALL_STATE(162)] = 2646,
  [SMALL_STATE(163)] = 2653,
  [SMALL_STATE(164)] = 2658,
  [SMALL_STATE(165)] = 2663,
  [SMALL_STATE(166)] = 2670,
  [SMALL_STATE(167)] = 2677,
  [SMALL_STATE(168)] = 2682,
  [SMALL_STATE(169)] = 2689,
  [SMALL_STATE(170)] = 2696,
  [SMALL_STATE(171)] = 2701,
  [SMALL_STATE(172)] = 2708,
  [SMALL_STATE(173)] = 2715,
  [SMALL_STATE(174)] = 2722,
  [SMALL_STATE(175)] = 2729,
  [SMALL_STATE(176)] = 2736,
  [SMALL_STATE(177)] = 2743,
  [SMALL_STATE(178)] = 2750,
  [SMALL_STATE(179)] = 2757,
  [SMALL_STATE(180)] = 2764,
  [SMALL_STATE(181)] = 2771,
  [SMALL_STATE(182)] = 2776,
  [SMALL_STATE(183)] = 2783,
  [SMALL_STATE(184)] = 2790,
  [SMALL_STATE(185)] = 2797,
  [SMALL_STATE(186)] = 2802,
  [SMALL_STATE(187)] = 2809,
  [SMALL_STATE(188)] = 2816,
  [SMALL_STATE(189)] = 2823,
  [SMALL_STATE(190)] = 2830,
  [SMALL_STATE(191)] = 2835,
  [SMALL_STATE(192)] = 2840,
  [SMALL_STATE(193)] = 2847,
  [SMALL_STATE(194)] = 2852,
  [SMALL_STATE(195)] = 2859,
  [SMALL_STATE(196)] = 2866,
  [SMALL_STATE(197)] = 2873,
  [SMALL_STATE(198)] = 2878,
  [SMALL_STATE(199)] = 2885,
  [SMALL_STATE(200)] = 2890,
  [SMALL_STATE(201)] = 2897,
  [SMALL_STATE(202)] = 2901,
  [SMALL_STATE(203)] = 2905,
  [SMALL_STATE(204)] = 2909,
  [SMALL_STATE(205)] = 2913,
  [SMALL_STATE(206)] = 2917,
  [SMALL_STATE(207)] = 2921,
  [SMALL_STATE(208)] = 2925,
  [SMALL_STATE(209)] = 2929,
  [SMALL_STATE(210)] = 2933,
  [SMALL_STATE(211)] = 2937,
  [SMALL_STATE(212)] = 2941,
  [SMALL_STATE(213)] = 2945,
  [SMALL_STATE(214)] = 2949,
  [SMALL_STATE(215)] = 2953,
  [SMALL_STATE(216)] = 2957,
  [SMALL_STATE(217)] = 2961,
  [SMALL_STATE(218)] = 2965,
  [SMALL_STATE(219)] = 2969,
  [SMALL_STATE(220)] = 2973,
  [SMALL_STATE(221)] = 2977,
  [SMALL_STATE(222)] = 2981,
  [SMALL_STATE(223)] = 2985,
  [SMALL_STATE(224)] = 2989,
  [SMALL_STATE(225)] = 2993,
  [SMALL_STATE(226)] = 2997,
  [SMALL_STATE(227)] = 3001,
  [SMALL_STATE(228)] = 3005,
  [SMALL_STATE(229)] = 3009,
  [SMALL_STATE(230)] = 3013,
  [SMALL_STATE(231)] = 3017,
  [SMALL_STATE(232)] = 3021,
  [SMALL_STATE(233)] = 3025,
  [SMALL_STATE(234)] = 3029,
  [SMALL_STATE(235)] = 3033,
  [SMALL_STATE(236)] = 3037,
  [SMALL_STATE(237)] = 3041,
  [SMALL_STATE(238)] = 3045,
  [SMALL_STATE(239)] = 3049,
  [SMALL_STATE(240)] = 3053,
  [SMALL_STATE(241)] = 3057,
  [SMALL_STATE(242)] = 3061,
  [SMALL_STATE(243)] = 3065,
  [SMALL_STATE(244)] = 3069,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 2),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__decimal_literal, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__decimal_literal, 2), SHIFT_REPEAT(6),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_literal, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_literal, 3),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_literal, 4),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 3, .production_id = 4),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hexadecimal_literal, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__uuid, 11),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hexadecimal_literal, 2),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 5),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hexadecimal_literal_repeat2, 2),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hexadecimal_literal_repeat2, 2), SHIFT_REPEAT(33),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec_element, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 8),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 3),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2), SHIFT_REPEAT(90),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec_element, 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 9),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relalationContainsKey, 4),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 7),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relalationContains, 3, .production_id = 5),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hexadecimal_literal_repeat2, 2), SHIFT_REPEAT(52),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 6),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(75),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(108),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(128),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_spec, 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec_element, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 7),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 8),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 3),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2), SHIFT_REPEAT(92),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 4),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 9),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 6),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 5),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec_element, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2), SHIFT_REPEAT(161),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec, 3),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition, 3),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 1),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 7),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_spec, 2, .production_id = 3),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 10),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hexadecimal_literal_repeat2, 2), SHIFT_REPEAT(116),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_exist, 2),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 11),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 2),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 1),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2), SHIFT_REPEAT(200),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2), SHIFT_REPEAT(141),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hexadecimal_literal_repeat1, 2), SHIFT_REPEAT(233),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hexadecimal_literal_repeat1, 2),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_tuple_repeat1, 2), SHIFT_REPEAT(18),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_tuple_repeat1, 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2),
  [385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2), SHIFT_REPEAT(9),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 2),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 2),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 1),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 2),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 1),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 2),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 3),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2), SHIFT_REPEAT(211),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 1),
  [427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2), SHIFT_REPEAT(178),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_timestamp_spec, 2),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 4),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 5),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 4),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 3),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 4),
  [548] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
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
