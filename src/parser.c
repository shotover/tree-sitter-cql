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
#define STATE_COUNT 419
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 141
#define ALIAS_COUNT 2
#define TOKEN_COUNT 71
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
  sym_source_file = 71,
  sym__statement = 72,
  sym_select_statement = 73,
  sym_select_elements = 74,
  sym_select_element = 75,
  sym_function_call = 76,
  sym_function_args = 77,
  sym_constant = 78,
  sym__uuid = 79,
  sym__string_literal = 80,
  aux_sym__decimal_literal = 81,
  sym__float_literal = 82,
  sym__hexadecimal_literal = 83,
  sym_from_spec = 84,
  sym_from_spec_element = 85,
  sym_where_spec = 86,
  sym_relation_elements = 87,
  sym_relation_element = 88,
  sym_assignment_tuple = 89,
  sym_relalationContainsKey = 90,
  sym_relalationContains = 91,
  sym_order_spec = 92,
  sym_order_spec_element = 93,
  sym_delete_statement = 94,
  sym_begin_batch = 95,
  sym_delete_column_list = 96,
  sym_delete_column_item = 97,
  sym_using_timestamp_spec = 98,
  sym_timestamp = 99,
  sym_if_exist = 100,
  sym_if_spec = 101,
  sym_if_condition_list = 102,
  sym_if_condition = 103,
  sym_insert_statement = 104,
  sym_keyspace = 105,
  sym_table = 106,
  sym_insert_column_spec = 107,
  sym_column_list = 108,
  sym_column = 109,
  sym_insert_values_spec = 110,
  sym_expression_list = 111,
  sym_expression = 112,
  sym_assignment_map = 113,
  sym_assignment_set = 114,
  sym_assignment_list = 115,
  sym_if_not_exist = 116,
  sym_using_ttl_timestamp = 117,
  sym_ttl = 118,
  sym_truncate = 119,
  sym_create_index = 120,
  sym_index_name = 121,
  sym_index_column_spec = 122,
  sym_index_keys_spec = 123,
  sym_index_entries_s_spec = 124,
  sym_index_full_spec = 125,
  sym_drop_index = 126,
  aux_sym_source_file_repeat1 = 127,
  aux_sym_select_elements_repeat1 = 128,
  aux_sym_function_args_repeat1 = 129,
  aux_sym__hexadecimal_literal_repeat1 = 130,
  aux_sym__hexadecimal_literal_repeat2 = 131,
  aux_sym_relation_elements_repeat1 = 132,
  aux_sym_relation_element_repeat1 = 133,
  aux_sym_relation_element_repeat2 = 134,
  aux_sym_assignment_tuple_repeat1 = 135,
  aux_sym_delete_column_list_repeat1 = 136,
  aux_sym_if_condition_list_repeat1 = 137,
  aux_sym_column_list_repeat1 = 138,
  aux_sym_expression_list_repeat1 = 139,
  aux_sym_assignment_map_repeat1 = 140,
  anon_alias_sym_CONTAINS = 141,
  anon_alias_sym_IF = 142,
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
  [aux_sym_drop_index_token1] = aux_sym_drop_index_token1,
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
  [aux_sym_drop_index_token1] = {
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
  [23] = 20,
  [24] = 24,
  [25] = 25,
  [26] = 25,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 32,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 40,
  [43] = 43,
  [44] = 33,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 27,
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
  [60] = 39,
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
  [79] = 54,
  [80] = 59,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 51,
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
  [155] = 142,
  [156] = 39,
  [157] = 157,
  [158] = 158,
  [159] = 27,
  [160] = 160,
  [161] = 161,
  [162] = 161,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 164,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 171,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 174,
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
  [193] = 117,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 135,
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
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 277,
  [307] = 307,
  [308] = 308,
  [309] = 277,
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
  [404] = 332,
  [405] = 405,
  [406] = 402,
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
  [418] = 408,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(169);
      if (lookahead == '"') ADVANCE(290);
      if (lookahead == '$') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(199);
      if (lookahead == '(') ADVANCE(182);
      if (lookahead == ')') ADVANCE(183);
      if (lookahead == '*') ADVANCE(178);
      if (lookahead == ',') ADVANCE(179);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '.') ADVANCE(180);
      if (lookahead == '0') ADVANCE(190);
      if (lookahead == ':') ADVANCE(293);
      if (lookahead == ';') ADVANCE(170);
      if (lookahead == '<') ADVANCE(264);
      if (lookahead == '=') ADVANCE(263);
      if (lookahead == '>') ADVANCE(265);
      if (lookahead == 'X') ADVANCE(6);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == ']') ADVANCE(283);
      if (lookahead == '{') ADVANCE(292);
      if (lookahead == '}') ADVANCE(294);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(194);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(192);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(198);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(193);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(196);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(197);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(56);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(133);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(30);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(70);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(112);
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
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(189);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(290);
      if (lookahead == '$') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(200);
      if (lookahead == '(') ADVANCE(182);
      if (lookahead == '*') ADVANCE(178);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(236);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(241);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(223);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(221);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(235);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 2:
      if (lookahead == '$') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(200);
      if (lookahead == ')') ADVANCE(183);
      if (lookahead == '*') ADVANCE(178);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '0') ADVANCE(207);
      if (lookahead == 'X') ADVANCE(214);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(215);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(253);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(242);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(258);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 3:
      if (lookahead == '$') ADVANCE(203);
      END_STATE();
    case 4:
      if (lookahead == '$') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(204);
      if (lookahead != 0) ADVANCE(205);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(199);
      if (lookahead == '(') ADVANCE(182);
      if (lookahead == ')') ADVANCE(183);
      if (lookahead == ',') ADVANCE(179);
      if (lookahead == ':') ADVANCE(293);
      if (lookahead == ']') ADVANCE(283);
      if (lookahead == '}') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(189);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(209);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(213);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(163);
      if (lookahead == '*') ADVANCE(178);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(227);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(247);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(163);
      if (lookahead == '*') ADVANCE(178);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(247);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(182);
      if (lookahead == '.') ADVANCE(180);
      if (lookahead == '<') ADVANCE(264);
      if (lookahead == '=') ADVANCE(263);
      if (lookahead == '>') ADVANCE(265);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(114);
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
          lookahead == 'r') ADVANCE(152);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(81);
      END_STATE();
    case 12:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      END_STATE();
    case 13:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(147);
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
          lookahead == 'a') ADVANCE(145);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(274);
      END_STATE();
    case 17:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 18:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 19:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(90);
      END_STATE();
    case 20:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(275);
      END_STATE();
    case 21:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(276);
      END_STATE();
    case 22:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 23:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(142);
      END_STATE();
    case 24:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(18);
      END_STATE();
    case 25:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(262);
      END_STATE();
    case 26:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(279);
      END_STATE();
    case 27:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(280);
      END_STATE();
    case 28:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(31);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(47);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(111);
      END_STATE();
    case 29:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(50);
      END_STATE();
    case 30:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 31:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 32:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 33:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(298);
      END_STATE();
    case 34:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 35:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(299);
      END_STATE();
    case 36:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 37:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(297);
      END_STATE();
    case 38:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      END_STATE();
    case 39:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 40:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(211);
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
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 43:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 44:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 45:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(86);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      END_STATE();
    case 46:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 47:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 48:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 49:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 50:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 51:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 52:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 53:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 54:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 55:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 56:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(286);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(269);
      END_STATE();
    case 57:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(286);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 58:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(286);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 59:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(284);
      END_STATE();
    case 60:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(177);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(160);
      END_STATE();
    case 66:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(63);
      END_STATE();
    case 67:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(281);
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
          lookahead == 'i') ADVANCE(134);
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
          lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 75:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(92);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(113);
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
          lookahead == 's') ADVANCE(181);
      END_STATE();
    case 80:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(84);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      END_STATE();
    case 81:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(296);
      END_STATE();
    case 82:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(184);
      END_STATE();
    case 83:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(154);
      END_STATE();
    case 84:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(110);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(160);
      END_STATE();
    case 87:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 88:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(115);
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
          lookahead == 'l') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(160);
      END_STATE();
    case 92:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(150);
      END_STATE();
    case 93:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(260);
      END_STATE();
    case 94:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(117);
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
          lookahead == 'n') ADVANCE(301);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 98:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(173);
      END_STATE();
    case 99:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(278);
      END_STATE();
    case 100:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(268);
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
          lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 105:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 106:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 107:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(88);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(72);
      END_STATE();
    case 108:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 109:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 110:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 111:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(289);
      END_STATE();
    case 112:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(139);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(87);
      END_STATE();
    case 113:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 114:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 115:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 116:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(304);
      END_STATE();
    case 117:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(285);
      END_STATE();
    case 118:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 119:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(273);
      END_STATE();
    case 120:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 121:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 122:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      END_STATE();
    case 123:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 124:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 125:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 126:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 127:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 128:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(287);
      END_STATE();
    case 129:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(291);
      END_STATE();
    case 130:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(303);
      END_STATE();
    case 131:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(270);
      END_STATE();
    case 132:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(72);
      END_STATE();
    case 133:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(109);
      END_STATE();
    case 134:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(143);
      END_STATE();
    case 135:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(47);
      END_STATE();
    case 136:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(144);
      END_STATE();
    case 137:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(39);
      END_STATE();
    case 138:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(123);
      END_STATE();
    case 139:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(295);
      END_STATE();
    case 140:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(175);
      END_STATE();
    case 141:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(288);
      END_STATE();
    case 142:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(171);
      END_STATE();
    case 143:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(128);
      END_STATE();
    case 144:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(14);
      END_STATE();
    case 145:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(22);
      END_STATE();
    case 146:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(17);
      END_STATE();
    case 147:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(35);
      END_STATE();
    case 148:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(36);
      END_STATE();
    case 149:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(37);
      END_STATE();
    case 150:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(52);
      END_STATE();
    case 151:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 152:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(101);
      END_STATE();
    case 153:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(87);
      END_STATE();
    case 154:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 155:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(176);
      END_STATE();
    case 156:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(71);
      END_STATE();
    case 157:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(300);
      END_STATE();
    case 158:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(272);
      END_STATE();
    case 159:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(271);
      END_STATE();
    case 160:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(187);
      END_STATE();
    case 161:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(160);
      END_STATE();
    case 162:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      END_STATE();
    case 163:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 164:
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(205);
      END_STATE();
    case 165:
      if (eof) ADVANCE(169);
      if (lookahead == '$') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(199);
      if (lookahead == '(') ADVANCE(182);
      if (lookahead == ')') ADVANCE(183);
      if (lookahead == ',') ADVANCE(179);
      if (lookahead == '.') ADVANCE(180);
      if (lookahead == ':') ADVANCE(293);
      if (lookahead == ';') ADVANCE(170);
      if (lookahead == '<') ADVANCE(264);
      if (lookahead == '=') ADVANCE(263);
      if (lookahead == '>') ADVANCE(265);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == ']') ADVANCE(283);
      if (lookahead == '}') ADVANCE(294);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(79);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(16);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(121);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(42);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(156);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(75);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(57);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(133);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(70);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(97);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(54);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(118);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(107);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(15);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(165)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 166:
      if (eof) ADVANCE(169);
      if (lookahead == '$') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(199);
      if (lookahead == '(') ADVANCE(182);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '0') ADVANCE(207);
      if (lookahead == ';') ADVANCE(170);
      if (lookahead == 'X') ADVANCE(6);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == '{') ADVANCE(292);
      if (lookahead == '}') ADVANCE(294);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(80);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(38);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(122);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(45);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(162);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(12);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(104);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(43);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(69);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(153);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(54);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(166)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(208);
      END_STATE();
    case 167:
      if (eof) ADVANCE(169);
      if (lookahead == ';') ADVANCE(170);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(194);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(191);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(198);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(193);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(104);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(69);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(120);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(54);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(167)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'F' ||
          lookahead == 'e' ||
          lookahead == 'f') ADVANCE(189);
      END_STATE();
    case 168:
      if (eof) ADVANCE(169);
      if (lookahead == ';') ADVANCE(170);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(195);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(191);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(198);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(193);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(58);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(54);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(118);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(168)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'E' ||
          lookahead == 'F' ||
          lookahead == 'e' ||
          lookahead == 'f') ADVANCE(189);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_select_statement_token1);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_select_statement_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_select_statement_token3);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_select_statement_token3);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_select_statement_token4);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_select_statement_token5);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_select_statement_token6);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_select_element_token1);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__hex_4digit);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__hex_4digit);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__hex_digit);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'X') ADVANCE(210);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(274);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(85);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(84);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(138);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(71);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(202);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym__string_literal_token2);
      if (lookahead == '$') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(204);
      if (lookahead != 0) ADVANCE(205);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym__string_literal_token2);
      if (lookahead == '$') ADVANCE(164);
      if (lookahead != 0) ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__dec_digit);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__dec_digit);
      if (lookahead == 'X') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__dec_digit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_X_SQUOTE);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_0X);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__boolean_literal);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__boolean_literal);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_object_name);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == '\'') ADVANCE(209);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(257);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(217);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(233);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(249);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(259);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(212);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(255);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(244);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(259);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(246);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(238);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(222);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(248);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(259);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(256);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(185);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(230);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(228);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(219);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(259);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(259);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(250);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(224);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(174);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(218);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(234);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(237);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(239);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(232);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(254);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(226);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(259);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(220);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(251);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(240);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(252);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(172);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(243);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(244);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(225);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(231);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(220);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(244);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(188);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(256);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(257);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_from_spec_token1);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_where_spec_token1);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_relation_elements_token1);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(266);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(267);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_relation_element_token1);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_relation_element_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(31);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(47);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(111);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_relalationContainsKey_token1);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_relalationContainsKey_token2);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_relalationContainsKey_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(302);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_order_spec_token1);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_order_spec_token2);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_order_spec_element_token1);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_order_spec_element_token2);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_delete_statement_token1);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_begin_batch_token1);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_begin_batch_token2);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_begin_batch_token3);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_begin_batch_token4);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_using_timestamp_spec_token1);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_timestamp_token1);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_if_exist_token1);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_if_exist_token2);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_insert_statement_token1);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_insert_statement_token2);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__dquote);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_insert_values_spec_token1);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_if_not_exist_token1);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_ttl_token1);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_truncate_token1);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_truncate_token2);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_create_index_token1);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_create_index_token2);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_create_index_token3);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_index_keys_spec_token1);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_index_entries_s_spec_token1);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_drop_index_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 165},
  [2] = {.lex_state = 165},
  [3] = {.lex_state = 166},
  [4] = {.lex_state = 165},
  [5] = {.lex_state = 165},
  [6] = {.lex_state = 165},
  [7] = {.lex_state = 165},
  [8] = {.lex_state = 166},
  [9] = {.lex_state = 165},
  [10] = {.lex_state = 165},
  [11] = {.lex_state = 165},
  [12] = {.lex_state = 165},
  [13] = {.lex_state = 165},
  [14] = {.lex_state = 165},
  [15] = {.lex_state = 165},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 165},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 166},
  [22] = {.lex_state = 165},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 166},
  [25] = {.lex_state = 166},
  [26] = {.lex_state = 166},
  [27] = {.lex_state = 167},
  [28] = {.lex_state = 166},
  [29] = {.lex_state = 166},
  [30] = {.lex_state = 166},
  [31] = {.lex_state = 166},
  [32] = {.lex_state = 166},
  [33] = {.lex_state = 166},
  [34] = {.lex_state = 166},
  [35] = {.lex_state = 166},
  [36] = {.lex_state = 166},
  [37] = {.lex_state = 165},
  [38] = {.lex_state = 165},
  [39] = {.lex_state = 167},
  [40] = {.lex_state = 166},
  [41] = {.lex_state = 165},
  [42] = {.lex_state = 166},
  [43] = {.lex_state = 166},
  [44] = {.lex_state = 166},
  [45] = {.lex_state = 165},
  [46] = {.lex_state = 166},
  [47] = {.lex_state = 165},
  [48] = {.lex_state = 168},
  [49] = {.lex_state = 165},
  [50] = {.lex_state = 165},
  [51] = {.lex_state = 165},
  [52] = {.lex_state = 165},
  [53] = {.lex_state = 165},
  [54] = {.lex_state = 165},
  [55] = {.lex_state = 165},
  [56] = {.lex_state = 165},
  [57] = {.lex_state = 165},
  [58] = {.lex_state = 165},
  [59] = {.lex_state = 165},
  [60] = {.lex_state = 168},
  [61] = {.lex_state = 165},
  [62] = {.lex_state = 165},
  [63] = {.lex_state = 165},
  [64] = {.lex_state = 165},
  [65] = {.lex_state = 165},
  [66] = {.lex_state = 165},
  [67] = {.lex_state = 165},
  [68] = {.lex_state = 165},
  [69] = {.lex_state = 165},
  [70] = {.lex_state = 166},
  [71] = {.lex_state = 165},
  [72] = {.lex_state = 165},
  [73] = {.lex_state = 165},
  [74] = {.lex_state = 165},
  [75] = {.lex_state = 165},
  [76] = {.lex_state = 165},
  [77] = {.lex_state = 165},
  [78] = {.lex_state = 165},
  [79] = {.lex_state = 165},
  [80] = {.lex_state = 165},
  [81] = {.lex_state = 165},
  [82] = {.lex_state = 165},
  [83] = {.lex_state = 165},
  [84] = {.lex_state = 165},
  [85] = {.lex_state = 165},
  [86] = {.lex_state = 165},
  [87] = {.lex_state = 165},
  [88] = {.lex_state = 165},
  [89] = {.lex_state = 165},
  [90] = {.lex_state = 165},
  [91] = {.lex_state = 165},
  [92] = {.lex_state = 165},
  [93] = {.lex_state = 165},
  [94] = {.lex_state = 165},
  [95] = {.lex_state = 165},
  [96] = {.lex_state = 165},
  [97] = {.lex_state = 165},
  [98] = {.lex_state = 165},
  [99] = {.lex_state = 165},
  [100] = {.lex_state = 165},
  [101] = {.lex_state = 165},
  [102] = {.lex_state = 165},
  [103] = {.lex_state = 165},
  [104] = {.lex_state = 165},
  [105] = {.lex_state = 165},
  [106] = {.lex_state = 165},
  [107] = {.lex_state = 165},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 165},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 165},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 165},
  [115] = {.lex_state = 165},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 165},
  [118] = {.lex_state = 165},
  [119] = {.lex_state = 165},
  [120] = {.lex_state = 165},
  [121] = {.lex_state = 165},
  [122] = {.lex_state = 165},
  [123] = {.lex_state = 165},
  [124] = {.lex_state = 165},
  [125] = {.lex_state = 165},
  [126] = {.lex_state = 165},
  [127] = {.lex_state = 165},
  [128] = {.lex_state = 165},
  [129] = {.lex_state = 165},
  [130] = {.lex_state = 165},
  [131] = {.lex_state = 165},
  [132] = {.lex_state = 165},
  [133] = {.lex_state = 165},
  [134] = {.lex_state = 165},
  [135] = {.lex_state = 165},
  [136] = {.lex_state = 165},
  [137] = {.lex_state = 165},
  [138] = {.lex_state = 165},
  [139] = {.lex_state = 165},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 165},
  [142] = {.lex_state = 10},
  [143] = {.lex_state = 165},
  [144] = {.lex_state = 165},
  [145] = {.lex_state = 165},
  [146] = {.lex_state = 165},
  [147] = {.lex_state = 165},
  [148] = {.lex_state = 165},
  [149] = {.lex_state = 165},
  [150] = {.lex_state = 165},
  [151] = {.lex_state = 165},
  [152] = {.lex_state = 165},
  [153] = {.lex_state = 165},
  [154] = {.lex_state = 165},
  [155] = {.lex_state = 10},
  [156] = {.lex_state = 5},
  [157] = {.lex_state = 165},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 5},
  [160] = {.lex_state = 8},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 9},
  [166] = {.lex_state = 10},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 1},
  [169] = {.lex_state = 10},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 1},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 1},
  [177] = {.lex_state = 165},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 1},
  [181] = {.lex_state = 1},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 1},
  [184] = {.lex_state = 1},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 1},
  [188] = {.lex_state = 165},
  [189] = {.lex_state = 165},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 1},
  [193] = {.lex_state = 1},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 1},
  [198] = {.lex_state = 1},
  [199] = {.lex_state = 1},
  [200] = {.lex_state = 1},
  [201] = {.lex_state = 1},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 1},
  [204] = {.lex_state = 1},
  [205] = {.lex_state = 165},
  [206] = {.lex_state = 1},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 165},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 1},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 1},
  [218] = {.lex_state = 165},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 1},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 5},
  [224] = {.lex_state = 1},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 165},
  [229] = {.lex_state = 165},
  [230] = {.lex_state = 165},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 165},
  [236] = {.lex_state = 1},
  [237] = {.lex_state = 165},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 1},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 165},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 5},
  [247] = {.lex_state = 1},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 165},
  [252] = {.lex_state = 1},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 165},
  [255] = {.lex_state = 1},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 165},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 165},
  [263] = {.lex_state = 165},
  [264] = {.lex_state = 165},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 165},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 165},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 165},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 165},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 5},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 165},
  [280] = {.lex_state = 5},
  [281] = {.lex_state = 1},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 165},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 165},
  [289] = {.lex_state = 165},
  [290] = {.lex_state = 165},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 165},
  [293] = {.lex_state = 165},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 165},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 1},
  [304] = {.lex_state = 1},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 5},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 5},
  [309] = {.lex_state = 5},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 165},
  [312] = {.lex_state = 165},
  [313] = {.lex_state = 165},
  [314] = {.lex_state = 165},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 165},
  [317] = {.lex_state = 165},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 165},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 1},
  [322] = {.lex_state = 4},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 201},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 165},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 1},
  [341] = {.lex_state = 1},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 165},
  [344] = {.lex_state = 1},
  [345] = {.lex_state = 165},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 166},
  [348] = {.lex_state = 165},
  [349] = {.lex_state = 1},
  [350] = {.lex_state = 166},
  [351] = {.lex_state = 5},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 166},
  [359] = {.lex_state = 165},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 1},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 165},
  [368] = {.lex_state = 165},
  [369] = {.lex_state = 165},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 165},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 166},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 1},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 1},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 1},
  [389] = {.lex_state = 166},
  [390] = {.lex_state = 1},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 166},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 165},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 1},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 1},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 165},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 165},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 1},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 165},
  [412] = {.lex_state = 165},
  [413] = {.lex_state = 165},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 165},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 1},
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
  },
  [1] = {
    [sym_source_file] = STATE(410),
    [sym__statement] = STATE(19),
    [sym_select_statement] = STATE(153),
    [sym_delete_statement] = STATE(153),
    [sym_begin_batch] = STATE(316),
    [sym_insert_statement] = STATE(153),
    [sym_truncate] = STATE(153),
    [sym_create_index] = STATE(153),
    [sym_drop_index] = STATE(153),
    [aux_sym_source_file_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_select_statement_token1] = ACTIONS(5),
    [aux_sym_delete_statement_token1] = ACTIONS(7),
    [aux_sym_begin_batch_token1] = ACTIONS(9),
    [aux_sym_insert_statement_token1] = ACTIONS(11),
    [aux_sym_truncate_token1] = ACTIONS(13),
    [aux_sym_create_index_token1] = ACTIONS(15),
    [aux_sym_drop_index_token1] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(21), 1,
      sym__dec_digit,
    STATE(2), 1,
      aux_sym__decimal_literal,
    ACTIONS(19), 23,
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
  [32] = 16,
    ACTIONS(24), 1,
      anon_sym_LPAREN,
    ACTIONS(28), 1,
      anon_sym_DASH,
    ACTIONS(30), 1,
      sym__hex_4digit,
    ACTIONS(32), 1,
      anon_sym_SQUOTE,
    ACTIONS(34), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(36), 1,
      sym__dec_digit,
    ACTIONS(38), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(40), 1,
      anon_sym_0X,
    ACTIONS(42), 1,
      anon_sym_LBRACK,
    ACTIONS(44), 1,
      anon_sym_LBRACE,
    STATE(4), 1,
      aux_sym__decimal_literal,
    STATE(253), 1,
      sym_expression,
    STATE(387), 1,
      sym_expression_list,
    ACTIONS(26), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(13), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
    STATE(269), 5,
      sym_constant,
      sym_assignment_tuple,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [89] = 4,
    ACTIONS(48), 1,
      anon_sym_DOT,
    ACTIONS(50), 1,
      sym__dec_digit,
    STATE(2), 1,
      aux_sym__decimal_literal,
    ACTIONS(46), 21,
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
      aux_sym_drop_index_token1,
  [122] = 4,
    ACTIONS(50), 1,
      sym__dec_digit,
    ACTIONS(54), 1,
      anon_sym_DOT,
    STATE(2), 1,
      aux_sym__decimal_literal,
    ACTIONS(52), 21,
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
      aux_sym_drop_index_token1,
  [155] = 3,
    ACTIONS(50), 1,
      sym__dec_digit,
    STATE(2), 1,
      aux_sym__decimal_literal,
    ACTIONS(56), 21,
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
      aux_sym_drop_index_token1,
  [185] = 2,
    ACTIONS(60), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(58), 21,
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
  [213] = 15,
    ACTIONS(24), 1,
      anon_sym_LPAREN,
    ACTIONS(28), 1,
      anon_sym_DASH,
    ACTIONS(30), 1,
      sym__hex_4digit,
    ACTIONS(32), 1,
      anon_sym_SQUOTE,
    ACTIONS(34), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(36), 1,
      sym__dec_digit,
    ACTIONS(38), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(40), 1,
      anon_sym_0X,
    ACTIONS(42), 1,
      anon_sym_LBRACK,
    ACTIONS(44), 1,
      anon_sym_LBRACE,
    STATE(4), 1,
      aux_sym__decimal_literal,
    STATE(307), 1,
      sym_expression,
    ACTIONS(26), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(13), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
    STATE(269), 5,
      sym_constant,
      sym_assignment_tuple,
      sym_assignment_map,
      sym_assignment_set,
      sym_assignment_list,
  [267] = 2,
    ACTIONS(64), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(62), 21,
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
  [295] = 2,
    ACTIONS(68), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(66), 21,
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
  [323] = 3,
    ACTIONS(50), 1,
      sym__dec_digit,
    STATE(2), 1,
      aux_sym__decimal_literal,
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
      aux_sym_drop_index_token1,
  [353] = 1,
    ACTIONS(72), 22,
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
      aux_sym_drop_index_token1,
  [378] = 1,
    ACTIONS(46), 21,
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
      aux_sym_drop_index_token1,
  [402] = 1,
    ACTIONS(74), 21,
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
      aux_sym_drop_index_token1,
  [426] = 1,
    ACTIONS(76), 21,
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
      aux_sym_drop_index_token1,
  [450] = 15,
    ACTIONS(28), 1,
      anon_sym_DASH,
    ACTIONS(34), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(36), 1,
      sym__dec_digit,
    ACTIONS(38), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(40), 1,
      anon_sym_0X,
    ACTIONS(78), 1,
      anon_sym_STAR,
    ACTIONS(80), 1,
      anon_sym_RPAREN,
    ACTIONS(84), 1,
      sym__hex_4digit,
    ACTIONS(86), 1,
      anon_sym_SQUOTE,
    ACTIONS(88), 1,
      sym_object_name,
    STATE(4), 1,
      aux_sym__decimal_literal,
    STATE(360), 1,
      sym_function_args,
    ACTIONS(82), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(249), 2,
      sym_function_call,
      sym_constant,
    STATE(13), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [501] = 13,
    ACTIONS(28), 1,
      anon_sym_DASH,
    ACTIONS(34), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(36), 1,
      sym__dec_digit,
    ACTIONS(38), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(40), 1,
      anon_sym_0X,
    ACTIONS(84), 1,
      sym__hex_4digit,
    ACTIONS(86), 1,
      anon_sym_SQUOTE,
    ACTIONS(88), 1,
      sym_object_name,
    STATE(4), 1,
      aux_sym__decimal_literal,
    STATE(355), 1,
      sym_function_args,
    ACTIONS(82), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(249), 2,
      sym_function_call,
      sym_constant,
    STATE(13), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [546] = 12,
    ACTIONS(28), 1,
      anon_sym_DASH,
    ACTIONS(34), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(36), 1,
      sym__dec_digit,
    ACTIONS(38), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(40), 1,
      anon_sym_0X,
    ACTIONS(84), 1,
      sym__hex_4digit,
    ACTIONS(86), 1,
      anon_sym_SQUOTE,
    ACTIONS(90), 1,
      sym_object_name,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(82), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(305), 2,
      sym_function_call,
      sym_constant,
    STATE(13), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [588] = 11,
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
    ACTIONS(92), 1,
      ts_builtin_sym_end,
    STATE(316), 1,
      sym_begin_batch,
    STATE(22), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(153), 6,
      sym_select_statement,
      sym_delete_statement,
      sym_insert_statement,
      sym_truncate,
      sym_create_index,
      sym_drop_index,
  [628] = 12,
    ACTIONS(28), 1,
      anon_sym_DASH,
    ACTIONS(34), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(36), 1,
      sym__dec_digit,
    ACTIONS(38), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(84), 1,
      sym__hex_4digit,
    ACTIONS(86), 1,
      anon_sym_SQUOTE,
    ACTIONS(94), 1,
      anon_sym_0X,
    ACTIONS(96), 1,
      sym_object_name,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(82), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(56), 2,
      sym_function_call,
      sym_constant,
    STATE(13), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [670] = 13,
    ACTIONS(24), 1,
      anon_sym_LPAREN,
    ACTIONS(28), 1,
      anon_sym_DASH,
    ACTIONS(30), 1,
      sym__hex_4digit,
    ACTIONS(32), 1,
      anon_sym_SQUOTE,
    ACTIONS(34), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(36), 1,
      sym__dec_digit,
    ACTIONS(38), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(40), 1,
      anon_sym_0X,
    STATE(4), 1,
      aux_sym__decimal_literal,
    STATE(196), 1,
      sym_constant,
    STATE(295), 1,
      sym_assignment_tuple,
    ACTIONS(26), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(13), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [714] = 11,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
    ACTIONS(100), 1,
      aux_sym_select_statement_token1,
    ACTIONS(103), 1,
      aux_sym_delete_statement_token1,
    ACTIONS(106), 1,
      aux_sym_begin_batch_token1,
    ACTIONS(109), 1,
      aux_sym_insert_statement_token1,
    ACTIONS(112), 1,
      aux_sym_truncate_token1,
    ACTIONS(115), 1,
      aux_sym_create_index_token1,
    ACTIONS(118), 1,
      aux_sym_drop_index_token1,
    STATE(316), 1,
      sym_begin_batch,
    STATE(22), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(153), 6,
      sym_select_statement,
      sym_delete_statement,
      sym_insert_statement,
      sym_truncate,
      sym_create_index,
      sym_drop_index,
  [754] = 12,
    ACTIONS(28), 1,
      anon_sym_DASH,
    ACTIONS(34), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(36), 1,
      sym__dec_digit,
    ACTIONS(38), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(84), 1,
      sym__hex_4digit,
    ACTIONS(86), 1,
      anon_sym_SQUOTE,
    ACTIONS(96), 1,
      sym_object_name,
    ACTIONS(121), 1,
      anon_sym_0X,
    STATE(4), 1,
      aux_sym__decimal_literal,
    ACTIONS(82), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(56), 2,
      sym_function_call,
      sym_constant,
    STATE(13), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [796] = 12,
    ACTIONS(28), 1,
      anon_sym_DASH,
    ACTIONS(30), 1,
      sym__hex_4digit,
    ACTIONS(32), 1,
      anon_sym_SQUOTE,
    ACTIONS(34), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(36), 1,
      sym__dec_digit,
    ACTIONS(38), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(40), 1,
      anon_sym_0X,
    ACTIONS(123), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      aux_sym__decimal_literal,
    STATE(194), 1,
      sym_constant,
    ACTIONS(26), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(13), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [837] = 12,
    ACTIONS(28), 1,
      anon_sym_DASH,
    ACTIONS(30), 1,
      sym__hex_4digit,
    ACTIONS(32), 1,
      anon_sym_SQUOTE,
    ACTIONS(34), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(36), 1,
      sym__dec_digit,
    ACTIONS(38), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(94), 1,
      anon_sym_0X,
    ACTIONS(125), 1,
      aux_sym_relalationContainsKey_token2,
    STATE(4), 1,
      aux_sym__decimal_literal,
    STATE(49), 1,
      sym_constant,
    ACTIONS(26), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(13), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [878] = 12,
    ACTIONS(28), 1,
      anon_sym_DASH,
    ACTIONS(30), 1,
      sym__hex_4digit,
    ACTIONS(32), 1,
      anon_sym_SQUOTE,
    ACTIONS(34), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(36), 1,
      sym__dec_digit,
    ACTIONS(38), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(121), 1,
      anon_sym_0X,
    ACTIONS(127), 1,
      aux_sym_relalationContainsKey_token2,
    STATE(4), 1,
      aux_sym__decimal_literal,
    STATE(49), 1,
      sym_constant,
    ACTIONS(26), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(13), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [919] = 3,
    ACTIONS(131), 1,
      sym__hex_digit,
    STATE(27), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(129), 13,
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
  [941] = 11,
    ACTIONS(28), 1,
      anon_sym_DASH,
    ACTIONS(30), 1,
      sym__hex_4digit,
    ACTIONS(32), 1,
      anon_sym_SQUOTE,
    ACTIONS(34), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(36), 1,
      sym__dec_digit,
    ACTIONS(38), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(121), 1,
      anon_sym_0X,
    STATE(4), 1,
      aux_sym__decimal_literal,
    STATE(115), 1,
      sym_constant,
    ACTIONS(26), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(13), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [979] = 11,
    ACTIONS(28), 1,
      anon_sym_DASH,
    ACTIONS(30), 1,
      sym__hex_4digit,
    ACTIONS(32), 1,
      anon_sym_SQUOTE,
    ACTIONS(34), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(36), 1,
      sym__dec_digit,
    ACTIONS(38), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(40), 1,
      anon_sym_0X,
    STATE(4), 1,
      aux_sym__decimal_literal,
    STATE(170), 1,
      sym_constant,
    ACTIONS(26), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(13), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [1017] = 11,
    ACTIONS(28), 1,
      anon_sym_DASH,
    ACTIONS(30), 1,
      sym__hex_4digit,
    ACTIONS(32), 1,
      anon_sym_SQUOTE,
    ACTIONS(34), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(36), 1,
      sym__dec_digit,
    ACTIONS(38), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(40), 1,
      anon_sym_0X,
    STATE(4), 1,
      aux_sym__decimal_literal,
    STATE(208), 1,
      sym_constant,
    ACTIONS(26), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(13), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [1055] = 11,
    ACTIONS(28), 1,
      anon_sym_DASH,
    ACTIONS(30), 1,
      sym__hex_4digit,
    ACTIONS(32), 1,
      anon_sym_SQUOTE,
    ACTIONS(34), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(36), 1,
      sym__dec_digit,
    ACTIONS(38), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(121), 1,
      anon_sym_0X,
    STATE(4), 1,
      aux_sym__decimal_literal,
    STATE(95), 1,
      sym_constant,
    ACTIONS(26), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(13), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [1093] = 11,
    ACTIONS(28), 1,
      anon_sym_DASH,
    ACTIONS(30), 1,
      sym__hex_4digit,
    ACTIONS(32), 1,
      anon_sym_SQUOTE,
    ACTIONS(34), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(36), 1,
      sym__dec_digit,
    ACTIONS(38), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(94), 1,
      anon_sym_0X,
    STATE(4), 1,
      aux_sym__decimal_literal,
    STATE(61), 1,
      sym_constant,
    ACTIONS(26), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(13), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [1131] = 11,
    ACTIONS(28), 1,
      anon_sym_DASH,
    ACTIONS(30), 1,
      sym__hex_4digit,
    ACTIONS(32), 1,
      anon_sym_SQUOTE,
    ACTIONS(34), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(36), 1,
      sym__dec_digit,
    ACTIONS(38), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(121), 1,
      anon_sym_0X,
    STATE(4), 1,
      aux_sym__decimal_literal,
    STATE(47), 1,
      sym_constant,
    ACTIONS(26), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(13), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [1169] = 11,
    ACTIONS(28), 1,
      anon_sym_DASH,
    ACTIONS(30), 1,
      sym__hex_4digit,
    ACTIONS(32), 1,
      anon_sym_SQUOTE,
    ACTIONS(34), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(36), 1,
      sym__dec_digit,
    ACTIONS(38), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(40), 1,
      anon_sym_0X,
    STATE(4), 1,
      aux_sym__decimal_literal,
    STATE(287), 1,
      sym_constant,
    ACTIONS(26), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(13), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [1207] = 11,
    ACTIONS(28), 1,
      anon_sym_DASH,
    ACTIONS(30), 1,
      sym__hex_4digit,
    ACTIONS(32), 1,
      anon_sym_SQUOTE,
    ACTIONS(34), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(36), 1,
      sym__dec_digit,
    ACTIONS(38), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(121), 1,
      anon_sym_0X,
    STATE(4), 1,
      aux_sym__decimal_literal,
    STATE(61), 1,
      sym_constant,
    ACTIONS(26), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(13), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [1245] = 11,
    ACTIONS(28), 1,
      anon_sym_DASH,
    ACTIONS(30), 1,
      sym__hex_4digit,
    ACTIONS(32), 1,
      anon_sym_SQUOTE,
    ACTIONS(34), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(36), 1,
      sym__dec_digit,
    ACTIONS(38), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(40), 1,
      anon_sym_0X,
    STATE(4), 1,
      aux_sym__decimal_literal,
    STATE(385), 1,
      sym_constant,
    ACTIONS(26), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(13), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [1283] = 2,
    ACTIONS(136), 1,
      anon_sym_DOT,
    ACTIONS(134), 14,
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
  [1303] = 7,
    ACTIONS(140), 1,
      aux_sym_select_statement_token4,
    ACTIONS(142), 1,
      aux_sym_select_statement_token5,
    ACTIONS(144), 1,
      aux_sym_where_spec_token1,
    ACTIONS(146), 1,
      aux_sym_order_spec_token1,
    STATE(67), 1,
      sym_where_spec,
    STATE(91), 1,
      sym_order_spec,
    ACTIONS(138), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [1333] = 3,
    ACTIONS(150), 1,
      sym__hex_digit,
    STATE(27), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(148), 13,
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
  [1355] = 11,
    ACTIONS(28), 1,
      anon_sym_DASH,
    ACTIONS(30), 1,
      sym__hex_4digit,
    ACTIONS(32), 1,
      anon_sym_SQUOTE,
    ACTIONS(34), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(36), 1,
      sym__dec_digit,
    ACTIONS(38), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(121), 1,
      anon_sym_0X,
    STATE(4), 1,
      aux_sym__decimal_literal,
    STATE(56), 1,
      sym_constant,
    ACTIONS(26), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(13), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [1393] = 7,
    ACTIONS(144), 1,
      aux_sym_where_spec_token1,
    ACTIONS(146), 1,
      aux_sym_order_spec_token1,
    ACTIONS(154), 1,
      aux_sym_select_statement_token4,
    ACTIONS(156), 1,
      aux_sym_select_statement_token5,
    STATE(64), 1,
      sym_where_spec,
    STATE(100), 1,
      sym_order_spec,
    ACTIONS(152), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [1423] = 11,
    ACTIONS(28), 1,
      anon_sym_DASH,
    ACTIONS(30), 1,
      sym__hex_4digit,
    ACTIONS(32), 1,
      anon_sym_SQUOTE,
    ACTIONS(34), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(36), 1,
      sym__dec_digit,
    ACTIONS(38), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(94), 1,
      anon_sym_0X,
    STATE(4), 1,
      aux_sym__decimal_literal,
    STATE(56), 1,
      sym_constant,
    ACTIONS(26), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(13), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [1461] = 11,
    ACTIONS(28), 1,
      anon_sym_DASH,
    ACTIONS(30), 1,
      sym__hex_4digit,
    ACTIONS(32), 1,
      anon_sym_SQUOTE,
    ACTIONS(34), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(36), 1,
      sym__dec_digit,
    ACTIONS(38), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(40), 1,
      anon_sym_0X,
    STATE(4), 1,
      aux_sym__decimal_literal,
    STATE(250), 1,
      sym_constant,
    ACTIONS(26), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(13), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [1499] = 11,
    ACTIONS(28), 1,
      anon_sym_DASH,
    ACTIONS(30), 1,
      sym__hex_4digit,
    ACTIONS(32), 1,
      anon_sym_SQUOTE,
    ACTIONS(34), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(36), 1,
      sym__dec_digit,
    ACTIONS(38), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(94), 1,
      anon_sym_0X,
    STATE(4), 1,
      aux_sym__decimal_literal,
    STATE(47), 1,
      sym_constant,
    ACTIONS(26), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(13), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [1537] = 7,
    ACTIONS(144), 1,
      aux_sym_where_spec_token1,
    ACTIONS(146), 1,
      aux_sym_order_spec_token1,
    ACTIONS(160), 1,
      aux_sym_select_statement_token4,
    ACTIONS(162), 1,
      aux_sym_select_statement_token5,
    STATE(66), 1,
      sym_where_spec,
    STATE(103), 1,
      sym_order_spec,
    ACTIONS(158), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [1567] = 11,
    ACTIONS(28), 1,
      anon_sym_DASH,
    ACTIONS(30), 1,
      sym__hex_4digit,
    ACTIONS(32), 1,
      anon_sym_SQUOTE,
    ACTIONS(34), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(36), 1,
      sym__dec_digit,
    ACTIONS(38), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(40), 1,
      anon_sym_0X,
    STATE(4), 1,
      aux_sym__decimal_literal,
    STATE(196), 1,
      sym_constant,
    ACTIONS(26), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(13), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [1605] = 1,
    ACTIONS(164), 14,
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
  [1622] = 3,
    ACTIONS(166), 1,
      sym__hex_digit,
    STATE(48), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(129), 12,
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
  [1643] = 1,
    ACTIONS(169), 14,
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
  [1660] = 1,
    ACTIONS(171), 14,
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
  [1677] = 3,
    ACTIONS(175), 1,
      aux_sym_relation_elements_token1,
    STATE(59), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(173), 12,
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
  [1698] = 1,
    ACTIONS(177), 14,
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
  [1715] = 1,
    ACTIONS(179), 14,
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
  [1732] = 3,
    ACTIONS(183), 1,
      aux_sym_relation_elements_token1,
    STATE(54), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(181), 12,
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
  [1753] = 1,
    ACTIONS(186), 14,
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
  [1770] = 1,
    ACTIONS(188), 14,
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
  [1787] = 1,
    ACTIONS(190), 14,
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
  [1804] = 1,
    ACTIONS(192), 14,
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
  [1821] = 3,
    ACTIONS(175), 1,
      aux_sym_relation_elements_token1,
    STATE(54), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(194), 12,
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
  [1842] = 3,
    ACTIONS(196), 1,
      sym__hex_digit,
    STATE(48), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(148), 12,
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
  [1863] = 1,
    ACTIONS(198), 14,
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
  [1880] = 1,
    ACTIONS(181), 14,
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
  [1897] = 5,
    ACTIONS(202), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(204), 1,
      aux_sym_if_exist_token1,
    STATE(92), 1,
      sym_if_not_exist,
    STATE(144), 1,
      sym_using_ttl_timestamp,
    ACTIONS(200), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [1921] = 5,
    ACTIONS(140), 1,
      aux_sym_select_statement_token4,
    ACTIONS(142), 1,
      aux_sym_select_statement_token5,
    ACTIONS(146), 1,
      aux_sym_order_spec_token1,
    STATE(91), 1,
      sym_order_spec,
    ACTIONS(138), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [1945] = 5,
    ACTIONS(202), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(204), 1,
      aux_sym_if_exist_token1,
    STATE(104), 1,
      sym_if_not_exist,
    STATE(125), 1,
      sym_using_ttl_timestamp,
    ACTIONS(206), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [1969] = 5,
    ACTIONS(146), 1,
      aux_sym_order_spec_token1,
    ACTIONS(154), 1,
      aux_sym_select_statement_token4,
    ACTIONS(156), 1,
      aux_sym_select_statement_token5,
    STATE(100), 1,
      sym_order_spec,
    ACTIONS(152), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [1993] = 5,
    ACTIONS(146), 1,
      aux_sym_order_spec_token1,
    ACTIONS(210), 1,
      aux_sym_select_statement_token4,
    ACTIONS(212), 1,
      aux_sym_select_statement_token5,
    STATE(98), 1,
      sym_order_spec,
    ACTIONS(208), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [2017] = 5,
    ACTIONS(202), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(204), 1,
      aux_sym_if_exist_token1,
    STATE(97), 1,
      sym_if_not_exist,
    STATE(151), 1,
      sym_using_ttl_timestamp,
    ACTIONS(214), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [2041] = 5,
    ACTIONS(202), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(204), 1,
      aux_sym_if_exist_token1,
    STATE(106), 1,
      sym_if_not_exist,
    STATE(132), 1,
      sym_using_ttl_timestamp,
    ACTIONS(216), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [2065] = 2,
    ACTIONS(220), 2,
      aux_sym_order_spec_element_token1,
      aux_sym_order_spec_element_token2,
    ACTIONS(218), 11,
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
  [2083] = 1,
    ACTIONS(222), 13,
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
  [2099] = 2,
    ACTIONS(226), 1,
      anon_sym_DOT,
    ACTIONS(224), 12,
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
      aux_sym_drop_index_token1,
  [2117] = 2,
    ACTIONS(230), 1,
      anon_sym_DOT,
    ACTIONS(228), 12,
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
      aux_sym_drop_index_token1,
  [2135] = 5,
    ACTIONS(202), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(204), 1,
      aux_sym_if_exist_token1,
    STATE(99), 1,
      sym_if_not_exist,
    STATE(146), 1,
      sym_using_ttl_timestamp,
    ACTIONS(232), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [2159] = 3,
    ACTIONS(50), 1,
      sym__dec_digit,
    STATE(2), 1,
      aux_sym__decimal_literal,
    ACTIONS(234), 11,
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
  [2179] = 4,
    ACTIONS(50), 1,
      sym__dec_digit,
    ACTIONS(142), 1,
      aux_sym_select_statement_token5,
    STATE(2), 1,
      aux_sym__decimal_literal,
    ACTIONS(138), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [2200] = 1,
    ACTIONS(224), 12,
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
      aux_sym_drop_index_token1,
  [2215] = 3,
    ACTIONS(50), 1,
      sym__dec_digit,
    STATE(2), 1,
      aux_sym__decimal_literal,
    ACTIONS(236), 10,
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
  [2234] = 3,
    ACTIONS(238), 1,
      aux_sym_relation_elements_token1,
    STATE(79), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(181), 10,
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
  [2253] = 3,
    ACTIONS(241), 1,
      aux_sym_relation_elements_token1,
    STATE(79), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(194), 10,
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
  [2272] = 4,
    ACTIONS(50), 1,
      sym__dec_digit,
    ACTIONS(212), 1,
      aux_sym_select_statement_token5,
    STATE(2), 1,
      aux_sym__decimal_literal,
    ACTIONS(208), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [2293] = 4,
    ACTIONS(50), 1,
      sym__dec_digit,
    ACTIONS(245), 1,
      aux_sym_select_statement_token5,
    STATE(2), 1,
      aux_sym__decimal_literal,
    ACTIONS(243), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [2314] = 3,
    ACTIONS(249), 1,
      aux_sym_if_exist_token1,
    STATE(121), 2,
      sym_if_exist,
      sym_if_spec,
    ACTIONS(247), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [2333] = 3,
    ACTIONS(249), 1,
      aux_sym_if_exist_token1,
    STATE(123), 2,
      sym_if_exist,
      sym_if_spec,
    ACTIONS(251), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [2352] = 4,
    ACTIONS(50), 1,
      sym__dec_digit,
    ACTIONS(255), 1,
      aux_sym_select_statement_token5,
    STATE(2), 1,
      aux_sym__decimal_literal,
    ACTIONS(253), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [2373] = 1,
    ACTIONS(228), 12,
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
      aux_sym_drop_index_token1,
  [2388] = 3,
    ACTIONS(249), 1,
      aux_sym_if_exist_token1,
    STATE(119), 2,
      sym_if_exist,
      sym_if_spec,
    ACTIONS(257), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [2407] = 3,
    ACTIONS(249), 1,
      aux_sym_if_exist_token1,
    STATE(143), 2,
      sym_if_exist,
      sym_if_spec,
    ACTIONS(259), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [2426] = 3,
    ACTIONS(241), 1,
      aux_sym_relation_elements_token1,
    STATE(80), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(173), 10,
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
  [2445] = 4,
    ACTIONS(50), 1,
      sym__dec_digit,
    ACTIONS(263), 1,
      aux_sym_select_statement_token5,
    STATE(2), 1,
      aux_sym__decimal_literal,
    ACTIONS(261), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [2466] = 3,
    ACTIONS(210), 1,
      aux_sym_select_statement_token4,
    ACTIONS(212), 1,
      aux_sym_select_statement_token5,
    ACTIONS(208), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [2484] = 3,
    ACTIONS(202), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(125), 1,
      sym_using_ttl_timestamp,
    ACTIONS(206), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [2502] = 3,
    ACTIONS(267), 1,
      aux_sym_relation_elements_token1,
    STATE(94), 1,
      aux_sym_if_condition_list_repeat1,
    ACTIONS(265), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [2520] = 3,
    ACTIONS(267), 1,
      aux_sym_relation_elements_token1,
    STATE(105), 1,
      aux_sym_if_condition_list_repeat1,
    ACTIONS(269), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [2538] = 1,
    ACTIONS(271), 11,
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
  [2552] = 1,
    ACTIONS(273), 11,
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
  [2566] = 3,
    ACTIONS(202), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(132), 1,
      sym_using_ttl_timestamp,
    ACTIONS(216), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [2584] = 3,
    ACTIONS(255), 1,
      aux_sym_select_statement_token5,
    ACTIONS(275), 1,
      aux_sym_select_statement_token4,
    ACTIONS(253), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [2602] = 3,
    ACTIONS(202), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(144), 1,
      sym_using_ttl_timestamp,
    ACTIONS(200), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [2620] = 3,
    ACTIONS(140), 1,
      aux_sym_select_statement_token4,
    ACTIONS(142), 1,
      aux_sym_select_statement_token5,
    ACTIONS(138), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [2638] = 1,
    ACTIONS(277), 11,
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
  [2652] = 1,
    ACTIONS(279), 11,
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
  [2666] = 3,
    ACTIONS(154), 1,
      aux_sym_select_statement_token4,
    ACTIONS(156), 1,
      aux_sym_select_statement_token5,
    ACTIONS(152), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [2684] = 3,
    ACTIONS(202), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(151), 1,
      sym_using_ttl_timestamp,
    ACTIONS(214), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [2702] = 3,
    ACTIONS(283), 1,
      aux_sym_relation_elements_token1,
    STATE(105), 1,
      aux_sym_if_condition_list_repeat1,
    ACTIONS(281), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [2720] = 3,
    ACTIONS(202), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(122), 1,
      sym_using_ttl_timestamp,
    ACTIONS(286), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [2738] = 2,
    ACTIONS(290), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(288), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [2753] = 7,
    ACTIONS(292), 1,
      sym_object_name,
    ACTIONS(294), 1,
      sym__dquote,
    ACTIONS(296), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(298), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(300), 1,
      aux_sym_index_full_spec_token1,
    STATE(373), 1,
      sym_index_column_spec,
    STATE(374), 4,
      sym_column,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [2778] = 1,
    ACTIONS(302), 10,
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
  [2791] = 7,
    ACTIONS(292), 1,
      sym_object_name,
    ACTIONS(294), 1,
      sym__dquote,
    ACTIONS(296), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(298), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(300), 1,
      aux_sym_index_full_spec_token1,
    STATE(336), 1,
      sym_index_column_spec,
    STATE(374), 4,
      sym_column,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [2816] = 7,
    ACTIONS(292), 1,
      sym_object_name,
    ACTIONS(294), 1,
      sym__dquote,
    ACTIONS(296), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(298), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(300), 1,
      aux_sym_index_full_spec_token1,
    STATE(365), 1,
      sym_index_column_spec,
    STATE(374), 4,
      sym_column,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [2841] = 2,
    ACTIONS(304), 1,
      aux_sym_relation_elements_token1,
    ACTIONS(288), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [2856] = 7,
    ACTIONS(292), 1,
      sym_object_name,
    ACTIONS(294), 1,
      sym__dquote,
    ACTIONS(296), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(298), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(300), 1,
      aux_sym_index_full_spec_token1,
    STATE(379), 1,
      sym_index_column_spec,
    STATE(374), 4,
      sym_column,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [2881] = 1,
    ACTIONS(281), 10,
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
  [2894] = 1,
    ACTIONS(306), 10,
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
  [2907] = 7,
    ACTIONS(292), 1,
      sym_object_name,
    ACTIONS(294), 1,
      sym__dquote,
    ACTIONS(296), 1,
      aux_sym_index_keys_spec_token1,
    ACTIONS(298), 1,
      aux_sym_index_entries_s_spec_token1,
    ACTIONS(300), 1,
      aux_sym_index_full_spec_token1,
    STATE(333), 1,
      sym_index_column_spec,
    STATE(374), 4,
      sym_column,
      sym_index_keys_spec,
      sym_index_entries_s_spec,
      sym_index_full_spec,
  [2932] = 1,
    ACTIONS(308), 10,
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
  [2945] = 2,
    ACTIONS(226), 1,
      anon_sym_DOT,
    ACTIONS(302), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [2960] = 1,
    ACTIONS(247), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [2972] = 1,
    ACTIONS(310), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [2984] = 1,
    ACTIONS(251), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [2996] = 1,
    ACTIONS(312), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [3008] = 1,
    ACTIONS(259), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [3020] = 1,
    ACTIONS(314), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [3032] = 1,
    ACTIONS(214), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [3044] = 1,
    ACTIONS(316), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [3056] = 1,
    ACTIONS(318), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [3068] = 1,
    ACTIONS(320), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [3080] = 1,
    ACTIONS(322), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [3092] = 1,
    ACTIONS(324), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [3104] = 1,
    ACTIONS(326), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [3116] = 1,
    ACTIONS(286), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [3128] = 1,
    ACTIONS(261), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [3140] = 1,
    ACTIONS(328), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [3152] = 1,
    ACTIONS(330), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [3164] = 1,
    ACTIONS(208), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [3176] = 1,
    ACTIONS(332), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [3188] = 1,
    ACTIONS(138), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [3200] = 1,
    ACTIONS(334), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [3212] = 9,
    ACTIONS(34), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(86), 1,
      anon_sym_SQUOTE,
    ACTIONS(336), 1,
      sym_object_name,
    ACTIONS(338), 1,
      aux_sym_if_exist_token1,
    ACTIONS(340), 1,
      sym__dquote,
    STATE(109), 1,
      sym__string_literal,
    STATE(126), 1,
      sym_index_name,
    STATE(163), 1,
      sym_if_exist,
    STATE(352), 1,
      sym_keyspace,
  [3240] = 1,
    ACTIONS(342), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [3252] = 6,
    ACTIONS(344), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(352), 1,
      aux_sym_relation_element_token1,
    ACTIONS(354), 1,
      aux_sym_relalationContainsKey_token1,
    ACTIONS(350), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(348), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3274] = 1,
    ACTIONS(356), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [3286] = 1,
    ACTIONS(206), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [3298] = 1,
    ACTIONS(358), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [3310] = 1,
    ACTIONS(200), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [3322] = 1,
    ACTIONS(243), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [3334] = 1,
    ACTIONS(360), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [3346] = 1,
    ACTIONS(362), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [3358] = 1,
    ACTIONS(364), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [3370] = 1,
    ACTIONS(216), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [3382] = 1,
    ACTIONS(253), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [3394] = 2,
    ACTIONS(368), 1,
      anon_sym_SEMI,
    ACTIONS(366), 8,
      ts_builtin_sym_end,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [3408] = 1,
    ACTIONS(370), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [3420] = 6,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(352), 1,
      aux_sym_relation_element_token1,
    ACTIONS(372), 1,
      anon_sym_DOT,
    ACTIONS(378), 1,
      aux_sym_relalationContainsKey_token1,
    ACTIONS(376), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(374), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3442] = 3,
    ACTIONS(380), 1,
      sym__hex_digit,
    STATE(159), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(148), 6,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_RBRACE,
  [3457] = 1,
    ACTIONS(382), 8,
      ts_builtin_sym_end,
      aux_sym_select_statement_token1,
      aux_sym_delete_statement_token1,
      aux_sym_begin_batch_token1,
      aux_sym_insert_statement_token1,
      aux_sym_truncate_token1,
      aux_sym_create_index_token1,
      aux_sym_drop_index_token1,
  [3468] = 8,
    ACTIONS(34), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(86), 1,
      anon_sym_SQUOTE,
    ACTIONS(384), 1,
      sym_object_name,
    ACTIONS(386), 1,
      aux_sym_if_exist_token1,
    ACTIONS(388), 1,
      aux_sym_create_index_token3,
    STATE(109), 1,
      sym__string_literal,
    STATE(168), 1,
      sym_if_not_exist,
    STATE(346), 1,
      sym_index_name,
  [3493] = 3,
    ACTIONS(390), 1,
      sym__hex_digit,
    STATE(159), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(129), 6,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_RBRACE,
  [3508] = 7,
    ACTIONS(393), 1,
      aux_sym_select_statement_token2,
    ACTIONS(395), 1,
      aux_sym_select_statement_token3,
    ACTIONS(397), 1,
      anon_sym_STAR,
    ACTIONS(399), 1,
      sym_object_name,
    STATE(218), 1,
      sym_select_element,
    STATE(228), 1,
      sym_function_call,
    STATE(313), 1,
      sym_select_elements,
  [3530] = 6,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(403), 1,
      sym_object_name,
    STATE(51), 1,
      sym_relation_element,
    STATE(71), 1,
      sym_relation_elements,
    STATE(175), 1,
      sym_function_call,
    STATE(50), 2,
      sym_relalationContainsKey,
      sym_relalationContains,
  [3550] = 6,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      sym_object_name,
    STATE(71), 1,
      sym_relation_elements,
    STATE(89), 1,
      sym_relation_element,
    STATE(171), 1,
      sym_function_call,
    STATE(50), 2,
      sym_relalationContainsKey,
      sym_relalationContains,
  [3570] = 7,
    ACTIONS(34), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(86), 1,
      anon_sym_SQUOTE,
    ACTIONS(336), 1,
      sym_object_name,
    ACTIONS(340), 1,
      sym__dquote,
    STATE(109), 1,
      sym__string_literal,
    STATE(139), 1,
      sym_index_name,
    STATE(409), 1,
      sym_keyspace,
  [3592] = 5,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(403), 1,
      sym_object_name,
    STATE(62), 1,
      sym_relation_element,
    STATE(175), 1,
      sym_function_call,
    STATE(50), 2,
      sym_relalationContainsKey,
      sym_relalationContains,
  [3609] = 6,
    ACTIONS(397), 1,
      anon_sym_STAR,
    ACTIONS(399), 1,
      sym_object_name,
    ACTIONS(407), 1,
      aux_sym_select_statement_token3,
    STATE(218), 1,
      sym_select_element,
    STATE(228), 1,
      sym_function_call,
    STATE(267), 1,
      sym_select_elements,
  [3628] = 2,
    ACTIONS(411), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(409), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_relation_element_token1,
  [3639] = 5,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      sym_object_name,
    STATE(62), 1,
      sym_relation_element,
    STATE(171), 1,
      sym_function_call,
    STATE(50), 2,
      sym_relalationContainsKey,
      sym_relalationContains,
  [3656] = 6,
    ACTIONS(34), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(86), 1,
      anon_sym_SQUOTE,
    ACTIONS(384), 1,
      sym_object_name,
    ACTIONS(413), 1,
      aux_sym_create_index_token3,
    STATE(109), 1,
      sym__string_literal,
    STATE(403), 1,
      sym_index_name,
  [3675] = 2,
    ACTIONS(417), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(415), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_relation_element_token1,
  [3686] = 6,
    ACTIONS(24), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      anon_sym_COMMA,
    ACTIONS(421), 1,
      anon_sym_RPAREN,
    STATE(211), 1,
      aux_sym_assignment_tuple_repeat1,
    STATE(213), 1,
      aux_sym_relation_element_repeat2,
    STATE(216), 1,
      sym_assignment_tuple,
  [3705] = 2,
    ACTIONS(425), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(423), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3715] = 5,
    ACTIONS(427), 1,
      aux_sym_select_statement_token3,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(431), 1,
      aux_sym_insert_values_spec_token1,
    STATE(74), 1,
      sym_insert_values_spec,
    STATE(238), 1,
      sym_insert_column_spec,
  [3731] = 5,
    ACTIONS(433), 1,
      sym_object_name,
    ACTIONS(435), 1,
      sym__dquote,
    ACTIONS(437), 1,
      aux_sym_truncate_token2,
    STATE(154), 1,
      sym_table,
    STATE(381), 1,
      sym_keyspace,
  [3747] = 2,
    ACTIONS(441), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(439), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3757] = 2,
    ACTIONS(445), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(443), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3767] = 5,
    ACTIONS(397), 1,
      anon_sym_STAR,
    ACTIONS(447), 1,
      sym_object_name,
    STATE(218), 1,
      sym_select_element,
    STATE(228), 1,
      sym_function_call,
    STATE(267), 1,
      sym_select_elements,
  [3783] = 4,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(451), 1,
      anon_sym_DOT,
    ACTIONS(453), 1,
      aux_sym_select_element_token1,
    ACTIONS(449), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [3797] = 5,
    ACTIONS(427), 1,
      aux_sym_select_statement_token3,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(431), 1,
      aux_sym_insert_values_spec_token1,
    STATE(68), 1,
      sym_insert_values_spec,
    STATE(220), 1,
      sym_insert_column_spec,
  [3813] = 5,
    ACTIONS(427), 1,
      aux_sym_select_statement_token3,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(431), 1,
      aux_sym_insert_values_spec_token1,
    STATE(65), 1,
      sym_insert_values_spec,
    STATE(243), 1,
      sym_insert_column_spec,
  [3829] = 5,
    ACTIONS(34), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(86), 1,
      anon_sym_SQUOTE,
    ACTIONS(384), 1,
      sym_object_name,
    STATE(109), 1,
      sym__string_literal,
    STATE(148), 1,
      sym_index_name,
  [3845] = 5,
    ACTIONS(455), 1,
      sym_object_name,
    ACTIONS(457), 1,
      aux_sym_from_spec_token1,
    STATE(195), 1,
      sym_from_spec,
    STATE(235), 1,
      sym_delete_column_item,
    STATE(262), 1,
      sym_delete_column_list,
  [3861] = 2,
    ACTIONS(461), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(459), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3871] = 5,
    ACTIONS(455), 1,
      sym_object_name,
    ACTIONS(457), 1,
      aux_sym_from_spec_token1,
    STATE(191), 1,
      sym_from_spec,
    STATE(235), 1,
      sym_delete_column_item,
    STATE(298), 1,
      sym_delete_column_list,
  [3887] = 5,
    ACTIONS(397), 1,
      anon_sym_STAR,
    ACTIONS(447), 1,
      sym_object_name,
    STATE(218), 1,
      sym_select_element,
    STATE(228), 1,
      sym_function_call,
    STATE(289), 1,
      sym_select_elements,
  [3903] = 3,
    ACTIONS(463), 1,
      anon_sym_COMMA,
    STATE(185), 1,
      aux_sym_assignment_tuple_repeat1,
    ACTIONS(466), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [3915] = 5,
    ACTIONS(427), 1,
      aux_sym_select_statement_token3,
    ACTIONS(429), 1,
      anon_sym_LPAREN,
    ACTIONS(431), 1,
      aux_sym_insert_values_spec_token1,
    STATE(63), 1,
      sym_insert_values_spec,
    STATE(215), 1,
      sym_insert_column_spec,
  [3931] = 5,
    ACTIONS(34), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(86), 1,
      anon_sym_SQUOTE,
    ACTIONS(384), 1,
      sym_object_name,
    STATE(109), 1,
      sym__string_literal,
    STATE(141), 1,
      sym_index_name,
  [3947] = 5,
    ACTIONS(32), 1,
      anon_sym_SQUOTE,
    ACTIONS(34), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(468), 1,
      sym__dec_digit,
    STATE(259), 1,
      aux_sym__decimal_literal,
    STATE(372), 1,
      sym__string_literal,
  [3963] = 3,
    ACTIONS(472), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(279), 1,
      sym_using_timestamp_spec,
    ACTIONS(470), 2,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
  [3974] = 4,
    ACTIONS(474), 1,
      aux_sym_timestamp_token1,
    ACTIONS(476), 1,
      aux_sym_ttl_token1,
    STATE(107), 1,
      sym_ttl,
    STATE(112), 1,
      sym_timestamp,
  [3987] = 4,
    ACTIONS(472), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(478), 1,
      aux_sym_where_spec_token1,
    STATE(83), 1,
      sym_where_spec,
    STATE(272), 1,
      sym_using_timestamp_spec,
  [4000] = 4,
    ACTIONS(433), 1,
      sym_object_name,
    ACTIONS(435), 1,
      sym__dquote,
    STATE(400), 1,
      sym_keyspace,
    STATE(401), 1,
      sym_table,
  [4013] = 2,
    ACTIONS(308), 2,
      anon_sym_DOLLAR_DOLLAR,
      sym_object_name,
    ACTIONS(480), 2,
      anon_sym_SQUOTE,
      aux_sym_create_index_token3,
  [4022] = 4,
    ACTIONS(482), 1,
      anon_sym_COMMA,
    ACTIONS(484), 1,
      anon_sym_COLON,
    ACTIONS(486), 1,
      anon_sym_RBRACE,
    STATE(222), 1,
      aux_sym_assignment_tuple_repeat1,
  [4035] = 4,
    ACTIONS(472), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(478), 1,
      aux_sym_where_spec_token1,
    STATE(87), 1,
      sym_where_spec,
    STATE(302), 1,
      sym_using_timestamp_spec,
  [4048] = 1,
    ACTIONS(466), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [4055] = 4,
    ACTIONS(433), 1,
      sym_object_name,
    ACTIONS(435), 1,
      sym__dquote,
    STATE(149), 1,
      sym_table,
    STATE(325), 1,
      sym_keyspace,
  [4068] = 4,
    ACTIONS(433), 1,
      sym_object_name,
    ACTIONS(435), 1,
      sym__dquote,
    STATE(371), 1,
      sym_keyspace,
    STATE(380), 1,
      sym_table,
  [4081] = 4,
    ACTIONS(433), 1,
      sym_object_name,
    ACTIONS(435), 1,
      sym__dquote,
    STATE(329), 1,
      sym_table,
    STATE(330), 1,
      sym_keyspace,
  [4094] = 4,
    ACTIONS(433), 1,
      sym_object_name,
    ACTIONS(435), 1,
      sym__dquote,
    STATE(172), 1,
      sym_table,
    STATE(327), 1,
      sym_keyspace,
  [4107] = 4,
    ACTIONS(292), 1,
      sym_object_name,
    ACTIONS(294), 1,
      sym__dquote,
    STATE(258), 1,
      sym_column,
    STATE(383), 1,
      sym_column_list,
  [4120] = 4,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(488), 1,
      anon_sym_COMMA,
    ACTIONS(490), 1,
      anon_sym_RPAREN,
    STATE(261), 1,
      aux_sym_function_args_repeat1,
  [4133] = 2,
    ACTIONS(492), 1,
      anon_sym_SQUOTE,
    ACTIONS(330), 3,
      anon_sym_DOLLAR_DOLLAR,
      sym_object_name,
      sym__dquote,
  [4142] = 4,
    ACTIONS(494), 1,
      sym_object_name,
    ACTIONS(496), 1,
      aux_sym_if_exist_token2,
    STATE(93), 1,
      sym_if_condition,
    STATE(128), 1,
      sym_if_condition_list,
  [4155] = 3,
    ACTIONS(472), 1,
      aux_sym_using_timestamp_spec_token1,
    STATE(312), 1,
      sym_using_timestamp_spec,
    ACTIONS(498), 2,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
  [4166] = 4,
    ACTIONS(433), 1,
      sym_object_name,
    ACTIONS(435), 1,
      sym__dquote,
    STATE(186), 1,
      sym_table,
    STATE(414), 1,
      sym_keyspace,
  [4179] = 4,
    ACTIONS(472), 1,
      aux_sym_using_timestamp_spec_token1,
    ACTIONS(478), 1,
      aux_sym_where_spec_token1,
    STATE(84), 1,
      sym_where_spec,
    STATE(320), 1,
      sym_using_timestamp_spec,
  [4192] = 3,
    ACTIONS(482), 1,
      anon_sym_COMMA,
    ACTIONS(500), 1,
      anon_sym_RBRACK,
    STATE(219), 1,
      aux_sym_assignment_tuple_repeat1,
  [4202] = 3,
    ACTIONS(502), 1,
      anon_sym_COMMA,
    ACTIONS(504), 1,
      anon_sym_RPAREN,
    STATE(242), 1,
      aux_sym_relation_element_repeat2,
  [4212] = 2,
    ACTIONS(508), 1,
      aux_sym_begin_batch_token4,
    ACTIONS(506), 2,
      aux_sym_begin_batch_token2,
      aux_sym_begin_batch_token3,
  [4220] = 3,
    ACTIONS(482), 1,
      anon_sym_COMMA,
    ACTIONS(510), 1,
      anon_sym_RPAREN,
    STATE(185), 1,
      aux_sym_assignment_tuple_repeat1,
  [4230] = 3,
    ACTIONS(512), 1,
      anon_sym_COMMA,
    ACTIONS(514), 1,
      anon_sym_RPAREN,
    STATE(232), 1,
      aux_sym_relation_element_repeat1,
  [4240] = 3,
    ACTIONS(502), 1,
      anon_sym_COMMA,
    ACTIONS(510), 1,
      anon_sym_RPAREN,
    STATE(242), 1,
      aux_sym_relation_element_repeat2,
  [4250] = 3,
    ACTIONS(516), 1,
      sym_object_name,
    ACTIONS(518), 1,
      sym__dquote,
    STATE(178), 1,
      sym_table,
  [4260] = 3,
    ACTIONS(427), 1,
      aux_sym_select_statement_token3,
    ACTIONS(431), 1,
      aux_sym_insert_values_spec_token1,
    STATE(65), 1,
      sym_insert_values_spec,
  [4270] = 3,
    ACTIONS(502), 1,
      anon_sym_COMMA,
    ACTIONS(510), 1,
      anon_sym_RPAREN,
    STATE(239), 1,
      aux_sym_relation_element_repeat2,
  [4280] = 3,
    ACTIONS(516), 1,
      sym_object_name,
    ACTIONS(518), 1,
      sym__dquote,
    STATE(130), 1,
      sym_table,
  [4290] = 3,
    ACTIONS(520), 1,
      anon_sym_COMMA,
    ACTIONS(522), 1,
      aux_sym_from_spec_token1,
    STATE(251), 1,
      aux_sym_select_elements_repeat1,
  [4300] = 3,
    ACTIONS(482), 1,
      anon_sym_COMMA,
    ACTIONS(524), 1,
      anon_sym_RBRACK,
    STATE(185), 1,
      aux_sym_assignment_tuple_repeat1,
  [4310] = 3,
    ACTIONS(427), 1,
      aux_sym_select_statement_token3,
    ACTIONS(431), 1,
      aux_sym_insert_values_spec_token1,
    STATE(69), 1,
      sym_insert_values_spec,
  [4320] = 3,
    ACTIONS(516), 1,
      sym_object_name,
    ACTIONS(518), 1,
      sym__dquote,
    STATE(342), 1,
      sym_table,
  [4330] = 3,
    ACTIONS(482), 1,
      anon_sym_COMMA,
    ACTIONS(526), 1,
      anon_sym_RBRACE,
    STATE(185), 1,
      aux_sym_assignment_tuple_repeat1,
  [4340] = 3,
    ACTIONS(528), 1,
      sym__hex_digit,
    ACTIONS(531), 1,
      anon_sym_SQUOTE,
    STATE(223), 1,
      aux_sym__hexadecimal_literal_repeat1,
  [4350] = 3,
    ACTIONS(516), 1,
      sym_object_name,
    ACTIONS(518), 1,
      sym__dquote,
    STATE(380), 1,
      sym_table,
  [4360] = 2,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(533), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4368] = 3,
    ACTIONS(535), 1,
      anon_sym_COMMA,
    ACTIONS(538), 1,
      anon_sym_RPAREN,
    STATE(226), 1,
      aux_sym_expression_list_repeat1,
  [4378] = 3,
    ACTIONS(533), 1,
      anon_sym_RPAREN,
    ACTIONS(540), 1,
      anon_sym_COMMA,
    STATE(227), 1,
      aux_sym_function_args_repeat1,
  [4388] = 2,
    ACTIONS(453), 1,
      aux_sym_select_element_token1,
    ACTIONS(449), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [4396] = 2,
    ACTIONS(545), 1,
      anon_sym_LBRACK,
    ACTIONS(543), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [4404] = 3,
    ACTIONS(547), 1,
      anon_sym_COMMA,
    ACTIONS(549), 1,
      aux_sym_from_spec_token1,
    STATE(244), 1,
      aux_sym_delete_column_list_repeat1,
  [4414] = 3,
    ACTIONS(551), 1,
      anon_sym_COMMA,
    ACTIONS(553), 1,
      anon_sym_RPAREN,
    STATE(226), 1,
      aux_sym_expression_list_repeat1,
  [4424] = 3,
    ACTIONS(512), 1,
      anon_sym_COMMA,
    ACTIONS(555), 1,
      anon_sym_RPAREN,
    STATE(240), 1,
      aux_sym_relation_element_repeat1,
  [4434] = 3,
    ACTIONS(502), 1,
      anon_sym_COMMA,
    ACTIONS(557), 1,
      anon_sym_RPAREN,
    STATE(209), 1,
      aux_sym_relation_element_repeat2,
  [4444] = 3,
    ACTIONS(559), 1,
      anon_sym_COMMA,
    ACTIONS(562), 1,
      anon_sym_RPAREN,
    STATE(234), 1,
      aux_sym_column_list_repeat1,
  [4454] = 3,
    ACTIONS(547), 1,
      anon_sym_COMMA,
    ACTIONS(564), 1,
      aux_sym_from_spec_token1,
    STATE(230), 1,
      aux_sym_delete_column_list_repeat1,
  [4464] = 3,
    ACTIONS(516), 1,
      sym_object_name,
    ACTIONS(518), 1,
      sym__dquote,
    STATE(145), 1,
      sym_table,
  [4474] = 3,
    ACTIONS(566), 1,
      anon_sym_COMMA,
    ACTIONS(569), 1,
      aux_sym_from_spec_token1,
    STATE(237), 1,
      aux_sym_select_elements_repeat1,
  [4484] = 3,
    ACTIONS(427), 1,
      aux_sym_select_statement_token3,
    ACTIONS(431), 1,
      aux_sym_insert_values_spec_token1,
    STATE(63), 1,
      sym_insert_values_spec,
  [4494] = 3,
    ACTIONS(502), 1,
      anon_sym_COMMA,
    ACTIONS(571), 1,
      anon_sym_RPAREN,
    STATE(242), 1,
      aux_sym_relation_element_repeat2,
  [4504] = 3,
    ACTIONS(573), 1,
      anon_sym_COMMA,
    ACTIONS(576), 1,
      anon_sym_RPAREN,
    STATE(240), 1,
      aux_sym_relation_element_repeat1,
  [4514] = 3,
    ACTIONS(516), 1,
      sym_object_name,
    ACTIONS(518), 1,
      sym__dquote,
    STATE(179), 1,
      sym_table,
  [4524] = 3,
    ACTIONS(578), 1,
      anon_sym_COMMA,
    ACTIONS(581), 1,
      anon_sym_RPAREN,
    STATE(242), 1,
      aux_sym_relation_element_repeat2,
  [4534] = 3,
    ACTIONS(427), 1,
      aux_sym_select_statement_token3,
    ACTIONS(431), 1,
      aux_sym_insert_values_spec_token1,
    STATE(68), 1,
      sym_insert_values_spec,
  [4544] = 3,
    ACTIONS(583), 1,
      anon_sym_COMMA,
    ACTIONS(586), 1,
      aux_sym_from_spec_token1,
    STATE(244), 1,
      aux_sym_delete_column_list_repeat1,
  [4554] = 3,
    ACTIONS(588), 1,
      anon_sym_COMMA,
    ACTIONS(591), 1,
      anon_sym_RBRACE,
    STATE(245), 1,
      aux_sym_assignment_map_repeat1,
  [4564] = 3,
    ACTIONS(593), 1,
      sym__hex_digit,
    ACTIONS(595), 1,
      anon_sym_SQUOTE,
    STATE(223), 1,
      aux_sym__hexadecimal_literal_repeat1,
  [4574] = 3,
    ACTIONS(292), 1,
      sym_object_name,
    ACTIONS(294), 1,
      sym__dquote,
    STATE(284), 1,
      sym_column,
  [4584] = 3,
    ACTIONS(597), 1,
      anon_sym_COMMA,
    ACTIONS(599), 1,
      anon_sym_RPAREN,
    STATE(234), 1,
      aux_sym_column_list_repeat1,
  [4594] = 3,
    ACTIONS(488), 1,
      anon_sym_COMMA,
    ACTIONS(490), 1,
      anon_sym_RPAREN,
    STATE(261), 1,
      aux_sym_function_args_repeat1,
  [4604] = 3,
    ACTIONS(601), 1,
      anon_sym_COMMA,
    ACTIONS(603), 1,
      anon_sym_RBRACE,
    STATE(260), 1,
      aux_sym_assignment_map_repeat1,
  [4614] = 3,
    ACTIONS(520), 1,
      anon_sym_COMMA,
    ACTIONS(605), 1,
      aux_sym_from_spec_token1,
    STATE(237), 1,
      aux_sym_select_elements_repeat1,
  [4624] = 3,
    ACTIONS(447), 1,
      sym_object_name,
    STATE(228), 1,
      sym_function_call,
    STATE(288), 1,
      sym_select_element,
  [4634] = 3,
    ACTIONS(551), 1,
      anon_sym_COMMA,
    ACTIONS(607), 1,
      anon_sym_RPAREN,
    STATE(231), 1,
      aux_sym_expression_list_repeat1,
  [4644] = 1,
    ACTIONS(609), 3,
      aux_sym_where_spec_token1,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
  [4650] = 3,
    ACTIONS(516), 1,
      sym_object_name,
    ACTIONS(518), 1,
      sym__dquote,
    STATE(334), 1,
      sym_table,
  [4660] = 3,
    ACTIONS(502), 1,
      anon_sym_COMMA,
    ACTIONS(504), 1,
      anon_sym_RPAREN,
    STATE(257), 1,
      aux_sym_relation_element_repeat2,
  [4670] = 3,
    ACTIONS(502), 1,
      anon_sym_COMMA,
    ACTIONS(611), 1,
      anon_sym_RPAREN,
    STATE(242), 1,
      aux_sym_relation_element_repeat2,
  [4680] = 3,
    ACTIONS(597), 1,
      anon_sym_COMMA,
    ACTIONS(613), 1,
      anon_sym_RPAREN,
    STATE(248), 1,
      aux_sym_column_list_repeat1,
  [4690] = 3,
    ACTIONS(50), 1,
      sym__dec_digit,
    ACTIONS(615), 1,
      anon_sym_RBRACK,
    STATE(2), 1,
      aux_sym__decimal_literal,
  [4700] = 3,
    ACTIONS(601), 1,
      anon_sym_COMMA,
    ACTIONS(617), 1,
      anon_sym_RBRACE,
    STATE(245), 1,
      aux_sym_assignment_map_repeat1,
  [4710] = 3,
    ACTIONS(488), 1,
      anon_sym_COMMA,
    ACTIONS(619), 1,
      anon_sym_RPAREN,
    STATE(227), 1,
      aux_sym_function_args_repeat1,
  [4720] = 2,
    ACTIONS(621), 1,
      aux_sym_from_spec_token1,
    STATE(191), 1,
      sym_from_spec,
  [4727] = 2,
    ACTIONS(623), 1,
      sym__dec_digit,
    STATE(5), 1,
      aux_sym__decimal_literal,
  [4734] = 2,
    ACTIONS(625), 1,
      sym__dec_digit,
    STATE(78), 1,
      aux_sym__decimal_literal,
  [4741] = 1,
    ACTIONS(627), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4746] = 1,
    ACTIONS(629), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4751] = 2,
    ACTIONS(621), 1,
      aux_sym_from_spec_token1,
    STATE(41), 1,
      sym_from_spec,
  [4758] = 1,
    ACTIONS(631), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4763] = 1,
    ACTIONS(633), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4768] = 1,
    ACTIONS(635), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4773] = 2,
    ACTIONS(637), 1,
      sym__dec_digit,
    STATE(76), 1,
      aux_sym__decimal_literal,
  [4780] = 2,
    ACTIONS(478), 1,
      aux_sym_where_spec_token1,
    STATE(84), 1,
      sym_where_spec,
  [4787] = 2,
    ACTIONS(639), 1,
      sym__dec_digit,
    STATE(82), 1,
      aux_sym__decimal_literal,
  [4794] = 1,
    ACTIONS(641), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4799] = 1,
    ACTIONS(586), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [4804] = 1,
    ACTIONS(643), 2,
      aux_sym_select_statement_token3,
      aux_sym_insert_values_spec_token1,
  [4809] = 2,
    ACTIONS(645), 1,
      sym__hex_digit,
    STATE(156), 1,
      aux_sym__hexadecimal_literal_repeat2,
  [4816] = 1,
    ACTIONS(576), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4821] = 1,
    ACTIONS(647), 2,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
  [4826] = 2,
    ACTIONS(593), 1,
      sym__hex_digit,
    STATE(246), 1,
      aux_sym__hexadecimal_literal_repeat1,
  [4833] = 2,
    ACTIONS(494), 1,
      sym_object_name,
    STATE(114), 1,
      sym_if_condition,
  [4840] = 1,
    ACTIONS(649), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4845] = 1,
    ACTIONS(651), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4850] = 1,
    ACTIONS(562), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4855] = 2,
    ACTIONS(24), 1,
      anon_sym_LPAREN,
    STATE(295), 1,
      sym_assignment_tuple,
  [4862] = 1,
    ACTIONS(653), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [4867] = 1,
    ACTIONS(655), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4872] = 1,
    ACTIONS(569), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [4877] = 2,
    ACTIONS(621), 1,
      aux_sym_from_spec_token1,
    STATE(38), 1,
      sym_from_spec,
  [4884] = 2,
    ACTIONS(657), 1,
      sym__dec_digit,
    STATE(75), 1,
      aux_sym__decimal_literal,
  [4891] = 1,
    ACTIONS(659), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4896] = 2,
    ACTIONS(661), 1,
      sym__dec_digit,
    STATE(6), 1,
      aux_sym__decimal_literal,
  [4903] = 1,
    ACTIONS(663), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [4908] = 1,
    ACTIONS(665), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4913] = 1,
    ACTIONS(581), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4918] = 2,
    ACTIONS(24), 1,
      anon_sym_LPAREN,
    STATE(256), 1,
      sym_assignment_tuple,
  [4925] = 1,
    ACTIONS(667), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4930] = 2,
    ACTIONS(621), 1,
      aux_sym_from_spec_token1,
    STATE(207), 1,
      sym_from_spec,
  [4937] = 2,
    ACTIONS(474), 1,
      aux_sym_timestamp_token1,
    STATE(254), 1,
      sym_timestamp,
  [4944] = 2,
    ACTIONS(476), 1,
      aux_sym_ttl_token1,
    STATE(150), 1,
      sym_ttl,
  [4951] = 2,
    ACTIONS(474), 1,
      aux_sym_timestamp_token1,
    STATE(150), 1,
      sym_timestamp,
  [4958] = 2,
    ACTIONS(478), 1,
      aux_sym_where_spec_token1,
    STATE(83), 1,
      sym_where_spec,
  [4965] = 2,
    ACTIONS(455), 1,
      sym_object_name,
    STATE(275), 1,
      sym_delete_column_item,
  [4972] = 2,
    ACTIONS(669), 1,
      sym_object_name,
    STATE(53), 1,
      sym_from_spec_element,
  [4979] = 1,
    ACTIONS(533), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4984] = 2,
    ACTIONS(671), 1,
      sym__hex_digit,
    STATE(60), 1,
      aux_sym__hexadecimal_literal_repeat2,
  [4991] = 1,
    ACTIONS(538), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4996] = 1,
    ACTIONS(531), 2,
      sym__hex_digit,
      anon_sym_SQUOTE,
  [5001] = 2,
    ACTIONS(673), 1,
      sym__hex_digit,
    STATE(39), 1,
      aux_sym__hexadecimal_literal_repeat2,
  [5008] = 1,
    ACTIONS(675), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5013] = 2,
    ACTIONS(677), 1,
      sym__dec_digit,
    STATE(11), 1,
      aux_sym__decimal_literal,
  [5020] = 1,
    ACTIONS(470), 2,
      aux_sym_delete_statement_token1,
      aux_sym_insert_statement_token1,
  [5025] = 2,
    ACTIONS(621), 1,
      aux_sym_from_spec_token1,
    STATE(45), 1,
      sym_from_spec,
  [5032] = 2,
    ACTIONS(679), 1,
      sym__dec_digit,
    STATE(90), 1,
      aux_sym__decimal_literal,
  [5039] = 2,
    ACTIONS(24), 1,
      anon_sym_LPAREN,
    STATE(233), 1,
      sym_assignment_tuple,
  [5046] = 2,
    ACTIONS(681), 1,
      aux_sym_delete_statement_token1,
    ACTIONS(683), 1,
      aux_sym_insert_statement_token1,
  [5053] = 2,
    ACTIONS(685), 1,
      sym__dec_digit,
    STATE(81), 1,
      aux_sym__decimal_literal,
  [5060] = 1,
    ACTIONS(687), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5065] = 2,
    ACTIONS(689), 1,
      sym__dec_digit,
    STATE(85), 1,
      aux_sym__decimal_literal,
  [5072] = 2,
    ACTIONS(478), 1,
      aux_sym_where_spec_token1,
    STATE(88), 1,
      sym_where_spec,
  [5079] = 2,
    ACTIONS(691), 1,
      sym_object_name,
    STATE(102), 1,
      sym_order_spec_element,
  [5086] = 1,
    ACTIONS(693), 1,
      aux_sym__string_literal_token2,
  [5090] = 1,
    ACTIONS(695), 1,
      anon_sym_LPAREN,
  [5094] = 1,
    ACTIONS(697), 1,
      anon_sym_DASH,
  [5098] = 1,
    ACTIONS(699), 1,
      anon_sym_DOT,
  [5102] = 1,
    ACTIONS(701), 1,
      sym__dquote,
  [5106] = 1,
    ACTIONS(703), 1,
      anon_sym_DOT,
  [5110] = 1,
    ACTIONS(705), 1,
      aux_sym__string_literal_token1,
  [5114] = 1,
    ACTIONS(707), 1,
      anon_sym_LPAREN,
  [5118] = 1,
    ACTIONS(709), 1,
      anon_sym_DOT,
  [5122] = 1,
    ACTIONS(711), 1,
      aux_sym_select_statement_token6,
  [5126] = 1,
    ACTIONS(713), 1,
      aux_sym_if_not_exist_token1,
  [5130] = 1,
    ACTIONS(715), 1,
      anon_sym_RPAREN,
  [5134] = 1,
    ACTIONS(717), 1,
      anon_sym_LPAREN,
  [5138] = 1,
    ACTIONS(719), 1,
      sym__dquote,
  [5142] = 1,
    ACTIONS(721), 1,
      anon_sym_RPAREN,
  [5146] = 1,
    ACTIONS(723), 1,
      anon_sym_RPAREN,
  [5150] = 1,
    ACTIONS(725), 1,
      anon_sym_RPAREN,
  [5154] = 1,
    ACTIONS(727), 1,
      anon_sym_RPAREN,
  [5158] = 1,
    ACTIONS(729), 1,
      sym_object_name,
  [5162] = 1,
    ACTIONS(731), 1,
      sym_object_name,
  [5166] = 1,
    ACTIONS(733), 1,
      anon_sym_LPAREN,
  [5170] = 1,
    ACTIONS(735), 1,
      aux_sym_select_statement_token6,
  [5174] = 1,
    ACTIONS(737), 1,
      sym_object_name,
  [5178] = 1,
    ACTIONS(739), 1,
      aux_sym_select_statement_token6,
  [5182] = 1,
    ACTIONS(741), 1,
      aux_sym_create_index_token3,
  [5186] = 1,
    ACTIONS(743), 1,
      sym__hex_4digit,
  [5190] = 1,
    ACTIONS(745), 1,
      aux_sym_if_exist_token2,
  [5194] = 1,
    ACTIONS(747), 1,
      sym_object_name,
  [5198] = 1,
    ACTIONS(749), 1,
      sym__hex_4digit,
  [5202] = 1,
    ACTIONS(751), 1,
      sym__hex_digit,
  [5206] = 1,
    ACTIONS(753), 1,
      anon_sym_DOT,
  [5210] = 1,
    ACTIONS(755), 1,
      anon_sym_LPAREN,
  [5214] = 1,
    ACTIONS(757), 1,
      anon_sym_RPAREN,
  [5218] = 1,
    ACTIONS(759), 1,
      anon_sym_RPAREN,
  [5222] = 1,
    ACTIONS(761), 1,
      anon_sym_DASH,
  [5226] = 1,
    ACTIONS(763), 1,
      anon_sym_LPAREN,
  [5230] = 1,
    ACTIONS(765), 1,
      sym__hex_4digit,
  [5234] = 1,
    ACTIONS(767), 1,
      aux_sym_select_statement_token6,
  [5238] = 1,
    ACTIONS(769), 1,
      anon_sym_RPAREN,
  [5242] = 1,
    ACTIONS(771), 1,
      sym_object_name,
  [5246] = 1,
    ACTIONS(773), 1,
      anon_sym_RPAREN,
  [5250] = 1,
    ACTIONS(775), 1,
      anon_sym_RPAREN,
  [5254] = 1,
    ACTIONS(777), 1,
      anon_sym_RPAREN,
  [5258] = 1,
    ACTIONS(779), 1,
      anon_sym_RPAREN,
  [5262] = 1,
    ACTIONS(771), 1,
      anon_sym_STAR,
  [5266] = 1,
    ACTIONS(781), 1,
      aux_sym_select_statement_token6,
  [5270] = 1,
    ACTIONS(783), 1,
      aux_sym_order_spec_token2,
  [5274] = 1,
    ACTIONS(785), 1,
      aux_sym_select_statement_token6,
  [5278] = 1,
    ACTIONS(787), 1,
      anon_sym_DASH,
  [5282] = 1,
    ACTIONS(789), 1,
      anon_sym_DOT,
  [5286] = 1,
    ACTIONS(615), 1,
      anon_sym_RBRACK,
  [5290] = 1,
    ACTIONS(791), 1,
      anon_sym_RPAREN,
  [5294] = 1,
    ACTIONS(793), 1,
      anon_sym_RPAREN,
  [5298] = 1,
    ACTIONS(795), 1,
      anon_sym_LPAREN,
  [5302] = 1,
    ACTIONS(797), 1,
      anon_sym_LPAREN,
  [5306] = 1,
    ACTIONS(799), 1,
      anon_sym_LPAREN,
  [5310] = 1,
    ACTIONS(801), 1,
      aux_sym_insert_statement_token2,
  [5314] = 1,
    ACTIONS(803), 1,
      anon_sym_RPAREN,
  [5318] = 1,
    ACTIONS(805), 1,
      anon_sym_LPAREN,
  [5322] = 1,
    ACTIONS(807), 1,
      anon_sym_DOT,
  [5326] = 1,
    ACTIONS(809), 1,
      sym__hex_4digit,
  [5330] = 1,
    ACTIONS(811), 1,
      anon_sym_RPAREN,
  [5334] = 1,
    ACTIONS(813), 1,
      sym_object_name,
  [5338] = 1,
    ACTIONS(815), 1,
      anon_sym_COLON,
  [5342] = 1,
    ACTIONS(817), 1,
      sym_object_name,
  [5346] = 1,
    ACTIONS(819), 1,
      anon_sym_RPAREN,
  [5350] = 1,
    ACTIONS(821), 1,
      sym_object_name,
  [5354] = 1,
    ACTIONS(823), 1,
      sym__hex_4digit,
  [5358] = 1,
    ACTIONS(825), 1,
      sym_object_name,
  [5362] = 1,
    ACTIONS(827), 1,
      sym__dquote,
  [5366] = 1,
    ACTIONS(829), 1,
      sym__hex_4digit,
  [5370] = 1,
    ACTIONS(831), 1,
      anon_sym_LPAREN,
  [5374] = 1,
    ACTIONS(833), 1,
      aux_sym_begin_batch_token4,
  [5378] = 1,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
  [5382] = 1,
    ACTIONS(835), 1,
      sym_object_name,
  [5386] = 1,
    ACTIONS(837), 1,
      anon_sym_SQUOTE,
  [5390] = 1,
    ACTIONS(837), 1,
      anon_sym_DOLLAR_DOLLAR,
  [5394] = 1,
    ACTIONS(839), 1,
      sym_object_name,
  [5398] = 1,
    ACTIONS(841), 1,
      anon_sym_DOT,
  [5402] = 1,
    ACTIONS(843), 1,
      anon_sym_LPAREN,
  [5406] = 1,
    ACTIONS(845), 1,
      aux_sym_if_exist_token2,
  [5410] = 1,
    ACTIONS(847), 1,
      aux_sym_create_index_token3,
  [5414] = 1,
    ACTIONS(849), 1,
      aux_sym_if_not_exist_token1,
  [5418] = 1,
    ACTIONS(851), 1,
      anon_sym_DASH,
  [5422] = 1,
    ACTIONS(853), 1,
      aux_sym_if_exist_token2,
  [5426] = 1,
    ACTIONS(855), 1,
      sym__dquote,
  [5430] = 1,
    ACTIONS(857), 1,
      sym_object_name,
  [5434] = 1,
    ACTIONS(859), 1,
      anon_sym_DOT,
  [5438] = 1,
    ACTIONS(861), 1,
      ts_builtin_sym_end,
  [5442] = 1,
    ACTIONS(863), 1,
      aux_sym_select_statement_token6,
  [5446] = 1,
    ACTIONS(865), 1,
      aux_sym_create_index_token2,
  [5450] = 1,
    ACTIONS(867), 1,
      aux_sym_create_index_token2,
  [5454] = 1,
    ACTIONS(869), 1,
      anon_sym_DOT,
  [5458] = 1,
    ACTIONS(871), 1,
      anon_sym_EQ,
  [5462] = 1,
    ACTIONS(873), 1,
      aux_sym_insert_statement_token2,
  [5466] = 1,
    ACTIONS(230), 1,
      anon_sym_DOT,
  [5470] = 1,
    ACTIONS(875), 1,
      sym_object_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 32,
  [SMALL_STATE(4)] = 89,
  [SMALL_STATE(5)] = 122,
  [SMALL_STATE(6)] = 155,
  [SMALL_STATE(7)] = 185,
  [SMALL_STATE(8)] = 213,
  [SMALL_STATE(9)] = 267,
  [SMALL_STATE(10)] = 295,
  [SMALL_STATE(11)] = 323,
  [SMALL_STATE(12)] = 353,
  [SMALL_STATE(13)] = 378,
  [SMALL_STATE(14)] = 402,
  [SMALL_STATE(15)] = 426,
  [SMALL_STATE(16)] = 450,
  [SMALL_STATE(17)] = 501,
  [SMALL_STATE(18)] = 546,
  [SMALL_STATE(19)] = 588,
  [SMALL_STATE(20)] = 628,
  [SMALL_STATE(21)] = 670,
  [SMALL_STATE(22)] = 714,
  [SMALL_STATE(23)] = 754,
  [SMALL_STATE(24)] = 796,
  [SMALL_STATE(25)] = 837,
  [SMALL_STATE(26)] = 878,
  [SMALL_STATE(27)] = 919,
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
  [SMALL_STATE(38)] = 1303,
  [SMALL_STATE(39)] = 1333,
  [SMALL_STATE(40)] = 1355,
  [SMALL_STATE(41)] = 1393,
  [SMALL_STATE(42)] = 1423,
  [SMALL_STATE(43)] = 1461,
  [SMALL_STATE(44)] = 1499,
  [SMALL_STATE(45)] = 1537,
  [SMALL_STATE(46)] = 1567,
  [SMALL_STATE(47)] = 1605,
  [SMALL_STATE(48)] = 1622,
  [SMALL_STATE(49)] = 1643,
  [SMALL_STATE(50)] = 1660,
  [SMALL_STATE(51)] = 1677,
  [SMALL_STATE(52)] = 1698,
  [SMALL_STATE(53)] = 1715,
  [SMALL_STATE(54)] = 1732,
  [SMALL_STATE(55)] = 1753,
  [SMALL_STATE(56)] = 1770,
  [SMALL_STATE(57)] = 1787,
  [SMALL_STATE(58)] = 1804,
  [SMALL_STATE(59)] = 1821,
  [SMALL_STATE(60)] = 1842,
  [SMALL_STATE(61)] = 1863,
  [SMALL_STATE(62)] = 1880,
  [SMALL_STATE(63)] = 1897,
  [SMALL_STATE(64)] = 1921,
  [SMALL_STATE(65)] = 1945,
  [SMALL_STATE(66)] = 1969,
  [SMALL_STATE(67)] = 1993,
  [SMALL_STATE(68)] = 2017,
  [SMALL_STATE(69)] = 2041,
  [SMALL_STATE(70)] = 2065,
  [SMALL_STATE(71)] = 2083,
  [SMALL_STATE(72)] = 2099,
  [SMALL_STATE(73)] = 2117,
  [SMALL_STATE(74)] = 2135,
  [SMALL_STATE(75)] = 2159,
  [SMALL_STATE(76)] = 2179,
  [SMALL_STATE(77)] = 2200,
  [SMALL_STATE(78)] = 2215,
  [SMALL_STATE(79)] = 2234,
  [SMALL_STATE(80)] = 2253,
  [SMALL_STATE(81)] = 2272,
  [SMALL_STATE(82)] = 2293,
  [SMALL_STATE(83)] = 2314,
  [SMALL_STATE(84)] = 2333,
  [SMALL_STATE(85)] = 2352,
  [SMALL_STATE(86)] = 2373,
  [SMALL_STATE(87)] = 2388,
  [SMALL_STATE(88)] = 2407,
  [SMALL_STATE(89)] = 2426,
  [SMALL_STATE(90)] = 2445,
  [SMALL_STATE(91)] = 2466,
  [SMALL_STATE(92)] = 2484,
  [SMALL_STATE(93)] = 2502,
  [SMALL_STATE(94)] = 2520,
  [SMALL_STATE(95)] = 2538,
  [SMALL_STATE(96)] = 2552,
  [SMALL_STATE(97)] = 2566,
  [SMALL_STATE(98)] = 2584,
  [SMALL_STATE(99)] = 2602,
  [SMALL_STATE(100)] = 2620,
  [SMALL_STATE(101)] = 2638,
  [SMALL_STATE(102)] = 2652,
  [SMALL_STATE(103)] = 2666,
  [SMALL_STATE(104)] = 2684,
  [SMALL_STATE(105)] = 2702,
  [SMALL_STATE(106)] = 2720,
  [SMALL_STATE(107)] = 2738,
  [SMALL_STATE(108)] = 2753,
  [SMALL_STATE(109)] = 2778,
  [SMALL_STATE(110)] = 2791,
  [SMALL_STATE(111)] = 2816,
  [SMALL_STATE(112)] = 2841,
  [SMALL_STATE(113)] = 2856,
  [SMALL_STATE(114)] = 2881,
  [SMALL_STATE(115)] = 2894,
  [SMALL_STATE(116)] = 2907,
  [SMALL_STATE(117)] = 2932,
  [SMALL_STATE(118)] = 2945,
  [SMALL_STATE(119)] = 2960,
  [SMALL_STATE(120)] = 2972,
  [SMALL_STATE(121)] = 2984,
  [SMALL_STATE(122)] = 2996,
  [SMALL_STATE(123)] = 3008,
  [SMALL_STATE(124)] = 3020,
  [SMALL_STATE(125)] = 3032,
  [SMALL_STATE(126)] = 3044,
  [SMALL_STATE(127)] = 3056,
  [SMALL_STATE(128)] = 3068,
  [SMALL_STATE(129)] = 3080,
  [SMALL_STATE(130)] = 3092,
  [SMALL_STATE(131)] = 3104,
  [SMALL_STATE(132)] = 3116,
  [SMALL_STATE(133)] = 3128,
  [SMALL_STATE(134)] = 3140,
  [SMALL_STATE(135)] = 3152,
  [SMALL_STATE(136)] = 3164,
  [SMALL_STATE(137)] = 3176,
  [SMALL_STATE(138)] = 3188,
  [SMALL_STATE(139)] = 3200,
  [SMALL_STATE(140)] = 3212,
  [SMALL_STATE(141)] = 3240,
  [SMALL_STATE(142)] = 3252,
  [SMALL_STATE(143)] = 3274,
  [SMALL_STATE(144)] = 3286,
  [SMALL_STATE(145)] = 3298,
  [SMALL_STATE(146)] = 3310,
  [SMALL_STATE(147)] = 3322,
  [SMALL_STATE(148)] = 3334,
  [SMALL_STATE(149)] = 3346,
  [SMALL_STATE(150)] = 3358,
  [SMALL_STATE(151)] = 3370,
  [SMALL_STATE(152)] = 3382,
  [SMALL_STATE(153)] = 3394,
  [SMALL_STATE(154)] = 3408,
  [SMALL_STATE(155)] = 3420,
  [SMALL_STATE(156)] = 3442,
  [SMALL_STATE(157)] = 3457,
  [SMALL_STATE(158)] = 3468,
  [SMALL_STATE(159)] = 3493,
  [SMALL_STATE(160)] = 3508,
  [SMALL_STATE(161)] = 3530,
  [SMALL_STATE(162)] = 3550,
  [SMALL_STATE(163)] = 3570,
  [SMALL_STATE(164)] = 3592,
  [SMALL_STATE(165)] = 3609,
  [SMALL_STATE(166)] = 3628,
  [SMALL_STATE(167)] = 3639,
  [SMALL_STATE(168)] = 3656,
  [SMALL_STATE(169)] = 3675,
  [SMALL_STATE(170)] = 3686,
  [SMALL_STATE(171)] = 3705,
  [SMALL_STATE(172)] = 3715,
  [SMALL_STATE(173)] = 3731,
  [SMALL_STATE(174)] = 3747,
  [SMALL_STATE(175)] = 3757,
  [SMALL_STATE(176)] = 3767,
  [SMALL_STATE(177)] = 3783,
  [SMALL_STATE(178)] = 3797,
  [SMALL_STATE(179)] = 3813,
  [SMALL_STATE(180)] = 3829,
  [SMALL_STATE(181)] = 3845,
  [SMALL_STATE(182)] = 3861,
  [SMALL_STATE(183)] = 3871,
  [SMALL_STATE(184)] = 3887,
  [SMALL_STATE(185)] = 3903,
  [SMALL_STATE(186)] = 3915,
  [SMALL_STATE(187)] = 3931,
  [SMALL_STATE(188)] = 3947,
  [SMALL_STATE(189)] = 3963,
  [SMALL_STATE(190)] = 3974,
  [SMALL_STATE(191)] = 3987,
  [SMALL_STATE(192)] = 4000,
  [SMALL_STATE(193)] = 4013,
  [SMALL_STATE(194)] = 4022,
  [SMALL_STATE(195)] = 4035,
  [SMALL_STATE(196)] = 4048,
  [SMALL_STATE(197)] = 4055,
  [SMALL_STATE(198)] = 4068,
  [SMALL_STATE(199)] = 4081,
  [SMALL_STATE(200)] = 4094,
  [SMALL_STATE(201)] = 4107,
  [SMALL_STATE(202)] = 4120,
  [SMALL_STATE(203)] = 4133,
  [SMALL_STATE(204)] = 4142,
  [SMALL_STATE(205)] = 4155,
  [SMALL_STATE(206)] = 4166,
  [SMALL_STATE(207)] = 4179,
  [SMALL_STATE(208)] = 4192,
  [SMALL_STATE(209)] = 4202,
  [SMALL_STATE(210)] = 4212,
  [SMALL_STATE(211)] = 4220,
  [SMALL_STATE(212)] = 4230,
  [SMALL_STATE(213)] = 4240,
  [SMALL_STATE(214)] = 4250,
  [SMALL_STATE(215)] = 4260,
  [SMALL_STATE(216)] = 4270,
  [SMALL_STATE(217)] = 4280,
  [SMALL_STATE(218)] = 4290,
  [SMALL_STATE(219)] = 4300,
  [SMALL_STATE(220)] = 4310,
  [SMALL_STATE(221)] = 4320,
  [SMALL_STATE(222)] = 4330,
  [SMALL_STATE(223)] = 4340,
  [SMALL_STATE(224)] = 4350,
  [SMALL_STATE(225)] = 4360,
  [SMALL_STATE(226)] = 4368,
  [SMALL_STATE(227)] = 4378,
  [SMALL_STATE(228)] = 4388,
  [SMALL_STATE(229)] = 4396,
  [SMALL_STATE(230)] = 4404,
  [SMALL_STATE(231)] = 4414,
  [SMALL_STATE(232)] = 4424,
  [SMALL_STATE(233)] = 4434,
  [SMALL_STATE(234)] = 4444,
  [SMALL_STATE(235)] = 4454,
  [SMALL_STATE(236)] = 4464,
  [SMALL_STATE(237)] = 4474,
  [SMALL_STATE(238)] = 4484,
  [SMALL_STATE(239)] = 4494,
  [SMALL_STATE(240)] = 4504,
  [SMALL_STATE(241)] = 4514,
  [SMALL_STATE(242)] = 4524,
  [SMALL_STATE(243)] = 4534,
  [SMALL_STATE(244)] = 4544,
  [SMALL_STATE(245)] = 4554,
  [SMALL_STATE(246)] = 4564,
  [SMALL_STATE(247)] = 4574,
  [SMALL_STATE(248)] = 4584,
  [SMALL_STATE(249)] = 4594,
  [SMALL_STATE(250)] = 4604,
  [SMALL_STATE(251)] = 4614,
  [SMALL_STATE(252)] = 4624,
  [SMALL_STATE(253)] = 4634,
  [SMALL_STATE(254)] = 4644,
  [SMALL_STATE(255)] = 4650,
  [SMALL_STATE(256)] = 4660,
  [SMALL_STATE(257)] = 4670,
  [SMALL_STATE(258)] = 4680,
  [SMALL_STATE(259)] = 4690,
  [SMALL_STATE(260)] = 4700,
  [SMALL_STATE(261)] = 4710,
  [SMALL_STATE(262)] = 4720,
  [SMALL_STATE(263)] = 4727,
  [SMALL_STATE(264)] = 4734,
  [SMALL_STATE(265)] = 4741,
  [SMALL_STATE(266)] = 4746,
  [SMALL_STATE(267)] = 4751,
  [SMALL_STATE(268)] = 4758,
  [SMALL_STATE(269)] = 4763,
  [SMALL_STATE(270)] = 4768,
  [SMALL_STATE(271)] = 4773,
  [SMALL_STATE(272)] = 4780,
  [SMALL_STATE(273)] = 4787,
  [SMALL_STATE(274)] = 4794,
  [SMALL_STATE(275)] = 4799,
  [SMALL_STATE(276)] = 4804,
  [SMALL_STATE(277)] = 4809,
  [SMALL_STATE(278)] = 4816,
  [SMALL_STATE(279)] = 4821,
  [SMALL_STATE(280)] = 4826,
  [SMALL_STATE(281)] = 4833,
  [SMALL_STATE(282)] = 4840,
  [SMALL_STATE(283)] = 4845,
  [SMALL_STATE(284)] = 4850,
  [SMALL_STATE(285)] = 4855,
  [SMALL_STATE(286)] = 4862,
  [SMALL_STATE(287)] = 4867,
  [SMALL_STATE(288)] = 4872,
  [SMALL_STATE(289)] = 4877,
  [SMALL_STATE(290)] = 4884,
  [SMALL_STATE(291)] = 4891,
  [SMALL_STATE(292)] = 4896,
  [SMALL_STATE(293)] = 4903,
  [SMALL_STATE(294)] = 4908,
  [SMALL_STATE(295)] = 4913,
  [SMALL_STATE(296)] = 4918,
  [SMALL_STATE(297)] = 4925,
  [SMALL_STATE(298)] = 4930,
  [SMALL_STATE(299)] = 4937,
  [SMALL_STATE(300)] = 4944,
  [SMALL_STATE(301)] = 4951,
  [SMALL_STATE(302)] = 4958,
  [SMALL_STATE(303)] = 4965,
  [SMALL_STATE(304)] = 4972,
  [SMALL_STATE(305)] = 4979,
  [SMALL_STATE(306)] = 4984,
  [SMALL_STATE(307)] = 4991,
  [SMALL_STATE(308)] = 4996,
  [SMALL_STATE(309)] = 5001,
  [SMALL_STATE(310)] = 5008,
  [SMALL_STATE(311)] = 5013,
  [SMALL_STATE(312)] = 5020,
  [SMALL_STATE(313)] = 5025,
  [SMALL_STATE(314)] = 5032,
  [SMALL_STATE(315)] = 5039,
  [SMALL_STATE(316)] = 5046,
  [SMALL_STATE(317)] = 5053,
  [SMALL_STATE(318)] = 5060,
  [SMALL_STATE(319)] = 5065,
  [SMALL_STATE(320)] = 5072,
  [SMALL_STATE(321)] = 5079,
  [SMALL_STATE(322)] = 5086,
  [SMALL_STATE(323)] = 5090,
  [SMALL_STATE(324)] = 5094,
  [SMALL_STATE(325)] = 5098,
  [SMALL_STATE(326)] = 5102,
  [SMALL_STATE(327)] = 5106,
  [SMALL_STATE(328)] = 5110,
  [SMALL_STATE(329)] = 5114,
  [SMALL_STATE(330)] = 5118,
  [SMALL_STATE(331)] = 5122,
  [SMALL_STATE(332)] = 5126,
  [SMALL_STATE(333)] = 5130,
  [SMALL_STATE(334)] = 5134,
  [SMALL_STATE(335)] = 5138,
  [SMALL_STATE(336)] = 5142,
  [SMALL_STATE(337)] = 5146,
  [SMALL_STATE(338)] = 5150,
  [SMALL_STATE(339)] = 5154,
  [SMALL_STATE(340)] = 5158,
  [SMALL_STATE(341)] = 5162,
  [SMALL_STATE(342)] = 5166,
  [SMALL_STATE(343)] = 5170,
  [SMALL_STATE(344)] = 5174,
  [SMALL_STATE(345)] = 5178,
  [SMALL_STATE(346)] = 5182,
  [SMALL_STATE(347)] = 5186,
  [SMALL_STATE(348)] = 5190,
  [SMALL_STATE(349)] = 5194,
  [SMALL_STATE(350)] = 5198,
  [SMALL_STATE(351)] = 5202,
  [SMALL_STATE(352)] = 5206,
  [SMALL_STATE(353)] = 5210,
  [SMALL_STATE(354)] = 5214,
  [SMALL_STATE(355)] = 5218,
  [SMALL_STATE(356)] = 5222,
  [SMALL_STATE(357)] = 5226,
  [SMALL_STATE(358)] = 5230,
  [SMALL_STATE(359)] = 5234,
  [SMALL_STATE(360)] = 5238,
  [SMALL_STATE(361)] = 5242,
  [SMALL_STATE(362)] = 5246,
  [SMALL_STATE(363)] = 5250,
  [SMALL_STATE(364)] = 5254,
  [SMALL_STATE(365)] = 5258,
  [SMALL_STATE(366)] = 5262,
  [SMALL_STATE(367)] = 5266,
  [SMALL_STATE(368)] = 5270,
  [SMALL_STATE(369)] = 5274,
  [SMALL_STATE(370)] = 5278,
  [SMALL_STATE(371)] = 5282,
  [SMALL_STATE(372)] = 5286,
  [SMALL_STATE(373)] = 5290,
  [SMALL_STATE(374)] = 5294,
  [SMALL_STATE(375)] = 5298,
  [SMALL_STATE(376)] = 5302,
  [SMALL_STATE(377)] = 5306,
  [SMALL_STATE(378)] = 5310,
  [SMALL_STATE(379)] = 5314,
  [SMALL_STATE(380)] = 5318,
  [SMALL_STATE(381)] = 5322,
  [SMALL_STATE(382)] = 5326,
  [SMALL_STATE(383)] = 5330,
  [SMALL_STATE(384)] = 5334,
  [SMALL_STATE(385)] = 5338,
  [SMALL_STATE(386)] = 5342,
  [SMALL_STATE(387)] = 5346,
  [SMALL_STATE(388)] = 5350,
  [SMALL_STATE(389)] = 5354,
  [SMALL_STATE(390)] = 5358,
  [SMALL_STATE(391)] = 5362,
  [SMALL_STATE(392)] = 5366,
  [SMALL_STATE(393)] = 5370,
  [SMALL_STATE(394)] = 5374,
  [SMALL_STATE(395)] = 5378,
  [SMALL_STATE(396)] = 5382,
  [SMALL_STATE(397)] = 5386,
  [SMALL_STATE(398)] = 5390,
  [SMALL_STATE(399)] = 5394,
  [SMALL_STATE(400)] = 5398,
  [SMALL_STATE(401)] = 5402,
  [SMALL_STATE(402)] = 5406,
  [SMALL_STATE(403)] = 5410,
  [SMALL_STATE(404)] = 5414,
  [SMALL_STATE(405)] = 5418,
  [SMALL_STATE(406)] = 5422,
  [SMALL_STATE(407)] = 5426,
  [SMALL_STATE(408)] = 5430,
  [SMALL_STATE(409)] = 5434,
  [SMALL_STATE(410)] = 5438,
  [SMALL_STATE(411)] = 5442,
  [SMALL_STATE(412)] = 5446,
  [SMALL_STATE(413)] = 5450,
  [SMALL_STATE(414)] = 5454,
  [SMALL_STATE(415)] = 5458,
  [SMALL_STATE(416)] = 5462,
  [SMALL_STATE(417)] = 5466,
  [SMALL_STATE(418)] = 5470,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__decimal_literal, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__decimal_literal, 2), SHIFT_REPEAT(2),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_literal, 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_literal, 3),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 7),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 7),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 4),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 4),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 4),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 4),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_literal, 4),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 3, .production_id = 10),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hexadecimal_literal, 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__uuid, 11),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(160),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(181),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(210),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(416),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(173),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(413),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(412),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hexadecimal_literal_repeat2, 2),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hexadecimal_literal_repeat2, 2), SHIFT_REPEAT(27),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec_element, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 5),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hexadecimal_literal, 2),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relalationContainsKey, 4),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hexadecimal_literal_repeat2, 2), SHIFT_REPEAT(48),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relalationContains, 3, .production_id = 12),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 7),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2), SHIFT_REPEAT(164),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec_element, 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 9),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 8),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 5),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 6),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 6),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 7),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 8),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec_element, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_spec, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 1, .production_id = 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyspace, 1, .production_id = 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3, .production_id = 6),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyspace, 3, .production_id = 5),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 4),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ttl, 2),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2), SHIFT_REPEAT(167),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 8),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 4),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 5),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 7),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 3),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 6),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 9),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 1),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition_list, 2),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec_element, 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_values_spec, 4),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec, 3),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_condition_list_repeat1, 2), SHIFT_REPEAT(281),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 9),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 2),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_name, 1),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_condition, 3),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_not_exist, 3, .production_id = 11),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 10),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_statement, 10),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 11),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 3, .production_id = 3),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 10),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_spec, 2, .production_id = 8),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 11),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 4),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 9),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 8),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_exist, 2),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_index, 7),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 4, .production_id = 3),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 5, .production_id = 3),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_statement, 7),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 5),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_drop_index, 6, .production_id = 3),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 3),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_ttl_timestamp, 4),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_truncate, 2),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hexadecimal_literal_repeat2, 2), SHIFT_REPEAT(159),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 1),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [463] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_tuple_repeat1, 2), SHIFT_REPEAT(46),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_tuple_repeat1, 2),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 3),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_not_exist, 3, .production_id = 11),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 1),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_exist, 2),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 2),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 1),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [528] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hexadecimal_literal_repeat1, 2), SHIFT_REPEAT(351),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hexadecimal_literal_repeat1, 2),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2),
  [535] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(8),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [540] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2), SHIFT_REPEAT(18),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 1),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 2),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [559] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2), SHIFT_REPEAT(247),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_list, 1),
  [566] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2), SHIFT_REPEAT(252),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [573] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2), SHIFT_REPEAT(399),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2),
  [578] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2), SHIFT_REPEAT(285),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2),
  [583] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2), SHIFT_REPEAT(303),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_delete_column_list_repeat1, 2),
  [588] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2), SHIFT_REPEAT(36),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 2),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 2),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 2),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using_timestamp_spec, 2),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 1),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 2),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 3),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 3, .production_id = 13),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 6),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 4),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_list, 4),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_insert_column_spec, 3),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_batch, 4),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 1, .production_id = 9),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 4),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_map_repeat1, 4),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 5),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delete_column_item, 4),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 2),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_map, 5),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_set, 3),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 3),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_keys_spec, 4),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_entries_s_spec, 4),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_full_spec, 4),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_column_spec, 1),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [861] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
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
