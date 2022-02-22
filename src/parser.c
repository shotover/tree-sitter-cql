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
#define STATE_COUNT 402
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 139
#define ALIAS_COUNT 2
#define TOKEN_COUNT 70
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
  aux_sym_truncate_token1 = 62,
  aux_sym_truncate_token2 = 63,
  aux_sym_create_index_token1 = 64,
  aux_sym_create_index_token2 = 65,
  aux_sym_create_index_token3 = 66,
  aux_sym_index_keys_spec_token1 = 67,
  aux_sym_index_entries_s_spec_token1 = 68,
  aux_sym_index_full_spec_token1 = 69,
  sym_source_file = 70,
  sym__statement = 71,
  sym_select_statement = 72,
  sym_select_elements = 73,
  sym_select_element = 74,
  sym_function_call = 75,
  sym_function_args = 76,
  sym_constant = 77,
  sym__uuid = 78,
  sym__string_literal = 79,
  aux_sym__decimal_literal = 80,
  sym__float_literal = 81,
  sym__hexadecimal_literal = 82,
  sym_from_spec = 83,
  sym_from_spec_element = 84,
  sym_where_spec = 85,
  sym_relation_elements = 86,
  sym_relation_element = 87,
  sym_assignment_tuple = 88,
  sym_relalationContainsKey = 89,
  sym_relalationContains = 90,
  sym_order_spec = 91,
  sym_order_spec_element = 92,
  sym_delete_statement = 93,
  sym_begin_batch = 94,
  sym_delete_column_list = 95,
  sym_delete_column_item = 96,
  sym_using_timestamp_spec = 97,
  sym_timestamp = 98,
  sym_if_exist = 99,
  sym_if_spec = 100,
  sym_if_condition_list = 101,
  sym_if_condition = 102,
  sym_insert_statement = 103,
  sym_keyspace = 104,
  sym_table = 105,
  sym_insert_column_spec = 106,
  sym_column_list = 107,
  sym_column = 108,
  sym_insert_values_spec = 109,
  sym_expression_list = 110,
  sym_expression = 111,
  sym_assignment_map = 112,
  sym_assignment_set = 113,
  sym_assignment_list = 114,
  sym_if_not_exist = 115,
  sym_using_ttl_timestamp = 116,
  sym_ttl = 117,
  sym_truncate = 118,
  sym_create_index = 119,
  sym_index_name = 120,
  sym_index_column_spec = 121,
  sym_index_keys_spec = 122,
  sym_index_entries_s_spec = 123,
  sym_index_full_spec = 124,
  aux_sym_source_file_repeat1 = 125,
  aux_sym_select_elements_repeat1 = 126,
  aux_sym_function_args_repeat1 = 127,
  aux_sym__hexadecimal_literal_repeat1 = 128,
  aux_sym__hexadecimal_literal_repeat2 = 129,
  aux_sym_relation_elements_repeat1 = 130,
  aux_sym_relation_element_repeat1 = 131,
  aux_sym_relation_element_repeat2 = 132,
  aux_sym_assignment_tuple_repeat1 = 133,
  aux_sym_delete_column_list_repeat1 = 134,
  aux_sym_if_condition_list_repeat1 = 135,
  aux_sym_column_list_repeat1 = 136,
  aux_sym_expression_list_repeat1 = 137,
  aux_sym_assignment_map_repeat1 = 138,
  anon_alias_sym_CONTAINS = 139,
  anon_alias_sym_IF = 140,
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
  [aux_sym_truncate_token1] = aux_sym_truncate_token1,
  [aux_sym_truncate_token2] = aux_sym_truncate_token2,
  [aux_sym_create_index_token1] = aux_sym_create_index_token1,
  [aux_sym_create_index_token2] = aux_sym_create_index_token1,
  [aux_sym_create_index_token3] = aux_sym_create_index_token3,
  [aux_sym_index_keys_spec_token1] = aux_sym_index_keys_spec_token1,
  [aux_sym_index_entries_s_spec_token1] = aux_sym_index_entries_s_spec_token1,
  [aux_sym_index_full_spec_token1] = aux_sym_index_full_spec_token1,
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
  [4] = {.index = 3, .length = 3},
  [5] = {.index = 6, .length = 3},
  [6] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 1},
  [9] = {.index = 12, .length = 1},
  [12] = {.index = 13, .length = 3},
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
  [7] = {
    [0] = anon_alias_sym_IF,
  },
  [10] = {
    [0] = aux_sym_if_not_exist_token1,
    [2] = aux_sym_if_not_exist_token1,
  },
  [11] = {
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
  [20] = 18,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 22,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 28,
  [33] = 33,
  [34] = 27,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 26,
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
  [59] = 45,
  [60] = 60,
  [61] = 43,
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
  [78] = 60,
  [79] = 79,
  [80] = 80,
  [81] = 47,
  [82] = 82,
  [83] = 83,
  [84] = 62,
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
  [116] = 113,
  [117] = 117,
  [118] = 118,
  [119] = 45,
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
  [141] = 43,
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
  [154] = 152,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 158,
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
  [171] = 163,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 174,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 118,
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
  [260] = 259,
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
  [302] = 259,
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
  [387] = 352,
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
  [399] = 385,
  [400] = 400,
  [401] = 365,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(167);
      if (lookahead == '"') ADVANCE(288);
      if (lookahead == '$') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(197);
      if (lookahead == '(') ADVANCE(180);
      if (lookahead == ')') ADVANCE(181);
      if (lookahead == '*') ADVANCE(176);
      if (lookahead == ',') ADVANCE(177);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(178);
      if (lookahead == '0') ADVANCE(188);
      if (lookahead == ':') ADVANCE(291);
      if (lookahead == ';') ADVANCE(168);
      if (lookahead == '<') ADVANCE(262);
      if (lookahead == '=') ADVANCE(261);
      if (lookahead == '>') ADVANCE(263);
      if (lookahead == 'X') ADVANCE(6);
      if (lookahead == '[') ADVANCE(280);
      if (lookahead == ']') ADVANCE(281);
      if (lookahead == '{') ADVANCE(290);
      if (lookahead == '}') ADVANCE(292);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(192);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(190);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(196);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(191);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(194);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(195);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(56);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(131);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(30);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(70);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(111);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(97);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(54);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(11);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(107);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(15);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(187);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(288);
      if (lookahead == '$') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(198);
      if (lookahead == '(') ADVANCE(180);
      if (lookahead == '*') ADVANCE(176);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(234);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(239);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(221);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(219);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(233);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 2:
      if (lookahead == '$') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(198);
      if (lookahead == ')') ADVANCE(181);
      if (lookahead == '*') ADVANCE(176);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '0') ADVANCE(205);
      if (lookahead == 'X') ADVANCE(212);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(213);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(251);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(256);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 3:
      if (lookahead == '$') ADVANCE(201);
      END_STATE();
    case 4:
      if (lookahead == '$') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(202);
      if (lookahead != 0) ADVANCE(203);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(197);
      if (lookahead == '(') ADVANCE(180);
      if (lookahead == ')') ADVANCE(181);
      if (lookahead == ',') ADVANCE(177);
      if (lookahead == ':') ADVANCE(291);
      if (lookahead == ']') ADVANCE(281);
      if (lookahead == '}') ADVANCE(292);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(187);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(207);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(211);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(161);
      if (lookahead == '*') ADVANCE(176);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(225);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(161);
      if (lookahead == '*') ADVANCE(176);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(180);
      if (lookahead == '.') ADVANCE(178);
      if (lookahead == '<') ADVANCE(262);
      if (lookahead == '=') ADVANCE(261);
      if (lookahead == '>') ADVANCE(263);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(113);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(19);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(96);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(150);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(81);
      END_STATE();
    case 12:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(159);
      END_STATE();
    case 13:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(145);
      END_STATE();
    case 14:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 15:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 16:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(143);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(272);
      END_STATE();
    case 17:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 18:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 19:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(90);
      END_STATE();
    case 20:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(273);
      END_STATE();
    case 21:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(274);
      END_STATE();
    case 22:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 23:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(140);
      END_STATE();
    case 24:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(18);
      END_STATE();
    case 25:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(260);
      END_STATE();
    case 26:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(277);
      END_STATE();
    case 27:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(278);
      END_STATE();
    case 28:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(31);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(47);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(110);
      END_STATE();
    case 29:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(50);
      END_STATE();
    case 30:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 31:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 32:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 33:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(296);
      END_STATE();
    case 34:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 35:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(297);
      END_STATE();
    case 36:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 37:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 38:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(159);
      END_STATE();
    case 39:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 40:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(209);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 41:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 42:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 43:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 44:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 45:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(159);
      END_STATE();
    case 46:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 47:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 48:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 49:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 50:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 51:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 52:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 53:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 54:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 55:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 56:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(284);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(267);
      END_STATE();
    case 57:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(284);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 58:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(284);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(133);
      END_STATE();
    case 59:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(282);
      END_STATE();
    case 60:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(175);
      END_STATE();
    case 61:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(62);
      END_STATE();
    case 62:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(46);
      END_STATE();
    case 63:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(49);
      END_STATE();
    case 64:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(73);
      END_STATE();
    case 65:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
      END_STATE();
    case 66:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(63);
      END_STATE();
    case 67:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(279);
      END_STATE();
    case 68:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(44);
      END_STATE();
    case 69:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 70:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(95);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 71:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 72:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 73:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 74:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 75:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(92);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 76:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 77:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 78:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 79:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(84);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(25);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(179);
      END_STATE();
    case 80:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(84);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(159);
      END_STATE();
    case 81:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(294);
      END_STATE();
    case 82:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(182);
      END_STATE();
    case 83:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 84:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 85:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 86:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(55);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
      END_STATE();
    case 87:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 88:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 89:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 90:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 91:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
      END_STATE();
    case 92:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 93:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(258);
      END_STATE();
    case 94:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(115);
      END_STATE();
    case 95:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(74);
      END_STATE();
    case 96:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(53);
      END_STATE();
    case 97:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(299);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 98:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(171);
      END_STATE();
    case 99:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(276);
      END_STATE();
    case 100:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(266);
      END_STATE();
    case 101:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 102:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 103:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 104:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(133);
      END_STATE();
    case 105:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(129);
      END_STATE();
    case 106:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 107:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(87);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(72);
      END_STATE();
    case 108:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 109:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 110:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(287);
      END_STATE();
    case 111:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(137);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 112:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 113:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 114:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 115:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(283);
      END_STATE();
    case 116:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 117:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(271);
      END_STATE();
    case 118:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 119:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 120:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(159);
      END_STATE();
    case 121:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 122:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 123:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 124:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 125:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 126:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(285);
      END_STATE();
    case 127:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(289);
      END_STATE();
    case 128:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(301);
      END_STATE();
    case 129:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(268);
      END_STATE();
    case 130:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(72);
      END_STATE();
    case 131:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(108);
      END_STATE();
    case 132:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(141);
      END_STATE();
    case 133:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(47);
      END_STATE();
    case 134:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(142);
      END_STATE();
    case 135:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(39);
      END_STATE();
    case 136:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(121);
      END_STATE();
    case 137:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(293);
      END_STATE();
    case 138:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(173);
      END_STATE();
    case 139:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(286);
      END_STATE();
    case 140:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(169);
      END_STATE();
    case 141:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(126);
      END_STATE();
    case 142:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(14);
      END_STATE();
    case 143:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(22);
      END_STATE();
    case 144:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(17);
      END_STATE();
    case 145:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(35);
      END_STATE();
    case 146:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(36);
      END_STATE();
    case 147:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(37);
      END_STATE();
    case 148:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(52);
      END_STATE();
    case 149:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 150:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(101);
      END_STATE();
    case 151:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 152:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 153:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(174);
      END_STATE();
    case 154:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(71);
      END_STATE();
    case 155:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(298);
      END_STATE();
    case 156:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(270);
      END_STATE();
    case 157:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(269);
      END_STATE();
    case 158:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(185);
      END_STATE();
    case 159:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
      END_STATE();
    case 160:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(159);
      END_STATE();
    case 161:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 162:
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(203);
      END_STATE();
    case 163:
      if (eof) ADVANCE(167);
      if (lookahead == '$') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(197);
      if (lookahead == '(') ADVANCE(180);
      if (lookahead == ')') ADVANCE(181);
      if (lookahead == ',') ADVANCE(177);
      if (lookahead == '.') ADVANCE(178);
      if (lookahead == ':') ADVANCE(291);
      if (lookahead == ';') ADVANCE(168);
      if (lookahead == '<') ADVANCE(262);
      if (lookahead == '=') ADVANCE(261);
      if (lookahead == '>') ADVANCE(263);
      if (lookahead == '[') ADVANCE(280);
      if (lookahead == ']') ADVANCE(281);
      if (lookahead == '}') ADVANCE(292);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(79);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(16);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(119);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(42);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(154);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(75);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(57);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(131);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(70);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(97);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(54);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(116);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(107);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(15);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(163)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      END_STATE();
    case 164:
      if (eof) ADVANCE(167);
      if (lookahead == '$') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(197);
      if (lookahead == '(') ADVANCE(180);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '0') ADVANCE(205);
      if (lookahead == ';') ADVANCE(168);
      if (lookahead == 'X') ADVANCE(6);
      if (lookahead == '[') ADVANCE(280);
      if (lookahead == '{') ADVANCE(290);
      if (lookahead == '}') ADVANCE(292);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(80);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(38);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(120);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(45);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(160);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(12);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(104);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(43);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(69);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(151);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(54);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(164)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 165:
      if (eof) ADVANCE(167);
      if (lookahead == ';') ADVANCE(168);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(192);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(189);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(196);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(191);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(104);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(69);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(118);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(54);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(165)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'F' ||
          lookahead == 'e' ||
          lookahead == 'f') ADVANCE(187);
      END_STATE();
    case 166:
      if (eof) ADVANCE(167);
      if (lookahead == ';') ADVANCE(168);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(193);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(189);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(196);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(191);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(58);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(54);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(116);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(166)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'F' ||
          lookahead == 'e' ||
          lookahead == 'f') ADVANCE(187);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_select_statement_token1);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_select_statement_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_select_statement_token3);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_select_statement_token3);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_select_statement_token4);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_select_statement_token5);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_select_statement_token6);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_select_element_token1);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__hex_4digit);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__hex_4digit);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__hex_digit);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'X') ADVANCE(208);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(272);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(84);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(136);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(71);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(200);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym__string_literal_token2);
      if (lookahead == '$') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(202);
      if (lookahead != 0) ADVANCE(203);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym__string_literal_token2);
      if (lookahead == '$') ADVANCE(162);
      if (lookahead != 0) ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__dec_digit);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__dec_digit);
      if (lookahead == 'X') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(159);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__dec_digit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(159);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_X_SQUOTE);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_0X);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__boolean_literal);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__boolean_literal);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_object_name);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == '\'') ADVANCE(207);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(255);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(215);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(231);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(247);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(257);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(210);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(253);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(242);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(257);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(236);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(220);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(257);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(254);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(183);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(228);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(226);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(217);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(257);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(257);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(248);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(222);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(172);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(216);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(232);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(235);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(237);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(230);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(252);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(224);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(257);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(218);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(249);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(238);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(250);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(170);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(241);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(242);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(223);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(229);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(218);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(242);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(186);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(254);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(255);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_from_spec_token1);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_where_spec_token1);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_relation_elements_token1);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(264);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(265);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_relation_element_token1);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_relation_element_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(31);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(47);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(110);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_relalationContainsKey_token1);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_relalationContainsKey_token2);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_relalationContainsKey_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(300);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_order_spec_token1);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_order_spec_token2);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_order_spec_element_token1);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_order_spec_element_token2);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_delete_statement_token1);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_begin_batch_token1);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_begin_batch_token2);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_begin_batch_token3);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_begin_batch_token4);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_using_timestamp_spec_token1);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_timestamp_token1);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_if_exist_token1);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_if_exist_token2);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_insert_statement_token1);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_insert_statement_token2);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__dquote);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_insert_values_spec_token1);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_if_not_exist_token1);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_ttl_token1);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_truncate_token1);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_truncate_token2);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_create_index_token1);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_create_index_token2);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_create_index_token3);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_index_keys_spec_token1);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_index_entries_s_spec_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 163},
  [2] = {.lex_state = 163},
  [3] = {.lex_state = 164},
  [4] = {.lex_state = 163},
  [5] = {.lex_state = 164},
  [6] = {.lex_state = 163},
  [7] = {.lex_state = 163},
  [8] = {.lex_state = 163},
  [9] = {.lex_state = 163},
  [10] = {.lex_state = 163},
  [11] = {.lex_state = 163},
  [12] = {.lex_state = 163},
  [13] = {.lex_state = 163},
  [14] = {.lex_state = 163},
  [15] = {.lex_state = 163},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 164},
  [22] = {.lex_state = 164},
  [23] = {.lex_state = 164},
  [24] = {.lex_state = 164},
  [25] = {.lex_state = 164},
  [26] = {.lex_state = 164},
  [27] = {.lex_state = 164},
  [28] = {.lex_state = 164},
  [29] = {.lex_state = 164},
  [30] = {.lex_state = 164},
  [31] = {.lex_state = 164},
  [32] = {.lex_state = 164},
  [33] = {.lex_state = 164},
  [34] = {.lex_state = 164},
  [35] = {.lex_state = 164},
  [36] = {.lex_state = 164},
  [37] = {.lex_state = 164},
  [38] = {.lex_state = 163},
  [39] = {.lex_state = 163},
  [40] = {.lex_state = 164},
  [41] = {.lex_state = 163},
  [42] = {.lex_state = 163},
  [43] = {.lex_state = 165},
  [44] = {.lex_state = 163},
  [45] = {.lex_state = 165},
  [46] = {.lex_state = 163},
  [47] = {.lex_state = 163},
  [48] = {.lex_state = 163},
  [49] = {.lex_state = 163},
  [50] = {.lex_state = 163},
  [51] = {.lex_state = 163},
  [52] = {.lex_state = 163},
  [53] = {.lex_state = 163},
  [54] = {.lex_state = 163},
  [55] = {.lex_state = 163},
  [56] = {.lex_state = 163},
  [57] = {.lex_state = 163},
  [58] = {.lex_state = 163},
  [59] = {.lex_state = 166},
  [60] = {.lex_state = 163},
  [61] = {.lex_state = 166},
  [62] = {.lex_state = 163},
  [63] = {.lex_state = 163},
  [64] = {.lex_state = 163},
  [65] = {.lex_state = 163},
  [66] = {.lex_state = 163},
  [67] = {.lex_state = 163},
  [68] = {.lex_state = 163},
  [69] = {.lex_state = 163},
  [70] = {.lex_state = 163},
  [71] = {.lex_state = 163},
  [72] = {.lex_state = 163},
  [73] = {.lex_state = 163},
  [74] = {.lex_state = 163},
  [75] = {.lex_state = 164},
  [76] = {.lex_state = 163},
  [77] = {.lex_state = 163},
  [78] = {.lex_state = 163},
  [79] = {.lex_state = 163},
  [80] = {.lex_state = 163},
  [81] = {.lex_state = 163},
  [82] = {.lex_state = 163},
  [83] = {.lex_state = 163},
  [84] = {.lex_state = 163},
  [85] = {.lex_state = 163},
  [86] = {.lex_state = 163},
  [87] = {.lex_state = 163},
  [88] = {.lex_state = 163},
  [89] = {.lex_state = 163},
  [90] = {.lex_state = 163},
  [91] = {.lex_state = 163},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 163},
  [94] = {.lex_state = 163},
  [95] = {.lex_state = 163},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 163},
  [100] = {.lex_state = 163},
  [101] = {.lex_state = 163},
  [102] = {.lex_state = 163},
  [103] = {.lex_state = 163},
  [104] = {.lex_state = 163},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 163},
  [107] = {.lex_state = 163},
  [108] = {.lex_state = 163},
  [109] = {.lex_state = 163},
  [110] = {.lex_state = 163},
  [111] = {.lex_state = 163},
  [112] = {.lex_state = 163},
  [113] = {.lex_state = 10},
  [114] = {.lex_state = 163},
  [115] = {.lex_state = 163},
  [116] = {.lex_state = 10},
  [117] = {.lex_state = 163},
  [118] = {.lex_state = 163},
  [119] = {.lex_state = 5},
  [120] = {.lex_state = 163},
  [121] = {.lex_state = 163},
  [122] = {.lex_state = 163},
  [123] = {.lex_state = 163},
  [124] = {.lex_state = 163},
  [125] = {.lex_state = 163},
  [126] = {.lex_state = 163},
  [127] = {.lex_state = 163},
  [128] = {.lex_state = 163},
  [129] = {.lex_state = 163},
  [130] = {.lex_state = 163},
  [131] = {.lex_state = 163},
  [132] = {.lex_state = 163},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 163},
  [135] = {.lex_state = 163},
  [136] = {.lex_state = 163},
  [137] = {.lex_state = 163},
  [138] = {.lex_state = 163},
  [139] = {.lex_state = 163},
  [140] = {.lex_state = 163},
  [141] = {.lex_state = 5},
  [142] = {.lex_state = 163},
  [143] = {.lex_state = 163},
  [144] = {.lex_state = 163},
  [145] = {.lex_state = 163},
  [146] = {.lex_state = 163},
  [147] = {.lex_state = 163},
  [148] = {.lex_state = 163},
  [149] = {.lex_state = 163},
  [150] = {.lex_state = 163},
  [151] = {.lex_state = 163},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 8},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 163},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 10},
  [161] = {.lex_state = 9},
  [162] = {.lex_state = 10},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 163},
  [165] = {.lex_state = 1},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 1},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 1},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 163},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 1},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 163},
  [181] = {.lex_state = 1},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 1},
  [184] = {.lex_state = 163},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 1},
  [187] = {.lex_state = 1},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 1},
  [190] = {.lex_state = 1},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 1},
  [193] = {.lex_state = 1},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 1},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 5},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 163},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 163},
  [214] = {.lex_state = 163},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 1},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 163},
  [222] = {.lex_state = 163},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 1},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 1},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 163},
  [230] = {.lex_state = 1},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 1},
  [237] = {.lex_state = 5},
  [238] = {.lex_state = 1},
  [239] = {.lex_state = 163},
  [240] = {.lex_state = 163},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 163},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 1},
  [245] = {.lex_state = 163},
  [246] = {.lex_state = 163},
  [247] = {.lex_state = 1},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 1},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 163},
  [254] = {.lex_state = 163},
  [255] = {.lex_state = 163},
  [256] = {.lex_state = 163},
  [257] = {.lex_state = 163},
  [258] = {.lex_state = 163},
  [259] = {.lex_state = 5},
  [260] = {.lex_state = 5},
  [261] = {.lex_state = 163},
  [262] = {.lex_state = 163},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 1},
  [265] = {.lex_state = 1},
  [266] = {.lex_state = 1},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 163},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 163},
  [272] = {.lex_state = 163},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 163},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 163},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 163},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 1},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 163},
  [296] = {.lex_state = 163},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 163},
  [299] = {.lex_state = 163},
  [300] = {.lex_state = 5},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 5},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 163},
  [305] = {.lex_state = 163},
  [306] = {.lex_state = 5},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 163},
  [310] = {.lex_state = 163},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 1},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 163},
  [316] = {.lex_state = 1},
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
  [327] = {.lex_state = 163},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 163},
  [330] = {.lex_state = 1},
  [331] = {.lex_state = 164},
  [332] = {.lex_state = 163},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 1},
  [340] = {.lex_state = 163},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 1},
  [343] = {.lex_state = 163},
  [344] = {.lex_state = 1},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 1},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 163},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 163},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 1},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 4},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 199},
  [365] = {.lex_state = 1},
  [366] = {.lex_state = 164},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 1},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 164},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 164},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 5},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 164},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 1},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 163},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 163},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 164},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 163},
  [393] = {.lex_state = 163},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 163},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 163},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 1},
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
  },
  [1] = {
    [sym_source_file] = STATE(391),
    [sym__statement] = STATE(39),
    [sym_select_statement] = STATE(131),
    [sym_delete_statement] = STATE(131),
    [sym_begin_batch] = STATE(258),
    [sym_insert_statement] = STATE(131),
    [sym_truncate] = STATE(131),
    [sym_create_index] = STATE(131),
    [aux_sym_source_file_repeat1] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_select_statement_token1] = ACTIONS(5),
    [aux_sym_delete_statement_token1] = ACTIONS(7),
    [aux_sym_begin_batch_token1] = ACTIONS(9),
    [aux_sym_insert_statement_token1] = ACTIONS(11),
    [aux_sym_truncate_token1] = ACTIONS(13),
    [aux_sym_create_index_token1] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(19), 1,
      sym__dec_digit,
    STATE(2), 1,
      aux_sym__decimal_literal,
    ACTIONS(17), 22,
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
  [31] = 16,
    ACTIONS(22), 1,
      anon_sym_LPAREN,
    ACTIONS(26), 1,
      anon_sym_DASH,
    ACTIONS(28), 1,
      sym__hex_4digit,
    ACTIONS(30), 1,
      anon_sym_SQUOTE,
    ACTIONS(32), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(34), 1,
      sym__dec_digit,
    ACTIONS(36), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(38), 1,
      anon_sym_0X,
    ACTIONS(40), 1,
      anon_sym_LBRACK,
    ACTIONS(42), 1,
      anon_sym_LBRACE,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(234), 1,
      sym_expression,
    STATE(361), 1,
      sym_expression_list,
    ACTIONS(24), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
    STATE(279), 5,
      sym_constant,
      sym_assignment_tuple,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [88] = 4,
    ACTIONS(46), 1,
      anon_sym_DOT,
    ACTIONS(48), 1,
      sym__dec_digit,
    STATE(2), 1,
      aux_sym__decimal_literal,
    ACTIONS(44), 20,
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
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [120] = 15,
    ACTIONS(22), 1,
      anon_sym_LPAREN,
    ACTIONS(26), 1,
      anon_sym_DASH,
    ACTIONS(28), 1,
      sym__hex_4digit,
    ACTIONS(30), 1,
      anon_sym_SQUOTE,
    ACTIONS(32), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(34), 1,
      sym__dec_digit,
    ACTIONS(36), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(38), 1,
      anon_sym_0X,
    ACTIONS(40), 1,
      anon_sym_LBRACK,
    ACTIONS(42), 1,
      anon_sym_LBRACE,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(308), 1,
      sym_expression,
    ACTIONS(24), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
    STATE(279), 5,
      sym_constant,
      sym_assignment_tuple,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [174] = 4,
    ACTIONS(48), 1,
      sym__dec_digit,
    ACTIONS(52), 1,
      anon_sym_DOT,
    STATE(2), 1,
      aux_sym__decimal_literal,
    ACTIONS(50), 20,
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
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [206] = 3,
    ACTIONS(48), 1,
      sym__dec_digit,
    STATE(2), 1,
      aux_sym__decimal_literal,
    ACTIONS(54), 20,
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
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [235] = 2,
    ACTIONS(58), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(56), 20,
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
  [262] = 2,
    ACTIONS(62), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(60), 20,
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
  [289] = 2,
    ACTIONS(66), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(64), 20,
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
  [316] = 3,
    ACTIONS(48), 1,
      sym__dec_digit,
    STATE(2), 1,
      aux_sym__decimal_literal,
    ACTIONS(68), 20,
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
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [345] = 1,
    ACTIONS(70), 21,
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
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_create_index_token3,
  [369] = 1,
    ACTIONS(72), 20,
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
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [392] = 1,
    ACTIONS(74), 20,
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
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [415] = 1,
    ACTIONS(50), 20,
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
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [438] = 15,
    ACTIONS(26), 1,
      anon_sym_DASH,
    ACTIONS(32), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(34), 1,
      sym__dec_digit,
    ACTIONS(36), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(38), 1,
      anon_sym_0X,
    ACTIONS(76), 1,
      anon_sym_STAR,
    ACTIONS(78), 1,
      anon_sym_RPAREN,
    ACTIONS(82), 1,
      sym__hex_4digit,
    ACTIONS(84), 1,
      anon_sym_SQUOTE,
    ACTIONS(86), 1,
      sym_object_name,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(325), 1,
      sym_function_args,
    ACTIONS(80), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(224), 2,
      sym_function_call,
      sym_constant,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [489] = 13,
    ACTIONS(26), 1,
      anon_sym_DASH,
    ACTIONS(32), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(34), 1,
      sym__dec_digit,
    ACTIONS(36), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(38), 1,
      anon_sym_0X,
    ACTIONS(82), 1,
      sym__hex_4digit,
    ACTIONS(84), 1,
      anon_sym_SQUOTE,
    ACTIONS(86), 1,
      sym_object_name,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(377), 1,
      sym_function_args,
    ACTIONS(80), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(224), 2,
      sym_function_call,
      sym_constant,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [534] = 12,
    ACTIONS(26), 1,
      anon_sym_DASH,
    ACTIONS(32), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(34), 1,
      sym__dec_digit,
    ACTIONS(36), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(82), 1,
      sym__hex_4digit,
    ACTIONS(84), 1,
      anon_sym_SQUOTE,
    ACTIONS(88), 1,
      anon_sym_0X,
    ACTIONS(90), 1,
      sym_object_name,
    STATE(6), 1,
      aux_sym__decimal_literal,
    ACTIONS(80), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(50), 2,
      sym_function_call,
      sym_constant,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [576] = 12,
    ACTIONS(26), 1,
      anon_sym_DASH,
    ACTIONS(32), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(34), 1,
      sym__dec_digit,
    ACTIONS(36), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(38), 1,
      anon_sym_0X,
    ACTIONS(82), 1,
      sym__hex_4digit,
    ACTIONS(84), 1,
      anon_sym_SQUOTE,
    ACTIONS(92), 1,
      sym_object_name,
    STATE(6), 1,
      aux_sym__decimal_literal,
    ACTIONS(80), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(252), 2,
      sym_function_call,
      sym_constant,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [618] = 12,
    ACTIONS(26), 1,
      anon_sym_DASH,
    ACTIONS(32), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(34), 1,
      sym__dec_digit,
    ACTIONS(36), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(82), 1,
      sym__hex_4digit,
    ACTIONS(84), 1,
      anon_sym_SQUOTE,
    ACTIONS(90), 1,
      sym_object_name,
    ACTIONS(94), 1,
      anon_sym_0X,
    STATE(6), 1,
      aux_sym__decimal_literal,
    ACTIONS(80), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(50), 2,
      sym_function_call,
      sym_constant,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [660] = 13,
    ACTIONS(22), 1,
      anon_sym_LPAREN,
    ACTIONS(26), 1,
      anon_sym_DASH,
    ACTIONS(28), 1,
      sym__hex_4digit,
    ACTIONS(30), 1,
      anon_sym_SQUOTE,
    ACTIONS(32), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(34), 1,
      sym__dec_digit,
    ACTIONS(36), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(38), 1,
      anon_sym_0X,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(179), 1,
      sym_constant,
    STATE(291), 1,
      sym_assignment_tuple,
    ACTIONS(24), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [704] = 12,
    ACTIONS(26), 1,
      anon_sym_DASH,
    ACTIONS(28), 1,
      sym__hex_4digit,
    ACTIONS(30), 1,
      anon_sym_SQUOTE,
    ACTIONS(32), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(34), 1,
      sym__dec_digit,
    ACTIONS(36), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(94), 1,
      anon_sym_0X,
    ACTIONS(96), 1,
      aux_sym_relalationContainsKey_token2,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(51), 1,
      sym_constant,
    ACTIONS(24), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [745] = 12,
    ACTIONS(26), 1,
      anon_sym_DASH,
    ACTIONS(28), 1,
      sym__hex_4digit,
    ACTIONS(30), 1,
      anon_sym_SQUOTE,
    ACTIONS(32), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(34), 1,
      sym__dec_digit,
    ACTIONS(36), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(38), 1,
      anon_sym_0X,
    ACTIONS(98), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(188), 1,
      sym_constant,
    ACTIONS(24), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [786] = 12,
    ACTIONS(26), 1,
      anon_sym_DASH,
    ACTIONS(28), 1,
      sym__hex_4digit,
    ACTIONS(30), 1,
      anon_sym_SQUOTE,
    ACTIONS(32), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(34), 1,
      sym__dec_digit,
    ACTIONS(36), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(88), 1,
      anon_sym_0X,
    ACTIONS(100), 1,
      aux_sym_relalationContainsKey_token2,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(51), 1,
      sym_constant,
    ACTIONS(24), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [827] = 11,
    ACTIONS(26), 1,
      anon_sym_DASH,
    ACTIONS(28), 1,
      sym__hex_4digit,
    ACTIONS(30), 1,
      anon_sym_SQUOTE,
    ACTIONS(32), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(34), 1,
      sym__dec_digit,
    ACTIONS(36), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(38), 1,
      anon_sym_0X,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(179), 1,
      sym_constant,
    ACTIONS(24), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [865] = 11,
    ACTIONS(26), 1,
      anon_sym_DASH,
    ACTIONS(28), 1,
      sym__hex_4digit,
    ACTIONS(30), 1,
      anon_sym_SQUOTE,
    ACTIONS(32), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(34), 1,
      sym__dec_digit,
    ACTIONS(36), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(88), 1,
      anon_sym_0X,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(50), 1,
      sym_constant,
    ACTIONS(24), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [903] = 11,
    ACTIONS(26), 1,
      anon_sym_DASH,
    ACTIONS(28), 1,
      sym__hex_4digit,
    ACTIONS(30), 1,
      anon_sym_SQUOTE,
    ACTIONS(32), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(34), 1,
      sym__dec_digit,
    ACTIONS(36), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(94), 1,
      anon_sym_0X,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(57), 1,
      sym_constant,
    ACTIONS(24), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [941] = 11,
    ACTIONS(26), 1,
      anon_sym_DASH,
    ACTIONS(28), 1,
      sym__hex_4digit,
    ACTIONS(30), 1,
      anon_sym_SQUOTE,
    ACTIONS(32), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(34), 1,
      sym__dec_digit,
    ACTIONS(36), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(94), 1,
      anon_sym_0X,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(52), 1,
      sym_constant,
    ACTIONS(24), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [979] = 11,
    ACTIONS(26), 1,
      anon_sym_DASH,
    ACTIONS(28), 1,
      sym__hex_4digit,
    ACTIONS(30), 1,
      anon_sym_SQUOTE,
    ACTIONS(32), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(34), 1,
      sym__dec_digit,
    ACTIONS(36), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(38), 1,
      anon_sym_0X,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(263), 1,
      sym_constant,
    ACTIONS(24), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [1017] = 11,
    ACTIONS(26), 1,
      anon_sym_DASH,
    ACTIONS(28), 1,
      sym__hex_4digit,
    ACTIONS(30), 1,
      anon_sym_SQUOTE,
    ACTIONS(32), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(34), 1,
      sym__dec_digit,
    ACTIONS(36), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(38), 1,
      anon_sym_0X,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(369), 1,
      sym_constant,
    ACTIONS(24), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [1055] = 11,
    ACTIONS(26), 1,
      anon_sym_DASH,
    ACTIONS(28), 1,
      sym__hex_4digit,
    ACTIONS(30), 1,
      anon_sym_SQUOTE,
    ACTIONS(32), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(34), 1,
      sym__dec_digit,
    ACTIONS(36), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(88), 1,
      anon_sym_0X,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(93), 1,
      sym_constant,
    ACTIONS(24), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [1093] = 11,
    ACTIONS(26), 1,
      anon_sym_DASH,
    ACTIONS(28), 1,
      sym__hex_4digit,
    ACTIONS(30), 1,
      anon_sym_SQUOTE,
    ACTIONS(32), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(34), 1,
      sym__dec_digit,
    ACTIONS(36), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(88), 1,
      anon_sym_0X,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(52), 1,
      sym_constant,
    ACTIONS(24), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [1131] = 11,
    ACTIONS(26), 1,
      anon_sym_DASH,
    ACTIONS(28), 1,
      sym__hex_4digit,
    ACTIONS(30), 1,
      anon_sym_SQUOTE,
    ACTIONS(32), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(34), 1,
      sym__dec_digit,
    ACTIONS(36), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(38), 1,
      anon_sym_0X,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(198), 1,
      sym_constant,
    ACTIONS(24), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [1169] = 11,
    ACTIONS(26), 1,
      anon_sym_DASH,
    ACTIONS(28), 1,
      sym__hex_4digit,
    ACTIONS(30), 1,
      anon_sym_SQUOTE,
    ACTIONS(32), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(34), 1,
      sym__dec_digit,
    ACTIONS(36), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(88), 1,
      anon_sym_0X,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(57), 1,
      sym_constant,
    ACTIONS(24), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [1207] = 11,
    ACTIONS(26), 1,
      anon_sym_DASH,
    ACTIONS(28), 1,
      sym__hex_4digit,
    ACTIONS(30), 1,
      anon_sym_SQUOTE,
    ACTIONS(32), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(34), 1,
      sym__dec_digit,
    ACTIONS(36), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(88), 1,
      anon_sym_0X,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(114), 1,
      sym_constant,
    ACTIONS(24), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [1245] = 11,
    ACTIONS(26), 1,
      anon_sym_DASH,
    ACTIONS(28), 1,
      sym__hex_4digit,
    ACTIONS(30), 1,
      anon_sym_SQUOTE,
    ACTIONS(32), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(34), 1,
      sym__dec_digit,
    ACTIONS(36), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(38), 1,
      anon_sym_0X,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(157), 1,
      sym_constant,
    ACTIONS(24), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [1283] = 11,
    ACTIONS(26), 1,
      anon_sym_DASH,
    ACTIONS(28), 1,
      sym__hex_4digit,
    ACTIONS(30), 1,
      anon_sym_SQUOTE,
    ACTIONS(32), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(34), 1,
      sym__dec_digit,
    ACTIONS(36), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(38), 1,
      anon_sym_0X,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(232), 1,
      sym_constant,
    ACTIONS(24), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [1321] = 10,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
    ACTIONS(104), 1,
      aux_sym_select_statement_token1,
    ACTIONS(107), 1,
      aux_sym_delete_statement_token1,
    ACTIONS(110), 1,
      aux_sym_begin_batch_token1,
    ACTIONS(113), 1,
      aux_sym_insert_statement_token1,
    ACTIONS(116), 1,
      aux_sym_truncate_token1,
    ACTIONS(119), 1,
      aux_sym_create_index_token1,
    STATE(258), 1,
      sym_begin_batch,
    STATE(38), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(131), 5,
      sym_select_statement,
      sym_delete_statement,
      sym_insert_statement,
      sym_truncate,
      sym_create_index,
  [1357] = 10,
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
    ACTIONS(122), 1,
      ts_builtin_sym_end,
    STATE(258), 1,
      sym_begin_batch,
    STATE(38), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(131), 5,
      sym_select_statement,
      sym_delete_statement,
      sym_insert_statement,
      sym_truncate,
      sym_create_index,
  [1393] = 11,
    ACTIONS(26), 1,
      anon_sym_DASH,
    ACTIONS(28), 1,
      sym__hex_4digit,
    ACTIONS(30), 1,
      anon_sym_SQUOTE,
    ACTIONS(32), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(34), 1,
      sym__dec_digit,
    ACTIONS(36), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(94), 1,
      anon_sym_0X,
    STATE(6), 1,
      aux_sym__decimal_literal,
    STATE(50), 1,
      sym_constant,
    ACTIONS(24), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(15), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [1431] = 7,
    ACTIONS(126), 1,
      aux_sym_select_statement_token4,
    ACTIONS(128), 1,
      aux_sym_select_statement_token5,
    ACTIONS(130), 1,
      aux_sym_where_spec_token1,
    ACTIONS(132), 1,
      aux_sym_order_spec_token1,
    STATE(63), 1,
      sym_where_spec,
    STATE(94), 1,
      sym_order_spec,
    ACTIONS(124), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [1460] = 7,
    ACTIONS(130), 1,
      aux_sym_where_spec_token1,
    ACTIONS(132), 1,
      aux_sym_order_spec_token1,
    ACTIONS(136), 1,
      aux_sym_select_statement_token4,
    ACTIONS(138), 1,
      aux_sym_select_statement_token5,
    STATE(69), 1,
      sym_where_spec,
    STATE(111), 1,
      sym_order_spec,
    ACTIONS(134), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [1489] = 3,
    ACTIONS(142), 1,
      sym__hex_digit,
    STATE(45), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(140), 12,
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
  [1510] = 7,
    ACTIONS(130), 1,
      aux_sym_where_spec_token1,
    ACTIONS(132), 1,
      aux_sym_order_spec_token1,
    ACTIONS(146), 1,
      aux_sym_select_statement_token4,
    ACTIONS(148), 1,
      aux_sym_select_statement_token5,
    STATE(68), 1,
      sym_where_spec,
    STATE(99), 1,
      sym_order_spec,
    ACTIONS(144), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [1539] = 3,
    ACTIONS(152), 1,
      sym__hex_digit,
    STATE(45), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(150), 12,
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
  [1560] = 2,
    ACTIONS(157), 1,
      anon_sym_DOT,
    ACTIONS(155), 13,
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
  [1579] = 3,
    ACTIONS(161), 1,
      aux_sym_relation_elements_token1,
    STATE(60), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(159), 11,
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
  [1599] = 1,
    ACTIONS(163), 13,
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
  [1615] = 1,
    ACTIONS(165), 13,
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
  [1631] = 1,
    ACTIONS(167), 13,
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
  [1647] = 1,
    ACTIONS(169), 13,
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
  [1663] = 1,
    ACTIONS(171), 13,
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
  [1679] = 1,
    ACTIONS(173), 13,
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
  [1695] = 1,
    ACTIONS(175), 13,
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
  [1711] = 1,
    ACTIONS(177), 13,
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
  [1727] = 1,
    ACTIONS(179), 13,
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
  [1743] = 1,
    ACTIONS(181), 13,
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
  [1759] = 1,
    ACTIONS(183), 13,
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
  [1775] = 3,
    ACTIONS(185), 1,
      sym__hex_digit,
    STATE(59), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(150), 11,
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
  [1795] = 3,
    ACTIONS(188), 1,
      aux_sym_relation_elements_token1,
    STATE(60), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(163), 11,
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
  [1815] = 3,
    ACTIONS(191), 1,
      sym__hex_digit,
    STATE(59), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(140), 11,
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
  [1835] = 3,
    ACTIONS(161), 1,
      aux_sym_relation_elements_token1,
    STATE(47), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(193), 11,
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
  [1855] = 5,
    ACTIONS(132), 1,
      aux_sym_order_spec_token1,
    ACTIONS(197), 1,
      aux_sym_select_statement_token4,
    ACTIONS(199), 1,
      aux_sym_select_statement_token5,
    STATE(106), 1,
      sym_order_spec,
    ACTIONS(195), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [1878] = 2,
    ACTIONS(203), 1,
      anon_sym_DOT,
    ACTIONS(201), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token3,
      anon_sym_LPAREN,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_insert_values_spec_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [1895] = 5,
    ACTIONS(207), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(209), 1,
      aux_sym_if_exist_token1,
    STATE(109), 1,
      sym_if_not_exist,
    STATE(139), 1,
      sym_using_ttl_timestamp,
    ACTIONS(205), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [1918] = 5,
    ACTIONS(207), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(209), 1,
      aux_sym_if_exist_token1,
    STATE(103), 1,
      sym_if_not_exist,
    STATE(137), 1,
      sym_using_ttl_timestamp,
    ACTIONS(211), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [1941] = 5,
    ACTIONS(207), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(209), 1,
      aux_sym_if_exist_token1,
    STATE(102), 1,
      sym_if_not_exist,
    STATE(140), 1,
      sym_using_ttl_timestamp,
    ACTIONS(213), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [1964] = 5,
    ACTIONS(132), 1,
      aux_sym_order_spec_token1,
    ACTIONS(136), 1,
      aux_sym_select_statement_token4,
    ACTIONS(138), 1,
      aux_sym_select_statement_token5,
    STATE(111), 1,
      sym_order_spec,
    ACTIONS(134), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [1987] = 5,
    ACTIONS(126), 1,
      aux_sym_select_statement_token4,
    ACTIONS(128), 1,
      aux_sym_select_statement_token5,
    ACTIONS(132), 1,
      aux_sym_order_spec_token1,
    STATE(94), 1,
      sym_order_spec,
    ACTIONS(124), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [2010] = 3,
    ACTIONS(48), 1,
      sym__dec_digit,
    STATE(2), 1,
      aux_sym__decimal_literal,
    ACTIONS(215), 10,
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
  [2029] = 5,
    ACTIONS(207), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(209), 1,
      aux_sym_if_exist_token1,
    STATE(95), 1,
      sym_if_not_exist,
    STATE(122), 1,
      sym_using_ttl_timestamp,
    ACTIONS(217), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [2052] = 2,
    ACTIONS(221), 1,
      anon_sym_DOT,
    ACTIONS(219), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token3,
      anon_sym_LPAREN,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_insert_values_spec_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [2069] = 5,
    ACTIONS(207), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(209), 1,
      aux_sym_if_exist_token1,
    STATE(100), 1,
      sym_if_not_exist,
    STATE(123), 1,
      sym_using_ttl_timestamp,
    ACTIONS(223), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [2092] = 1,
    ACTIONS(225), 12,
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
  [2107] = 2,
    ACTIONS(229), 2,
      aux_sym_order_spec_element_token1,
      aux_sym_order_spec_element_token2,
    ACTIONS(227), 10,
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
  [2124] = 1,
    ACTIONS(219), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token3,
      anon_sym_LPAREN,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_insert_values_spec_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [2138] = 4,
    ACTIONS(48), 1,
      sym__dec_digit,
    ACTIONS(128), 1,
      aux_sym_select_statement_token5,
    STATE(2), 1,
      aux_sym__decimal_literal,
    ACTIONS(124), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [2158] = 3,
    ACTIONS(231), 1,
      aux_sym_relation_elements_token1,
    STATE(78), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(163), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [2176] = 4,
    ACTIONS(48), 1,
      sym__dec_digit,
    ACTIONS(236), 1,
      aux_sym_select_statement_token5,
    STATE(2), 1,
      aux_sym__decimal_literal,
    ACTIONS(234), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [2196] = 4,
    ACTIONS(48), 1,
      sym__dec_digit,
    ACTIONS(199), 1,
      aux_sym_select_statement_token5,
    STATE(2), 1,
      aux_sym__decimal_literal,
    ACTIONS(195), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [2216] = 3,
    ACTIONS(238), 1,
      aux_sym_relation_elements_token1,
    STATE(78), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(159), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [2234] = 3,
    ACTIONS(48), 1,
      sym__dec_digit,
    STATE(2), 1,
      aux_sym__decimal_literal,
    ACTIONS(240), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_relation_elements_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [2252] = 4,
    ACTIONS(48), 1,
      sym__dec_digit,
    ACTIONS(244), 1,
      aux_sym_select_statement_token5,
    STATE(2), 1,
      aux_sym__decimal_literal,
    ACTIONS(242), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [2272] = 3,
    ACTIONS(238), 1,
      aux_sym_relation_elements_token1,
    STATE(81), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(193), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_if_exist_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [2290] = 1,
    ACTIONS(201), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token3,
      anon_sym_LPAREN,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_insert_values_spec_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [2304] = 3,
    ACTIONS(248), 1,
      aux_sym_if_exist_token1,
    STATE(149), 2,
      sym_if_exist,
      sym_if_spec,
    ACTIONS(246), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [2322] = 3,
    ACTIONS(248), 1,
      aux_sym_if_exist_token1,
    STATE(144), 2,
      sym_if_exist,
      sym_if_spec,
    ACTIONS(250), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [2340] = 4,
    ACTIONS(48), 1,
      sym__dec_digit,
    ACTIONS(254), 1,
      aux_sym_select_statement_token5,
    STATE(2), 1,
      aux_sym__decimal_literal,
    ACTIONS(252), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [2360] = 3,
    ACTIONS(248), 1,
      aux_sym_if_exist_token1,
    STATE(134), 2,
      sym_if_exist,
      sym_if_spec,
    ACTIONS(256), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [2378] = 3,
    ACTIONS(248), 1,
      aux_sym_if_exist_token1,
    STATE(142), 2,
      sym_if_exist,
      sym_if_spec,
    ACTIONS(258), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [2396] = 3,
    ACTIONS(262), 1,
      aux_sym_relation_elements_token1,
    STATE(101), 1,
      aux_sym_if_condition_list_repeat1,
    ACTIONS(260), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [2413] = 7,
    ACTIONS(264), 1,
      sym_object_name,
    ACTIONS(266), 1,
      sym__dquote,
    ACTIONS(268), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(270), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(272), 1,
      aux_sym_index_full_spec_token1,
    STATE(320), 1,
      sym_index_column_spec,
    STATE(380), 4,
      sym_column,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [2438] = 1,
    ACTIONS(274), 10,
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
  [2451] = 3,
    ACTIONS(197), 1,
      aux_sym_select_statement_token4,
    ACTIONS(199), 1,
      aux_sym_select_statement_token5,
    ACTIONS(195), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [2468] = 3,
    ACTIONS(207), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(140), 1,
      sym_using_ttl_timestamp,
    ACTIONS(213), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [2485] = 7,
    ACTIONS(264), 1,
      sym_object_name,
    ACTIONS(266), 1,
      sym__dquote,
    ACTIONS(268), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(270), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(272), 1,
      aux_sym_index_full_spec_token1,
    STATE(363), 1,
      sym_index_column_spec,
    STATE(380), 4,
      sym_column,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [2510] = 7,
    ACTIONS(264), 1,
      sym_object_name,
    ACTIONS(266), 1,
      sym__dquote,
    ACTIONS(268), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(270), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(272), 1,
      aux_sym_index_full_spec_token1,
    STATE(349), 1,
      sym_index_column_spec,
    STATE(380), 4,
      sym_column,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [2535] = 7,
    ACTIONS(264), 1,
      sym_object_name,
    ACTIONS(266), 1,
      sym__dquote,
    ACTIONS(268), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(270), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(272), 1,
      aux_sym_index_full_spec_token1,
    STATE(386), 1,
      sym_index_column_spec,
    STATE(380), 4,
      sym_column,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [2560] = 3,
    ACTIONS(136), 1,
      aux_sym_select_statement_token4,
    ACTIONS(138), 1,
      aux_sym_select_statement_token5,
    ACTIONS(134), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [2577] = 3,
    ACTIONS(207), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(145), 1,
      sym_using_ttl_timestamp,
    ACTIONS(276), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [2594] = 3,
    ACTIONS(262), 1,
      aux_sym_relation_elements_token1,
    STATE(108), 1,
      aux_sym_if_condition_list_repeat1,
    ACTIONS(278), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [2611] = 3,
    ACTIONS(207), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(139), 1,
      sym_using_ttl_timestamp,
    ACTIONS(205), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [2628] = 3,
    ACTIONS(207), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(123), 1,
      sym_using_ttl_timestamp,
    ACTIONS(223), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [2645] = 1,
    ACTIONS(280), 10,
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
  [2658] = 7,
    ACTIONS(264), 1,
      sym_object_name,
    ACTIONS(266), 1,
      sym__dquote,
    ACTIONS(268), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(270), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(272), 1,
      aux_sym_index_full_spec_token1,
    STATE(336), 1,
      sym_index_column_spec,
    STATE(380), 4,
      sym_column,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [2683] = 3,
    ACTIONS(254), 1,
      aux_sym_select_statement_token5,
    ACTIONS(282), 1,
      aux_sym_select_statement_token4,
    ACTIONS(252), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [2700] = 1,
    ACTIONS(284), 10,
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
  [2713] = 3,
    ACTIONS(288), 1,
      aux_sym_relation_elements_token1,
    STATE(108), 1,
      aux_sym_if_condition_list_repeat1,
    ACTIONS(286), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [2730] = 3,
    ACTIONS(207), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(137), 1,
      sym_using_ttl_timestamp,
    ACTIONS(211), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [2747] = 1,
    ACTIONS(291), 10,
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
  [2760] = 3,
    ACTIONS(126), 1,
      aux_sym_select_statement_token4,
    ACTIONS(128), 1,
      aux_sym_select_statement_token5,
    ACTIONS(124), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [2777] = 2,
    ACTIONS(295), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(293), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [2791] = 6,
    ACTIONS(297), 1,
      anon_sym_DOT,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
    ACTIONS(305), 1,
      aux_sym_relation_element_token1,
    ACTIONS(307), 1,
      aux_sym_relalationContainsKey_token1,
    ACTIONS(303), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(301), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2813] = 1,
    ACTIONS(309), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_relation_elements_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [2825] = 1,
    ACTIONS(286), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_relation_elements_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [2837] = 6,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
    ACTIONS(305), 1,
      aux_sym_relation_element_token1,
    ACTIONS(311), 1,
      anon_sym_DOT,
    ACTIONS(317), 1,
      aux_sym_relalationContainsKey_token1,
    ACTIONS(315), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(313), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2859] = 2,
    ACTIONS(319), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(293), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [2873] = 1,
    ACTIONS(321), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_using_timestamp_spec_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [2885] = 3,
    ACTIONS(323), 1,
      sym__hex_digit,
    STATE(119), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(150), 6,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_RBRACE,
  [2900] = 1,
    ACTIONS(326), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [2911] = 1,
    ACTIONS(328), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [2922] = 1,
    ACTIONS(213), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [2933] = 1,
    ACTIONS(276), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [2944] = 1,
    ACTIONS(242), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [2955] = 1,
    ACTIONS(330), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [2966] = 1,
    ACTIONS(332), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [2977] = 1,
    ACTIONS(334), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [2988] = 1,
    ACTIONS(336), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [2999] = 1,
    ACTIONS(195), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [3010] = 1,
    ACTIONS(338), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [3021] = 2,
    ACTIONS(342), 1,
      anon_sym_SEMI,
    ACTIONS(340), 7,
      ts_builtin_sym_end,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [3034] = 1,
    ACTIONS(344), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [3045] = 8,
    ACTIONS(32), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(84), 1,
      anon_sym_SQUOTE,
    ACTIONS(346), 1,
      sym_object_name,
    ACTIONS(348), 1,
      aux_sym_if_exist_token1,
    ACTIONS(350), 1,
      aux_sym_create_index_token3,
    STATE(156), 1,
      sym_if_not_exist,
    STATE(333), 1,
      sym_index_name,
    STATE(358), 1,
      sym__string_literal,
  [3070] = 1,
    ACTIONS(250), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [3081] = 1,
    ACTIONS(252), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [3092] = 1,
    ACTIONS(352), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [3103] = 1,
    ACTIONS(223), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [3114] = 1,
    ACTIONS(354), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [3125] = 1,
    ACTIONS(211), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [3136] = 1,
    ACTIONS(205), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [3147] = 3,
    ACTIONS(356), 1,
      sym__hex_digit,
    STATE(119), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(140), 6,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_RBRACE,
  [3162] = 1,
    ACTIONS(256), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [3173] = 1,
    ACTIONS(358), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [3184] = 1,
    ACTIONS(246), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [3195] = 1,
    ACTIONS(360), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [3206] = 1,
    ACTIONS(362), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [3217] = 1,
    ACTIONS(364), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [3228] = 1,
    ACTIONS(124), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [3239] = 1,
    ACTIONS(366), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [3250] = 1,
    ACTIONS(234), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [3261] = 1,
    ACTIONS(368), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [3272] = 6,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
    ACTIONS(372), 1,
      sym_object_name,
    STATE(74), 1,
      sym_relation_elements,
    STATE(84), 1,
      sym_relation_element,
    STATE(163), 1,
      sym_function_call,
    STATE(58), 2,
      sym_relalationContainsKey,
      sym_relalationContains,
  [3292] = 7,
    ACTIONS(374), 1,
      aux_sym_select_statement_token2,
    ACTIONS(376), 1,
      aux_sym_select_statement_token3,
    ACTIONS(378), 1,
      anon_sym_STAR,
    ACTIONS(380), 1,
      sym_object_name,
    STATE(240), 1,
      sym_function_call,
    STATE(245), 1,
      sym_select_element,
    STATE(261), 1,
      sym_select_elements,
  [3314] = 6,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
    ACTIONS(382), 1,
      sym_object_name,
    STATE(62), 1,
      sym_relation_element,
    STATE(74), 1,
      sym_relation_elements,
    STATE(171), 1,
      sym_function_call,
    STATE(58), 2,
      sym_relalationContainsKey,
      sym_relalationContains,
  [3334] = 1,
    ACTIONS(384), 7,
      ts_builtin_sym_end,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
  [3344] = 6,
    ACTIONS(32), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(84), 1,
      anon_sym_SQUOTE,
    ACTIONS(346), 1,
      sym_object_name,
    ACTIONS(386), 1,
      aux_sym_create_index_token3,
    STATE(358), 1,
      sym__string_literal,
    STATE(395), 1,
      sym_index_name,
  [3363] = 6,
    ACTIONS(22), 1,
      anon_sym_LPAREN,
    ACTIONS(388), 1,
      anon_sym_COMMA,
    ACTIONS(390), 1,
      anon_sym_RPAREN,
    STATE(205), 1,
      aux_sym_assignment_tuple_repeat1,
    STATE(207), 1,
      aux_sym_relation_element_repeat2,
    STATE(208), 1,
      sym_assignment_tuple,
  [3382] = 5,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
    ACTIONS(382), 1,
      sym_object_name,
    STATE(48), 1,
      sym_relation_element,
    STATE(171), 1,
      sym_function_call,
    STATE(58), 2,
      sym_relalationContainsKey,
      sym_relalationContains,
  [3399] = 5,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
    ACTIONS(372), 1,
      sym_object_name,
    STATE(48), 1,
      sym_relation_element,
    STATE(163), 1,
      sym_function_call,
    STATE(58), 2,
      sym_relalationContainsKey,
      sym_relalationContains,
  [3416] = 2,
    ACTIONS(394), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(392), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_relation_element_token1,
  [3427] = 6,
    ACTIONS(378), 1,
      anon_sym_STAR,
    ACTIONS(380), 1,
      sym_object_name,
    ACTIONS(396), 1,
      aux_sym_select_statement_token3,
    STATE(240), 1,
      sym_function_call,
    STATE(245), 1,
      sym_select_element,
    STATE(286), 1,
      sym_select_elements,
  [3446] = 2,
    ACTIONS(400), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(398), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_relation_element_token1,
  [3457] = 2,
    ACTIONS(404), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(402), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3467] = 5,
    ACTIONS(30), 1,
      anon_sym_SQUOTE,
    ACTIONS(32), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(406), 1,
      sym__dec_digit,
    STATE(222), 1,
      aux_sym__decimal_literal,
    STATE(345), 1,
      sym__string_literal,
  [3483] = 5,
    ACTIONS(378), 1,
      anon_sym_STAR,
    ACTIONS(408), 1,
      sym_object_name,
    STATE(240), 1,
      sym_function_call,
    STATE(245), 1,
      sym_select_element,
    STATE(298), 1,
      sym_select_elements,
  [3499] = 5,
    ACTIONS(378), 1,
      anon_sym_STAR,
    ACTIONS(408), 1,
      sym_object_name,
    STATE(240), 1,
      sym_function_call,
    STATE(245), 1,
      sym_select_element,
    STATE(286), 1,
      sym_select_elements,
  [3515] = 5,
    ACTIONS(410), 1,
      aux_sym_select_statement_token3,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(414), 1,
      aux_sym_insert_values_spec_token1,
    STATE(65), 1,
      sym_insert_values_spec,
    STATE(223), 1,
      sym_insert_column_spec,
  [3531] = 5,
    ACTIONS(416), 1,
      sym_object_name,
    ACTIONS(418), 1,
      aux_sym_from_spec_token1,
    STATE(185), 1,
      sym_from_spec,
    STATE(211), 1,
      sym_delete_column_item,
    STATE(295), 1,
      sym_delete_column_list,
  [3547] = 5,
    ACTIONS(410), 1,
      aux_sym_select_statement_token3,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(414), 1,
      aux_sym_insert_values_spec_token1,
    STATE(67), 1,
      sym_insert_values_spec,
    STATE(231), 1,
      sym_insert_column_spec,
  [3563] = 5,
    ACTIONS(420), 1,
      sym_object_name,
    ACTIONS(422), 1,
      sym__dquote,
    ACTIONS(424), 1,
      aux_sym_truncate_token2,
    STATE(130), 1,
      sym_table,
    STATE(324), 1,
      sym_keyspace,
  [3579] = 2,
    ACTIONS(428), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(426), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3589] = 5,
    ACTIONS(410), 1,
      aux_sym_select_statement_token3,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(414), 1,
      aux_sym_insert_values_spec_token1,
    STATE(71), 1,
      sym_insert_values_spec,
    STATE(241), 1,
      sym_insert_column_spec,
  [3605] = 4,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
    ACTIONS(432), 1,
      anon_sym_DOT,
    ACTIONS(434), 1,
      aux_sym_select_element_token1,
    ACTIONS(430), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [3619] = 2,
    ACTIONS(438), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(436), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3629] = 5,
    ACTIONS(410), 1,
      aux_sym_select_statement_token3,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    ACTIONS(414), 1,
      aux_sym_insert_values_spec_token1,
    STATE(66), 1,
      sym_insert_values_spec,
    STATE(216), 1,
      sym_insert_column_spec,
  [3645] = 3,
    ACTIONS(440), 1,
      anon_sym_COMMA,
    STATE(176), 1,
      aux_sym_assignment_tuple_repeat1,
    ACTIONS(443), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [3657] = 2,
    ACTIONS(447), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(445), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3667] = 5,
    ACTIONS(416), 1,
      sym_object_name,
    ACTIONS(418), 1,
      aux_sym_from_spec_token1,
    STATE(191), 1,
      sym_from_spec,
    STATE(211), 1,
      sym_delete_column_item,
    STATE(272), 1,
      sym_delete_column_list,
  [3683] = 1,
    ACTIONS(443), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [3690] = 3,
    ACTIONS(451), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(256), 1,
      sym_using_timestamp_spec,
    ACTIONS(449), 2,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
  [3701] = 4,
    ACTIONS(420), 1,
      sym_object_name,
    ACTIONS(422), 1,
      sym__dquote,
    STATE(334), 1,
      sym_table,
    STATE(335), 1,
      sym_keyspace,
  [3714] = 4,
    ACTIONS(451), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(453), 1,
      aux_sym_where_spec_token1,
    STATE(87), 1,
      sym_where_spec,
    STATE(294), 1,
      sym_using_timestamp_spec,
  [3727] = 2,
    ACTIONS(321), 2,
      anon_sym_DOLLAR_DOLLAR,
      sym_object_name,
    ACTIONS(455), 2,
      anon_sym_SQUOTE,
      aux_sym_create_index_token3,
  [3736] = 3,
    ACTIONS(451), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(253), 1,
      sym_using_timestamp_spec,
    ACTIONS(457), 2,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
  [3747] = 4,
    ACTIONS(451), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(453), 1,
      aux_sym_where_spec_token1,
    STATE(89), 1,
      sym_where_spec,
    STATE(275), 1,
      sym_using_timestamp_spec,
  [3760] = 4,
    ACTIONS(420), 1,
      sym_object_name,
    ACTIONS(422), 1,
      sym__dquote,
    STATE(328), 1,
      sym_keyspace,
    STATE(371), 1,
      sym_table,
  [3773] = 4,
    ACTIONS(264), 1,
      sym_object_name,
    ACTIONS(266), 1,
      sym__dquote,
    STATE(199), 1,
      sym_column,
    STATE(350), 1,
      sym_column_list,
  [3786] = 4,
    ACTIONS(459), 1,
      anon_sym_COMMA,
    ACTIONS(461), 1,
      anon_sym_COLON,
    ACTIONS(463), 1,
      anon_sym_RBRACE,
    STATE(201), 1,
      aux_sym_assignment_tuple_repeat1,
  [3799] = 4,
    ACTIONS(420), 1,
      sym_object_name,
    ACTIONS(422), 1,
      sym__dquote,
    STATE(397), 1,
      sym_table,
    STATE(398), 1,
      sym_keyspace,
  [3812] = 4,
    ACTIONS(420), 1,
      sym_object_name,
    ACTIONS(422), 1,
      sym__dquote,
    STATE(138), 1,
      sym_table,
    STATE(368), 1,
      sym_keyspace,
  [3825] = 4,
    ACTIONS(451), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(453), 1,
      aux_sym_where_spec_token1,
    STATE(90), 1,
      sym_where_spec,
    STATE(267), 1,
      sym_using_timestamp_spec,
  [3838] = 4,
    ACTIONS(420), 1,
      sym_object_name,
    ACTIONS(422), 1,
      sym__dquote,
    STATE(169), 1,
      sym_table,
    STATE(394), 1,
      sym_keyspace,
  [3851] = 4,
    ACTIONS(420), 1,
      sym_object_name,
    ACTIONS(422), 1,
      sym__dquote,
    STATE(172), 1,
      sym_table,
    STATE(326), 1,
      sym_keyspace,
  [3864] = 4,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
    ACTIONS(465), 1,
      anon_sym_COMMA,
    ACTIONS(467), 1,
      anon_sym_RPAREN,
    STATE(233), 1,
      aux_sym_function_args_repeat1,
  [3877] = 4,
    ACTIONS(469), 1,
      sym_object_name,
    ACTIONS(471), 1,
      aux_sym_if_exist_token2,
    STATE(91), 1,
      sym_if_condition,
    STATE(120), 1,
      sym_if_condition_list,
  [3890] = 4,
    ACTIONS(473), 1,
      aux_sym_timestamp_token1,
    ACTIONS(475), 1,
      aux_sym_ttl_token1,
    STATE(112), 1,
      sym_ttl,
    STATE(117), 1,
      sym_timestamp,
  [3903] = 3,
    ACTIONS(477), 1,
      anon_sym_COMMA,
    ACTIONS(479), 1,
      anon_sym_RBRACE,
    STATE(220), 1,
      aux_sym_assignment_map_repeat1,
  [3913] = 3,
    ACTIONS(477), 1,
      anon_sym_COMMA,
    ACTIONS(481), 1,
      anon_sym_RBRACE,
    STATE(197), 1,
      aux_sym_assignment_map_repeat1,
  [3923] = 3,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    ACTIONS(485), 1,
      anon_sym_RPAREN,
    STATE(228), 1,
      aux_sym_column_list_repeat1,
  [3933] = 3,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    ACTIONS(490), 1,
      anon_sym_RPAREN,
    STATE(200), 1,
      aux_sym_expression_list_repeat1,
  [3943] = 3,
    ACTIONS(459), 1,
      anon_sym_COMMA,
    ACTIONS(492), 1,
      anon_sym_RBRACE,
    STATE(176), 1,
      aux_sym_assignment_tuple_repeat1,
  [3953] = 3,
    ACTIONS(459), 1,
      anon_sym_COMMA,
    ACTIONS(494), 1,
      anon_sym_RBRACK,
    STATE(176), 1,
      aux_sym_assignment_tuple_repeat1,
  [3963] = 3,
    ACTIONS(496), 1,
      sym__hex_digit,
    ACTIONS(499), 1,
      anon_sym_SQUOTE,
    STATE(203), 1,
      aux_sym__hexadecimal_literal_repeat1,
  [3973] = 2,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
    ACTIONS(501), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3981] = 3,
    ACTIONS(459), 1,
      anon_sym_COMMA,
    ACTIONS(503), 1,
      anon_sym_RPAREN,
    STATE(176), 1,
      aux_sym_assignment_tuple_repeat1,
  [3991] = 3,
    ACTIONS(501), 1,
      anon_sym_RPAREN,
    ACTIONS(505), 1,
      anon_sym_COMMA,
    STATE(206), 1,
      aux_sym_function_args_repeat1,
  [4001] = 3,
    ACTIONS(503), 1,
      anon_sym_RPAREN,
    ACTIONS(508), 1,
      anon_sym_COMMA,
    STATE(217), 1,
      aux_sym_relation_element_repeat2,
  [4011] = 3,
    ACTIONS(503), 1,
      anon_sym_RPAREN,
    ACTIONS(508), 1,
      anon_sym_COMMA,
    STATE(250), 1,
      aux_sym_relation_element_repeat2,
  [4021] = 3,
    ACTIONS(508), 1,
      anon_sym_COMMA,
    ACTIONS(510), 1,
      anon_sym_RPAREN,
    STATE(217), 1,
      aux_sym_relation_element_repeat2,
  [4031] = 3,
    ACTIONS(508), 1,
      anon_sym_COMMA,
    ACTIONS(510), 1,
      anon_sym_RPAREN,
    STATE(218), 1,
      aux_sym_relation_element_repeat2,
  [4041] = 3,
    ACTIONS(512), 1,
      anon_sym_COMMA,
    ACTIONS(514), 1,
      aux_sym_from_spec_token1,
    STATE(246), 1,
      aux_sym_delete_column_list_repeat1,
  [4051] = 3,
    ACTIONS(516), 1,
      anon_sym_COMMA,
    ACTIONS(518), 1,
      anon_sym_RPAREN,
    STATE(243), 1,
      aux_sym_relation_element_repeat1,
  [4061] = 1,
    ACTIONS(520), 3,
      aux_sym_where_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
  [4067] = 3,
    ACTIONS(522), 1,
      anon_sym_COMMA,
    ACTIONS(525), 1,
      aux_sym_from_spec_token1,
    STATE(214), 1,
      aux_sym_select_elements_repeat1,
  [4077] = 3,
    ACTIONS(516), 1,
      anon_sym_COMMA,
    ACTIONS(527), 1,
      anon_sym_RPAREN,
    STATE(212), 1,
      aux_sym_relation_element_repeat1,
  [4087] = 3,
    ACTIONS(410), 1,
      aux_sym_select_statement_token3,
    ACTIONS(414), 1,
      aux_sym_insert_values_spec_token1,
    STATE(73), 1,
      sym_insert_values_spec,
  [4097] = 3,
    ACTIONS(529), 1,
      anon_sym_COMMA,
    ACTIONS(532), 1,
      anon_sym_RPAREN,
    STATE(217), 1,
      aux_sym_relation_element_repeat2,
  [4107] = 3,
    ACTIONS(508), 1,
      anon_sym_COMMA,
    ACTIONS(534), 1,
      anon_sym_RPAREN,
    STATE(217), 1,
      aux_sym_relation_element_repeat2,
  [4117] = 3,
    ACTIONS(536), 1,
      sym_object_name,
    ACTIONS(538), 1,
      sym__dquote,
    STATE(311), 1,
      sym_table,
  [4127] = 3,
    ACTIONS(540), 1,
      anon_sym_COMMA,
    ACTIONS(543), 1,
      anon_sym_RBRACE,
    STATE(220), 1,
      aux_sym_assignment_map_repeat1,
  [4137] = 3,
    ACTIONS(545), 1,
      anon_sym_COMMA,
    ACTIONS(548), 1,
      aux_sym_from_spec_token1,
    STATE(221), 1,
      aux_sym_delete_column_list_repeat1,
  [4147] = 3,
    ACTIONS(48), 1,
      sym__dec_digit,
    ACTIONS(550), 1,
      anon_sym_RBRACK,
    STATE(2), 1,
      aux_sym__decimal_literal,
  [4157] = 3,
    ACTIONS(410), 1,
      aux_sym_select_statement_token3,
    ACTIONS(414), 1,
      aux_sym_insert_values_spec_token1,
    STATE(66), 1,
      sym_insert_values_spec,
  [4167] = 3,
    ACTIONS(465), 1,
      anon_sym_COMMA,
    ACTIONS(467), 1,
      anon_sym_RPAREN,
    STATE(233), 1,
      aux_sym_function_args_repeat1,
  [4177] = 3,
    ACTIONS(408), 1,
      sym_object_name,
    STATE(240), 1,
      sym_function_call,
    STATE(304), 1,
      sym_select_element,
  [4187] = 3,
    ACTIONS(552), 1,
      anon_sym_COMMA,
    ACTIONS(554), 1,
      anon_sym_RPAREN,
    STATE(200), 1,
      aux_sym_expression_list_repeat1,
  [4197] = 3,
    ACTIONS(264), 1,
      sym_object_name,
    ACTIONS(266), 1,
      sym__dquote,
    STATE(274), 1,
      sym_column,
  [4207] = 3,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    ACTIONS(556), 1,
      anon_sym_RPAREN,
    STATE(235), 1,
      aux_sym_column_list_repeat1,
  [4217] = 3,
    ACTIONS(558), 1,
      anon_sym_COMMA,
    ACTIONS(560), 1,
      aux_sym_from_spec_token1,
    STATE(214), 1,
      aux_sym_select_elements_repeat1,
  [4227] = 3,
    ACTIONS(536), 1,
      sym_object_name,
    ACTIONS(538), 1,
      sym__dquote,
    STATE(167), 1,
      sym_table,
  [4237] = 3,
    ACTIONS(410), 1,
      aux_sym_select_statement_token3,
    ACTIONS(414), 1,
      aux_sym_insert_values_spec_token1,
    STATE(65), 1,
      sym_insert_values_spec,
  [4247] = 3,
    ACTIONS(459), 1,
      anon_sym_COMMA,
    ACTIONS(562), 1,
      anon_sym_RBRACK,
    STATE(202), 1,
      aux_sym_assignment_tuple_repeat1,
  [4257] = 3,
    ACTIONS(465), 1,
      anon_sym_COMMA,
    ACTIONS(564), 1,
      anon_sym_RPAREN,
    STATE(206), 1,
      aux_sym_function_args_repeat1,
  [4267] = 3,
    ACTIONS(552), 1,
      anon_sym_COMMA,
    ACTIONS(566), 1,
      anon_sym_RPAREN,
    STATE(226), 1,
      aux_sym_expression_list_repeat1,
  [4277] = 3,
    ACTIONS(568), 1,
      anon_sym_COMMA,
    ACTIONS(571), 1,
      anon_sym_RPAREN,
    STATE(235), 1,
      aux_sym_column_list_repeat1,
  [4287] = 3,
    ACTIONS(536), 1,
      sym_object_name,
    ACTIONS(538), 1,
      sym__dquote,
    STATE(175), 1,
      sym_table,
  [4297] = 3,
    ACTIONS(573), 1,
      sym__hex_digit,
    ACTIONS(575), 1,
      anon_sym_SQUOTE,
    STATE(203), 1,
      aux_sym__hexadecimal_literal_repeat1,
  [4307] = 3,
    ACTIONS(536), 1,
      sym_object_name,
    ACTIONS(538), 1,
      sym__dquote,
    STATE(128), 1,
      sym_table,
  [4317] = 2,
    ACTIONS(579), 1,
      anon_sym_LBRACK,
    ACTIONS(577), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [4325] = 2,
    ACTIONS(434), 1,
      aux_sym_select_element_token1,
    ACTIONS(430), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [4333] = 3,
    ACTIONS(410), 1,
      aux_sym_select_statement_token3,
    ACTIONS(414), 1,
      aux_sym_insert_values_spec_token1,
    STATE(67), 1,
      sym_insert_values_spec,
  [4343] = 2,
    ACTIONS(583), 1,
      aux_sym_begin_batch_token4,
    ACTIONS(581), 2,
      aux_sym_begin_batch_token2,
      aux_sym_begin_batch_token3,
  [4351] = 3,
    ACTIONS(585), 1,
      anon_sym_COMMA,
    ACTIONS(588), 1,
      anon_sym_RPAREN,
    STATE(243), 1,
      aux_sym_relation_element_repeat1,
  [4361] = 3,
    ACTIONS(536), 1,
      sym_object_name,
    ACTIONS(538), 1,
      sym__dquote,
    STATE(121), 1,
      sym_table,
  [4371] = 3,
    ACTIONS(558), 1,
      anon_sym_COMMA,
    ACTIONS(590), 1,
      aux_sym_from_spec_token1,
    STATE(229), 1,
      aux_sym_select_elements_repeat1,
  [4381] = 3,
    ACTIONS(512), 1,
      anon_sym_COMMA,
    ACTIONS(592), 1,
      aux_sym_from_spec_token1,
    STATE(221), 1,
      aux_sym_delete_column_list_repeat1,
  [4391] = 3,
    ACTIONS(536), 1,
      sym_object_name,
    ACTIONS(538), 1,
      sym__dquote,
    STATE(337), 1,
      sym_table,
  [4401] = 3,
    ACTIONS(508), 1,
      anon_sym_COMMA,
    ACTIONS(594), 1,
      anon_sym_RPAREN,
    STATE(209), 1,
      aux_sym_relation_element_repeat2,
  [4411] = 3,
    ACTIONS(536), 1,
      sym_object_name,
    ACTIONS(538), 1,
      sym__dquote,
    STATE(371), 1,
      sym_table,
  [4421] = 3,
    ACTIONS(508), 1,
      anon_sym_COMMA,
    ACTIONS(596), 1,
      anon_sym_RPAREN,
    STATE(217), 1,
      aux_sym_relation_element_repeat2,
  [4431] = 1,
    ACTIONS(588), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4436] = 1,
    ACTIONS(501), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4441] = 1,
    ACTIONS(598), 2,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
  [4446] = 2,
    ACTIONS(600), 1,
      sym__dec_digit,
    STATE(79), 1,
      aux_sym__decimal_literal,
  [4453] = 2,
    ACTIONS(602), 1,
      sym__dec_digit,
    STATE(80), 1,
      aux_sym__decimal_literal,
  [4460] = 1,
    ACTIONS(457), 2,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
  [4465] = 2,
    ACTIONS(604), 1,
      sym__dec_digit,
    STATE(82), 1,
      aux_sym__decimal_literal,
  [4472] = 2,
    ACTIONS(606), 1,
      aux_sym_delete_statement_token1,
    ACTIONS(608), 1,
      aux_sym_insert_statement_token1,
  [4479] = 2,
    ACTIONS(610), 1,
      sym__hex_digit,
    STATE(43), 1,
      aux_sym__hexadecimal_literal_repeat2,
  [4486] = 2,
    ACTIONS(612), 1,
      sym__hex_digit,
    STATE(61), 1,
      aux_sym__hexadecimal_literal_repeat2,
  [4493] = 2,
    ACTIONS(614), 1,
      aux_sym_from_spec_token1,
    STATE(44), 1,
      sym_from_spec,
  [4500] = 2,
    ACTIONS(616), 1,
      sym__dec_digit,
    STATE(11), 1,
      aux_sym__decimal_literal,
  [4507] = 1,
    ACTIONS(618), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4512] = 2,
    ACTIONS(416), 1,
      sym_object_name,
    STATE(271), 1,
      sym_delete_column_item,
  [4519] = 2,
    ACTIONS(620), 1,
      sym_object_name,
    STATE(49), 1,
      sym_from_spec_element,
  [4526] = 2,
    ACTIONS(622), 1,
      sym_object_name,
    STATE(104), 1,
      sym_order_spec_element,
  [4533] = 2,
    ACTIONS(453), 1,
      aux_sym_where_spec_token1,
    STATE(89), 1,
      sym_where_spec,
  [4540] = 2,
    ACTIONS(473), 1,
      aux_sym_timestamp_token1,
    STATE(213), 1,
      sym_timestamp,
  [4547] = 1,
    ACTIONS(624), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [4552] = 1,
    ACTIONS(626), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4557] = 1,
    ACTIONS(548), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [4562] = 2,
    ACTIONS(614), 1,
      aux_sym_from_spec_token1,
    STATE(185), 1,
      sym_from_spec,
  [4569] = 1,
    ACTIONS(628), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4574] = 1,
    ACTIONS(571), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4579] = 2,
    ACTIONS(453), 1,
      aux_sym_where_spec_token1,
    STATE(87), 1,
      sym_where_spec,
  [4586] = 2,
    ACTIONS(630), 1,
      sym__dec_digit,
    STATE(70), 1,
      aux_sym__decimal_literal,
  [4593] = 1,
    ACTIONS(632), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4598] = 1,
    ACTIONS(634), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4603] = 1,
    ACTIONS(636), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4608] = 1,
    ACTIONS(638), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4613] = 1,
    ACTIONS(640), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4618] = 1,
    ACTIONS(642), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4623] = 1,
    ACTIONS(644), 2,
      aux_sym_select_statement_token3,
      aux_sym_insert_values_spec_token1,
  [4628] = 2,
    ACTIONS(475), 1,
      aux_sym_ttl_token1,
    STATE(126), 1,
      sym_ttl,
  [4635] = 2,
    ACTIONS(473), 1,
      aux_sym_timestamp_token1,
    STATE(126), 1,
      sym_timestamp,
  [4642] = 2,
    ACTIONS(614), 1,
      aux_sym_from_spec_token1,
    STATE(42), 1,
      sym_from_spec,
  [4649] = 1,
    ACTIONS(646), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4654] = 2,
    ACTIONS(648), 1,
      sym__dec_digit,
    STATE(77), 1,
      aux_sym__decimal_literal,
  [4661] = 1,
    ACTIONS(650), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4666] = 2,
    ACTIONS(22), 1,
      anon_sym_LPAREN,
    STATE(291), 1,
      sym_assignment_tuple,
  [4673] = 1,
    ACTIONS(532), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4678] = 2,
    ACTIONS(22), 1,
      anon_sym_LPAREN,
    STATE(210), 1,
      sym_assignment_tuple,
  [4685] = 2,
    ACTIONS(469), 1,
      sym_object_name,
    STATE(115), 1,
      sym_if_condition,
  [4692] = 2,
    ACTIONS(453), 1,
      aux_sym_where_spec_token1,
    STATE(86), 1,
      sym_where_spec,
  [4699] = 2,
    ACTIONS(614), 1,
      aux_sym_from_spec_token1,
    STATE(182), 1,
      sym_from_spec,
  [4706] = 2,
    ACTIONS(652), 1,
      sym__dec_digit,
    STATE(88), 1,
      aux_sym__decimal_literal,
  [4713] = 1,
    ACTIONS(654), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4718] = 2,
    ACTIONS(614), 1,
      aux_sym_from_spec_token1,
    STATE(41), 1,
      sym_from_spec,
  [4725] = 2,
    ACTIONS(656), 1,
      sym__dec_digit,
    STATE(83), 1,
      aux_sym__decimal_literal,
  [4732] = 2,
    ACTIONS(573), 1,
      sym__hex_digit,
    STATE(237), 1,
      aux_sym__hexadecimal_literal_repeat1,
  [4739] = 2,
    ACTIONS(22), 1,
      anon_sym_LPAREN,
    STATE(248), 1,
      sym_assignment_tuple,
  [4746] = 2,
    ACTIONS(658), 1,
      sym__hex_digit,
    STATE(141), 1,
      aux_sym__hexadecimal_literal_repeat2,
  [4753] = 1,
    ACTIONS(660), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4758] = 1,
    ACTIONS(525), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [4763] = 1,
    ACTIONS(662), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [4768] = 1,
    ACTIONS(499), 2,
      sym__hex_digit,
      anon_sym_SQUOTE,
  [4773] = 1,
    ACTIONS(664), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4778] = 1,
    ACTIONS(490), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4783] = 2,
    ACTIONS(666), 1,
      sym__dec_digit,
    STATE(4), 1,
      aux_sym__decimal_literal,
  [4790] = 2,
    ACTIONS(668), 1,
      sym__dec_digit,
    STATE(7), 1,
      aux_sym__decimal_literal,
  [4797] = 1,
    ACTIONS(670), 1,
      anon_sym_LPAREN,
  [4801] = 1,
    ACTIONS(672), 1,
      sym_object_name,
  [4805] = 1,
    ACTIONS(674), 1,
      anon_sym_DASH,
  [4809] = 1,
    ACTIONS(676), 1,
      anon_sym_LPAREN,
  [4813] = 1,
    ACTIONS(678), 1,
      aux_sym_insert_statement_token2,
  [4817] = 1,
    ACTIONS(680), 1,
      sym_object_name,
  [4821] = 1,
    ACTIONS(682), 1,
      anon_sym_RPAREN,
  [4825] = 1,
    ACTIONS(684), 1,
      anon_sym_DASH,
  [4829] = 1,
    ACTIONS(686), 1,
      anon_sym_DASH,
  [4833] = 1,
    ACTIONS(688), 1,
      anon_sym_RPAREN,
  [4837] = 1,
    ACTIONS(690), 1,
      anon_sym_RPAREN,
  [4841] = 1,
    ACTIONS(692), 1,
      anon_sym_RPAREN,
  [4845] = 1,
    ACTIONS(694), 1,
      anon_sym_RPAREN,
  [4849] = 1,
    ACTIONS(696), 1,
      anon_sym_DOT,
  [4853] = 1,
    ACTIONS(698), 1,
      anon_sym_RPAREN,
  [4857] = 1,
    ACTIONS(700), 1,
      anon_sym_DOT,
  [4861] = 1,
    ACTIONS(702), 1,
      aux_sym_select_statement_token6,
  [4865] = 1,
    ACTIONS(704), 1,
      anon_sym_DOT,
  [4869] = 1,
    ACTIONS(706), 1,
      aux_sym_select_statement_token6,
  [4873] = 1,
    ACTIONS(708), 1,
      sym_object_name,
  [4877] = 1,
    ACTIONS(710), 1,
      sym__hex_4digit,
  [4881] = 1,
    ACTIONS(712), 1,
      aux_sym_select_statement_token6,
  [4885] = 1,
    ACTIONS(714), 1,
      aux_sym_create_index_token3,
  [4889] = 1,
    ACTIONS(716), 1,
      anon_sym_LPAREN,
  [4893] = 1,
    ACTIONS(718), 1,
      anon_sym_DOT,
  [4897] = 1,
    ACTIONS(720), 1,
      anon_sym_RPAREN,
  [4901] = 1,
    ACTIONS(722), 1,
      anon_sym_LPAREN,
  [4905] = 1,
    ACTIONS(724), 1,
      sym__dquote,
  [4909] = 1,
    ACTIONS(726), 1,
      sym_object_name,
  [4913] = 1,
    ACTIONS(728), 1,
      aux_sym_select_statement_token6,
  [4917] = 1,
    ACTIONS(730), 1,
      sym__dquote,
  [4921] = 1,
    ACTIONS(732), 1,
      sym_object_name,
  [4925] = 1,
    ACTIONS(734), 1,
      aux_sym_order_spec_token2,
  [4929] = 1,
    ACTIONS(736), 1,
      sym_object_name,
  [4933] = 1,
    ACTIONS(550), 1,
      anon_sym_RBRACK,
  [4937] = 1,
    ACTIONS(738), 1,
      anon_sym_RPAREN,
  [4941] = 1,
    ACTIONS(740), 1,
      anon_sym_RPAREN,
  [4945] = 1,
    ACTIONS(742), 1,
      anon_sym_RPAREN,
  [4949] = 1,
    ACTIONS(744), 1,
      anon_sym_RPAREN,
  [4953] = 1,
    ACTIONS(746), 1,
      anon_sym_RPAREN,
  [4957] = 1,
    ACTIONS(748), 1,
      sym_object_name,
  [4961] = 1,
    ACTIONS(750), 1,
      aux_sym_if_not_exist_token1,
  [4965] = 1,
    ACTIONS(752), 1,
      aux_sym_select_statement_token6,
  [4969] = 1,
    ACTIONS(754), 1,
      anon_sym_DASH,
  [4973] = 1,
    ACTIONS(756), 1,
      aux_sym_begin_batch_token4,
  [4977] = 1,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
  [4981] = 1,
    ACTIONS(758), 1,
      sym_object_name,
  [4985] = 1,
    ACTIONS(760), 1,
      aux_sym_create_index_token3,
  [4989] = 1,
    ACTIONS(762), 1,
      anon_sym_EQ,
  [4993] = 1,
    ACTIONS(764), 1,
      aux_sym__string_literal_token2,
  [4997] = 1,
    ACTIONS(766), 1,
      anon_sym_RPAREN,
  [5001] = 1,
    ACTIONS(768), 1,
      anon_sym_LPAREN,
  [5005] = 1,
    ACTIONS(770), 1,
      anon_sym_RPAREN,
  [5009] = 1,
    ACTIONS(772), 1,
      aux_sym__string_literal_token1,
  [5013] = 1,
    ACTIONS(774), 1,
      sym_object_name,
  [5017] = 1,
    ACTIONS(776), 1,
      sym__hex_4digit,
  [5021] = 1,
    ACTIONS(778), 1,
      anon_sym_SQUOTE,
  [5025] = 1,
    ACTIONS(780), 1,
      anon_sym_DOT,
  [5029] = 1,
    ACTIONS(782), 1,
      anon_sym_COLON,
  [5033] = 1,
    ACTIONS(784), 1,
      sym_object_name,
  [5037] = 1,
    ACTIONS(786), 1,
      anon_sym_LPAREN,
  [5041] = 1,
    ACTIONS(788), 1,
      anon_sym_LPAREN,
  [5045] = 1,
    ACTIONS(790), 1,
      sym__hex_4digit,
  [5049] = 1,
    ACTIONS(784), 1,
      anon_sym_STAR,
  [5053] = 1,
    ACTIONS(792), 1,
      anon_sym_LPAREN,
  [5057] = 1,
    ACTIONS(794), 1,
      sym__hex_4digit,
  [5061] = 1,
    ACTIONS(796), 1,
      anon_sym_RPAREN,
  [5065] = 1,
    ACTIONS(798), 1,
      anon_sym_LPAREN,
  [5069] = 1,
    ACTIONS(800), 1,
      sym__hex_digit,
  [5073] = 1,
    ACTIONS(802), 1,
      anon_sym_RPAREN,
  [5077] = 1,
    ACTIONS(804), 1,
      sym__hex_4digit,
  [5081] = 1,
    ACTIONS(806), 1,
      anon_sym_LPAREN,
  [5085] = 1,
    ACTIONS(808), 1,
      sym_object_name,
  [5089] = 1,
    ACTIONS(810), 1,
      anon_sym_LPAREN,
  [5093] = 1,
    ACTIONS(812), 1,
      aux_sym_if_exist_token2,
  [5097] = 1,
    ACTIONS(814), 1,
      anon_sym_RPAREN,
  [5101] = 1,
    ACTIONS(816), 1,
      aux_sym_if_not_exist_token1,
  [5105] = 1,
    ACTIONS(818), 1,
      aux_sym_select_statement_token6,
  [5109] = 1,
    ACTIONS(820), 1,
      sym__dquote,
  [5113] = 1,
    ACTIONS(822), 1,
      sym__hex_4digit,
  [5117] = 1,
    ACTIONS(824), 1,
      ts_builtin_sym_end,
  [5121] = 1,
    ACTIONS(826), 1,
      aux_sym_create_index_token2,
  [5125] = 1,
    ACTIONS(828), 1,
      aux_sym_select_statement_token6,
  [5129] = 1,
    ACTIONS(830), 1,
      anon_sym_DOT,
  [5133] = 1,
    ACTIONS(832), 1,
      aux_sym_create_index_token3,
  [5137] = 1,
    ACTIONS(834), 1,
      aux_sym_insert_statement_token2,
  [5141] = 1,
    ACTIONS(836), 1,
      anon_sym_LPAREN,
  [5145] = 1,
    ACTIONS(838), 1,
      anon_sym_DOT,
  [5149] = 1,
    ACTIONS(840), 1,
      aux_sym_if_exist_token2,
  [5153] = 1,
    ACTIONS(778), 1,
      anon_sym_DOLLAR_DOLLAR,
  [5157] = 1,
    ACTIONS(842), 1,
      sym_object_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 88,
  [SMALL_STATE(5)] = 120,
  [SMALL_STATE(6)] = 174,
  [SMALL_STATE(7)] = 206,
  [SMALL_STATE(8)] = 235,
  [SMALL_STATE(9)] = 262,
  [SMALL_STATE(10)] = 289,
  [SMALL_STATE(11)] = 316,
  [SMALL_STATE(12)] = 345,
  [SMALL_STATE(13)] = 369,
  [SMALL_STATE(14)] = 392,
  [SMALL_STATE(15)] = 415,
  [SMALL_STATE(16)] = 438,
  [SMALL_STATE(17)] = 489,
  [SMALL_STATE(18)] = 534,
  [SMALL_STATE(19)] = 576,
  [SMALL_STATE(20)] = 618,
  [SMALL_STATE(21)] = 660,
  [SMALL_STATE(22)] = 704,
  [SMALL_STATE(23)] = 745,
  [SMALL_STATE(24)] = 786,
  [SMALL_STATE(25)] = 827,
  [SMALL_STATE(26)] = 865,
  [SMALL_STATE(27)] = 903,
  [SMALL_STATE(28)] = 941,
  [SMALL_STATE(29)] = 979,
  [SMALL_STATE(30)] = 1017,
  [SMALL_STATE(31)] = 1055,
  [SMALL_STATE(32)] = 1093,
  [SMALL_STATE(33)] = 1131,
  [SMALL_STATE(34)] = 1169,
  [SMALL_STATE(35)] = 1207,
  [SMALL_STATE(36)] = 1245,
  [SMALL_STATE(37)] = 1283,
  [SMALL_STATE(38)] = 1321,
  [SMALL_STATE(39)] = 1357,
  [SMALL_STATE(40)] = 1393,
  [SMALL_STATE(41)] = 1431,
  [SMALL_STATE(42)] = 1460,
  [SMALL_STATE(43)] = 1489,
  [SMALL_STATE(44)] = 1510,
  [SMALL_STATE(45)] = 1539,
  [SMALL_STATE(46)] = 1560,
  [SMALL_STATE(47)] = 1579,
  [SMALL_STATE(48)] = 1599,
  [SMALL_STATE(49)] = 1615,
  [SMALL_STATE(50)] = 1631,
  [SMALL_STATE(51)] = 1647,
  [SMALL_STATE(52)] = 1663,
  [SMALL_STATE(53)] = 1679,
  [SMALL_STATE(54)] = 1695,
  [SMALL_STATE(55)] = 1711,
  [SMALL_STATE(56)] = 1727,
  [SMALL_STATE(57)] = 1743,
  [SMALL_STATE(58)] = 1759,
  [SMALL_STATE(59)] = 1775,
  [SMALL_STATE(60)] = 1795,
  [SMALL_STATE(61)] = 1815,
  [SMALL_STATE(62)] = 1835,
  [SMALL_STATE(63)] = 1855,
  [SMALL_STATE(64)] = 1878,
  [SMALL_STATE(65)] = 1895,
  [SMALL_STATE(66)] = 1918,
  [SMALL_STATE(67)] = 1941,
  [SMALL_STATE(68)] = 1964,
  [SMALL_STATE(69)] = 1987,
  [SMALL_STATE(70)] = 2010,
  [SMALL_STATE(71)] = 2029,
  [SMALL_STATE(72)] = 2052,
  [SMALL_STATE(73)] = 2069,
  [SMALL_STATE(74)] = 2092,
  [SMALL_STATE(75)] = 2107,
  [SMALL_STATE(76)] = 2124,
  [SMALL_STATE(77)] = 2138,
  [SMALL_STATE(78)] = 2158,
  [SMALL_STATE(79)] = 2176,
  [SMALL_STATE(80)] = 2196,
  [SMALL_STATE(81)] = 2216,
  [SMALL_STATE(82)] = 2234,
  [SMALL_STATE(83)] = 2252,
  [SMALL_STATE(84)] = 2272,
  [SMALL_STATE(85)] = 2290,
  [SMALL_STATE(86)] = 2304,
  [SMALL_STATE(87)] = 2322,
  [SMALL_STATE(88)] = 2340,
  [SMALL_STATE(89)] = 2360,
  [SMALL_STATE(90)] = 2378,
  [SMALL_STATE(91)] = 2396,
  [SMALL_STATE(92)] = 2413,
  [SMALL_STATE(93)] = 2438,
  [SMALL_STATE(94)] = 2451,
  [SMALL_STATE(95)] = 2468,
  [SMALL_STATE(96)] = 2485,
  [SMALL_STATE(97)] = 2510,
  [SMALL_STATE(98)] = 2535,
  [SMALL_STATE(99)] = 2560,
  [SMALL_STATE(100)] = 2577,
  [SMALL_STATE(101)] = 2594,
  [SMALL_STATE(102)] = 2611,
  [SMALL_STATE(103)] = 2628,
  [SMALL_STATE(104)] = 2645,
  [SMALL_STATE(105)] = 2658,
  [SMALL_STATE(106)] = 2683,
  [SMALL_STATE(107)] = 2700,
  [SMALL_STATE(108)] = 2713,
  [SMALL_STATE(109)] = 2730,
  [SMALL_STATE(110)] = 2747,
  [SMALL_STATE(111)] = 2760,
  [SMALL_STATE(112)] = 2777,
  [SMALL_STATE(113)] = 2791,
  [SMALL_STATE(114)] = 2813,
  [SMALL_STATE(115)] = 2825,
  [SMALL_STATE(116)] = 2837,
  [SMALL_STATE(117)] = 2859,
  [SMALL_STATE(118)] = 2873,
  [SMALL_STATE(119)] = 2885,
  [SMALL_STATE(120)] = 2900,
  [SMALL_STATE(121)] = 2911,
  [SMALL_STATE(122)] = 2922,
  [SMALL_STATE(123)] = 2933,
  [SMALL_STATE(124)] = 2944,
  [SMALL_STATE(125)] = 2955,
  [SMALL_STATE(126)] = 2966,
  [SMALL_STATE(127)] = 2977,
  [SMALL_STATE(128)] = 2988,
  [SMALL_STATE(129)] = 2999,
  [SMALL_STATE(130)] = 3010,
  [SMALL_STATE(131)] = 3021,
  [SMALL_STATE(132)] = 3034,
  [SMALL_STATE(133)] = 3045,
  [SMALL_STATE(134)] = 3070,
  [SMALL_STATE(135)] = 3081,
  [SMALL_STATE(136)] = 3092,
  [SMALL_STATE(137)] = 3103,
  [SMALL_STATE(138)] = 3114,
  [SMALL_STATE(139)] = 3125,
  [SMALL_STATE(140)] = 3136,
  [SMALL_STATE(141)] = 3147,
  [SMALL_STATE(142)] = 3162,
  [SMALL_STATE(143)] = 3173,
  [SMALL_STATE(144)] = 3184,
  [SMALL_STATE(145)] = 3195,
  [SMALL_STATE(146)] = 3206,
  [SMALL_STATE(147)] = 3217,
  [SMALL_STATE(148)] = 3228,
  [SMALL_STATE(149)] = 3239,
  [SMALL_STATE(150)] = 3250,
  [SMALL_STATE(151)] = 3261,
  [SMALL_STATE(152)] = 3272,
  [SMALL_STATE(153)] = 3292,
  [SMALL_STATE(154)] = 3314,
  [SMALL_STATE(155)] = 3334,
  [SMALL_STATE(156)] = 3344,
  [SMALL_STATE(157)] = 3363,
  [SMALL_STATE(158)] = 3382,
  [SMALL_STATE(159)] = 3399,
  [SMALL_STATE(160)] = 3416,
  [SMALL_STATE(161)] = 3427,
  [SMALL_STATE(162)] = 3446,
  [SMALL_STATE(163)] = 3457,
  [SMALL_STATE(164)] = 3467,
  [SMALL_STATE(165)] = 3483,
  [SMALL_STATE(166)] = 3499,
  [SMALL_STATE(167)] = 3515,
  [SMALL_STATE(168)] = 3531,
  [SMALL_STATE(169)] = 3547,
  [SMALL_STATE(170)] = 3563,
  [SMALL_STATE(171)] = 3579,
  [SMALL_STATE(172)] = 3589,
  [SMALL_STATE(173)] = 3605,
  [SMALL_STATE(174)] = 3619,
  [SMALL_STATE(175)] = 3629,
  [SMALL_STATE(176)] = 3645,
  [SMALL_STATE(177)] = 3657,
  [SMALL_STATE(178)] = 3667,
  [SMALL_STATE(179)] = 3683,
  [SMALL_STATE(180)] = 3690,
  [SMALL_STATE(181)] = 3701,
  [SMALL_STATE(182)] = 3714,
  [SMALL_STATE(183)] = 3727,
  [SMALL_STATE(184)] = 3736,
  [SMALL_STATE(185)] = 3747,
  [SMALL_STATE(186)] = 3760,
  [SMALL_STATE(187)] = 3773,
  [SMALL_STATE(188)] = 3786,
  [SMALL_STATE(189)] = 3799,
  [SMALL_STATE(190)] = 3812,
  [SMALL_STATE(191)] = 3825,
  [SMALL_STATE(192)] = 3838,
  [SMALL_STATE(193)] = 3851,
  [SMALL_STATE(194)] = 3864,
  [SMALL_STATE(195)] = 3877,
  [SMALL_STATE(196)] = 3890,
  [SMALL_STATE(197)] = 3903,
  [SMALL_STATE(198)] = 3913,
  [SMALL_STATE(199)] = 3923,
  [SMALL_STATE(200)] = 3933,
  [SMALL_STATE(201)] = 3943,
  [SMALL_STATE(202)] = 3953,
  [SMALL_STATE(203)] = 3963,
  [SMALL_STATE(204)] = 3973,
  [SMALL_STATE(205)] = 3981,
  [SMALL_STATE(206)] = 3991,
  [SMALL_STATE(207)] = 4001,
  [SMALL_STATE(208)] = 4011,
  [SMALL_STATE(209)] = 4021,
  [SMALL_STATE(210)] = 4031,
  [SMALL_STATE(211)] = 4041,
  [SMALL_STATE(212)] = 4051,
  [SMALL_STATE(213)] = 4061,
  [SMALL_STATE(214)] = 4067,
  [SMALL_STATE(215)] = 4077,
  [SMALL_STATE(216)] = 4087,
  [SMALL_STATE(217)] = 4097,
  [SMALL_STATE(218)] = 4107,
  [SMALL_STATE(219)] = 4117,
  [SMALL_STATE(220)] = 4127,
  [SMALL_STATE(221)] = 4137,
  [SMALL_STATE(222)] = 4147,
  [SMALL_STATE(223)] = 4157,
  [SMALL_STATE(224)] = 4167,
  [SMALL_STATE(225)] = 4177,
  [SMALL_STATE(226)] = 4187,
  [SMALL_STATE(227)] = 4197,
  [SMALL_STATE(228)] = 4207,
  [SMALL_STATE(229)] = 4217,
  [SMALL_STATE(230)] = 4227,
  [SMALL_STATE(231)] = 4237,
  [SMALL_STATE(232)] = 4247,
  [SMALL_STATE(233)] = 4257,
  [SMALL_STATE(234)] = 4267,
  [SMALL_STATE(235)] = 4277,
  [SMALL_STATE(236)] = 4287,
  [SMALL_STATE(237)] = 4297,
  [SMALL_STATE(238)] = 4307,
  [SMALL_STATE(239)] = 4317,
  [SMALL_STATE(240)] = 4325,
  [SMALL_STATE(241)] = 4333,
  [SMALL_STATE(242)] = 4343,
  [SMALL_STATE(243)] = 4351,
  [SMALL_STATE(244)] = 4361,
  [SMALL_STATE(245)] = 4371,
  [SMALL_STATE(246)] = 4381,
  [SMALL_STATE(247)] = 4391,
  [SMALL_STATE(248)] = 4401,
  [SMALL_STATE(249)] = 4411,
  [SMALL_STATE(250)] = 4421,
  [SMALL_STATE(251)] = 4431,
  [SMALL_STATE(252)] = 4436,
  [SMALL_STATE(253)] = 4441,
  [SMALL_STATE(254)] = 4446,
  [SMALL_STATE(255)] = 4453,
  [SMALL_STATE(256)] = 4460,
  [SMALL_STATE(257)] = 4465,
  [SMALL_STATE(258)] = 4472,
  [SMALL_STATE(259)] = 4479,
  [SMALL_STATE(260)] = 4486,
  [SMALL_STATE(261)] = 4493,
  [SMALL_STATE(262)] = 4500,
  [SMALL_STATE(263)] = 4507,
  [SMALL_STATE(264)] = 4512,
  [SMALL_STATE(265)] = 4519,
  [SMALL_STATE(266)] = 4526,
  [SMALL_STATE(267)] = 4533,
  [SMALL_STATE(268)] = 4540,
  [SMALL_STATE(269)] = 4547,
  [SMALL_STATE(270)] = 4552,
  [SMALL_STATE(271)] = 4557,
  [SMALL_STATE(272)] = 4562,
  [SMALL_STATE(273)] = 4569,
  [SMALL_STATE(274)] = 4574,
  [SMALL_STATE(275)] = 4579,
  [SMALL_STATE(276)] = 4586,
  [SMALL_STATE(277)] = 4593,
  [SMALL_STATE(278)] = 4598,
  [SMALL_STATE(279)] = 4603,
  [SMALL_STATE(280)] = 4608,
  [SMALL_STATE(281)] = 4613,
  [SMALL_STATE(282)] = 4618,
  [SMALL_STATE(283)] = 4623,
  [SMALL_STATE(284)] = 4628,
  [SMALL_STATE(285)] = 4635,
  [SMALL_STATE(286)] = 4642,
  [SMALL_STATE(287)] = 4649,
  [SMALL_STATE(288)] = 4654,
  [SMALL_STATE(289)] = 4661,
  [SMALL_STATE(290)] = 4666,
  [SMALL_STATE(291)] = 4673,
  [SMALL_STATE(292)] = 4678,
  [SMALL_STATE(293)] = 4685,
  [SMALL_STATE(294)] = 4692,
  [SMALL_STATE(295)] = 4699,
  [SMALL_STATE(296)] = 4706,
  [SMALL_STATE(297)] = 4713,
  [SMALL_STATE(298)] = 4718,
  [SMALL_STATE(299)] = 4725,
  [SMALL_STATE(300)] = 4732,
  [SMALL_STATE(301)] = 4739,
  [SMALL_STATE(302)] = 4746,
  [SMALL_STATE(303)] = 4753,
  [SMALL_STATE(304)] = 4758,
  [SMALL_STATE(305)] = 4763,
  [SMALL_STATE(306)] = 4768,
  [SMALL_STATE(307)] = 4773,
  [SMALL_STATE(308)] = 4778,
  [SMALL_STATE(309)] = 4783,
  [SMALL_STATE(310)] = 4790,
  [SMALL_STATE(311)] = 4797,
  [SMALL_STATE(312)] = 4801,
  [SMALL_STATE(313)] = 4805,
  [SMALL_STATE(314)] = 4809,
  [SMALL_STATE(315)] = 4813,
  [SMALL_STATE(316)] = 4817,
  [SMALL_STATE(317)] = 4821,
  [SMALL_STATE(318)] = 4825,
  [SMALL_STATE(319)] = 4829,
  [SMALL_STATE(320)] = 4833,
  [SMALL_STATE(321)] = 4837,
  [SMALL_STATE(322)] = 4841,
  [SMALL_STATE(323)] = 4845,
  [SMALL_STATE(324)] = 4849,
  [SMALL_STATE(325)] = 4853,
  [SMALL_STATE(326)] = 4857,
  [SMALL_STATE(327)] = 4861,
  [SMALL_STATE(328)] = 4865,
  [SMALL_STATE(329)] = 4869,
  [SMALL_STATE(330)] = 4873,
  [SMALL_STATE(331)] = 4877,
  [SMALL_STATE(332)] = 4881,
  [SMALL_STATE(333)] = 4885,
  [SMALL_STATE(334)] = 4889,
  [SMALL_STATE(335)] = 4893,
  [SMALL_STATE(336)] = 4897,
  [SMALL_STATE(337)] = 4901,
  [SMALL_STATE(338)] = 4905,
  [SMALL_STATE(339)] = 4909,
  [SMALL_STATE(340)] = 4913,
  [SMALL_STATE(341)] = 4917,
  [SMALL_STATE(342)] = 4921,
  [SMALL_STATE(343)] = 4925,
  [SMALL_STATE(344)] = 4929,
  [SMALL_STATE(345)] = 4933,
  [SMALL_STATE(346)] = 4937,
  [SMALL_STATE(347)] = 4941,
  [SMALL_STATE(348)] = 4945,
  [SMALL_STATE(349)] = 4949,
  [SMALL_STATE(350)] = 4953,
  [SMALL_STATE(351)] = 4957,
  [SMALL_STATE(352)] = 4961,
  [SMALL_STATE(353)] = 4965,
  [SMALL_STATE(354)] = 4969,
  [SMALL_STATE(355)] = 4973,
  [SMALL_STATE(356)] = 4977,
  [SMALL_STATE(357)] = 4981,
  [SMALL_STATE(358)] = 4985,
  [SMALL_STATE(359)] = 4989,
  [SMALL_STATE(360)] = 4993,
  [SMALL_STATE(361)] = 4997,
  [SMALL_STATE(362)] = 5001,
  [SMALL_STATE(363)] = 5005,
  [SMALL_STATE(364)] = 5009,
  [SMALL_STATE(365)] = 5013,
  [SMALL_STATE(366)] = 5017,
  [SMALL_STATE(367)] = 5021,
  [SMALL_STATE(368)] = 5025,
  [SMALL_STATE(369)] = 5029,
  [SMALL_STATE(370)] = 5033,
  [SMALL_STATE(371)] = 5037,
  [SMALL_STATE(372)] = 5041,
  [SMALL_STATE(373)] = 5045,
  [SMALL_STATE(374)] = 5049,
  [SMALL_STATE(375)] = 5053,
  [SMALL_STATE(376)] = 5057,
  [SMALL_STATE(377)] = 5061,
  [SMALL_STATE(378)] = 5065,
  [SMALL_STATE(379)] = 5069,
  [SMALL_STATE(380)] = 5073,
  [SMALL_STATE(381)] = 5077,
  [SMALL_STATE(382)] = 5081,
  [SMALL_STATE(383)] = 5085,
  [SMALL_STATE(384)] = 5089,
  [SMALL_STATE(385)] = 5093,
  [SMALL_STATE(386)] = 5097,
  [SMALL_STATE(387)] = 5101,
  [SMALL_STATE(388)] = 5105,
  [SMALL_STATE(389)] = 5109,
  [SMALL_STATE(390)] = 5113,
  [SMALL_STATE(391)] = 5117,
  [SMALL_STATE(392)] = 5121,
  [SMALL_STATE(393)] = 5125,
  [SMALL_STATE(394)] = 5129,
  [SMALL_STATE(395)] = 5133,
  [SMALL_STATE(396)] = 5137,
  [SMALL_STATE(397)] = 5141,
  [SMALL_STATE(398)] = 5145,
  [SMALL_STATE(399)] = 5149,
  [SMALL_STATE(400)] = 5153,
  [SMALL_STATE(401)] = 5157,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__decimal_literal, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__decimal_literal, 2), SHIFT_REPEAT(2),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_literal, 2),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_literal, 4),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 3),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 3),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 6),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 6),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 3),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 3),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_literal, 3),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 3, .production_id = 9),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hexadecimal_literal, 3),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__uuid, 11),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(153),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(178),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(242),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(396),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(170),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(392),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 5),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hexadecimal_literal, 2),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hexadecimal_literal_repeat2, 2),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hexadecimal_literal_repeat2, 2), SHIFT_REPEAT(45),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec_element, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relalationContains, 3, .production_id = 11),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relalationContainsKey, 4),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec_element, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 7),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 8),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 9),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 1),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hexadecimal_literal_repeat2, 2), SHIFT_REPEAT(59),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2), SHIFT_REPEAT(158),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 6),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 1, .production_id = 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyspace, 1, .production_id = 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 6),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 7),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 5),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 4),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3, .production_id = 5),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyspace, 3, .production_id = 4),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 8),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_spec, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec_element, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2), SHIFT_REPEAT(159),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 8),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ttl, 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 9),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 6),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 5),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 7),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 4),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 1),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 2),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 9),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 2),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec, 3),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec_element, 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2), SHIFT_REPEAT(293),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 4),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition, 3),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_not_exist, 3, .production_id = 10),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hexadecimal_literal_repeat2, 2), SHIFT_REPEAT(119),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_spec, 2, .production_id = 7),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 5),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 8),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 4),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 9),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 4),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 2),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 10),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_exist, 2),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 3),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 10),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 10),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 11),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 7),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 7),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 11),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 1),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [440] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_tuple_repeat1, 2), SHIFT_REPEAT(25),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_tuple_repeat1, 2),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 2),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_not_exist, 3, .production_id = 10),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 3),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 1),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 1),
  [487] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(5),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [496] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hexadecimal_literal_repeat1, 2), SHIFT_REPEAT(379),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hexadecimal_literal_repeat1, 2),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [505] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2), SHIFT_REPEAT(19),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 1),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_timestamp_spec, 2),
  [522] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2), SHIFT_REPEAT(225),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [529] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2), SHIFT_REPEAT(290),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [540] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2), SHIFT_REPEAT(30),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2),
  [545] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2), SHIFT_REPEAT(264),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 2),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 2),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 2),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [568] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2), SHIFT_REPEAT(227),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 1),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [585] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2), SHIFT_REPEAT(316),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 1),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 2),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 4),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 4),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 4),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 6),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 3, .production_id = 12),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 5),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 2),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 5),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 1, .production_id = 8),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 4),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_column_spec, 3),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 4),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 4),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 3),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 3),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 3),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_keys_spec, 4),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_entries_s_spec, 4),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_full_spec, 4),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_name, 1),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column_spec, 1),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [824] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
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
