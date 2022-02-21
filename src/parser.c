#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 178
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 74
#define ALIAS_COUNT 1
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 5

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
  sym_source_file = 42,
  sym__statement = 43,
  sym_select_statement = 44,
  sym_select_elements = 45,
  sym_select_element = 46,
  sym_function_call = 47,
  sym_function_args = 48,
  sym_constant = 49,
  sym__uuid = 50,
  sym__string_literal = 51,
  aux_sym__decimal_literal = 52,
  sym__float_literal = 53,
  sym__hexadecimal_literal = 54,
  sym_from_spec = 55,
  sym_from_spec_element = 56,
  sym_where_spec = 57,
  sym_relation_elements = 58,
  sym_relation_element = 59,
  sym_assignment_tuple = 60,
  sym_relalationContainsKey = 61,
  sym_relalationContains = 62,
  sym_order_spec = 63,
  sym_order_spec_element = 64,
  aux_sym_source_file_repeat1 = 65,
  aux_sym_select_elements_repeat1 = 66,
  aux_sym_function_args_repeat1 = 67,
  aux_sym__hexadecimal_literal_repeat1 = 68,
  aux_sym__hexadecimal_literal_repeat2 = 69,
  aux_sym_relation_elements_repeat1 = 70,
  aux_sym_relation_element_repeat1 = 71,
  aux_sym_relation_element_repeat2 = 72,
  aux_sym_assignment_tuple_repeat1 = 73,
  anon_alias_sym_CONTAINS = 74,
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
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_select_elements_repeat1] = "select_elements_repeat1",
  [aux_sym_function_args_repeat1] = "function_args_repeat1",
  [aux_sym__hexadecimal_literal_repeat1] = "_hexadecimal_literal_repeat1",
  [aux_sym__hexadecimal_literal_repeat2] = "_hexadecimal_literal_repeat2",
  [aux_sym_relation_elements_repeat1] = "relation_elements_repeat1",
  [aux_sym_relation_element_repeat1] = "relation_element_repeat1",
  [aux_sym_relation_element_repeat2] = "relation_element_repeat2",
  [aux_sym_assignment_tuple_repeat1] = "assignment_tuple_repeat1",
  [anon_alias_sym_CONTAINS] = "CONTAINS",
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
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_select_elements_repeat1] = aux_sym_select_elements_repeat1,
  [aux_sym_function_args_repeat1] = aux_sym_function_args_repeat1,
  [aux_sym__hexadecimal_literal_repeat1] = aux_sym__hexadecimal_literal_repeat1,
  [aux_sym__hexadecimal_literal_repeat2] = aux_sym__hexadecimal_literal_repeat2,
  [aux_sym_relation_elements_repeat1] = aux_sym_relation_elements_repeat1,
  [aux_sym_relation_element_repeat1] = aux_sym_relation_element_repeat1,
  [aux_sym_relation_element_repeat2] = aux_sym_relation_element_repeat2,
  [aux_sym_assignment_tuple_repeat1] = aux_sym_assignment_tuple_repeat1,
  [anon_alias_sym_CONTAINS] = anon_alias_sym_CONTAINS,
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
  [anon_alias_sym_CONTAINS] = {
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
  [3] = {.index = 3, .length = 1},
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
  [4] = {
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
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 25,
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
  [74] = 29,
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
  [136] = 113,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(83);
      if (lookahead == '$') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(110);
      if (lookahead == '(') ADVANCE(97);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == ',') ADVANCE(94);
      if (lookahead == '-') ADVANCE(101);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == '0') ADVANCE(105);
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == '<') ADVANCE(153);
      if (lookahead == '=') ADVANCE(152);
      if (lookahead == '>') ADVANCE(154);
      if (lookahead == 'X') ADVANCE(5);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(108);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(109);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(106);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(107);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(44);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(61);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(18);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(29);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(70);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(56);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(25);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(28);
      if (('C' <= lookahead && lookahead <= 'E') ||
          ('c' <= lookahead && lookahead <= 'e')) ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 1:
      if (lookahead == '$') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(111);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '-') ADVANCE(101);
      if (lookahead == '0') ADVANCE(118);
      if (lookahead == 'X') ADVANCE(125);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(126);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(143);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(147);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 2:
      if (lookahead == '$') ADVANCE(114);
      END_STATE();
    case 3:
      if (lookahead == '$') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(115);
      if (lookahead != 0) ADVANCE(116);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(110);
      if (lookahead == '(') ADVANCE(97);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == ',') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(104);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(120);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(124);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(78);
      if (lookahead == '(') ADVANCE(97);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(78);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(130);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(78);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 10:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(38);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 11:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 12:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(162);
      END_STATE();
    case 13:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(163);
      END_STATE();
    case 14:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(65);
      END_STATE();
    case 15:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 16:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(151);
      END_STATE();
    case 17:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 19:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 20:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 21:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 22:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 23:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 24:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 25:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 26:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 27:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(92);
      END_STATE();
    case 28:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(22);
      END_STATE();
    case 29:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 30:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 31:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 32:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 33:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 34:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(16);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 35:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(16);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(12);
      END_STATE();
    case 36:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 37:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 38:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 39:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 40:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 41:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 42:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(149);
      END_STATE();
    case 43:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(31);
      END_STATE();
    case 44:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 45:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 46:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 47:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 48:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 49:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 50:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 51:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 52:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 53:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 54:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 55:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 56:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 57:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 58:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 59:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(68);
      END_STATE();
    case 60:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(158);
      END_STATE();
    case 61:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(51);
      END_STATE();
    case 62:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(13);
      END_STATE();
    case 63:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(21);
      END_STATE();
    case 64:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(90);
      END_STATE();
    case 65:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(85);
      END_STATE();
    case 66:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(86);
      END_STATE();
    case 67:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(11);
      END_STATE();
    case 68:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(30);
      END_STATE();
    case 69:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(24);
      END_STATE();
    case 70:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 71:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 72:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(91);
      END_STATE();
    case 73:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 74:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(159);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(102);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 78:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 79:
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(116);
      END_STATE();
    case 80:
      if (eof) ADVANCE(83);
      if (lookahead == '$') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(110);
      if (lookahead == '(') ADVANCE(97);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == ',') ADVANCE(94);
      if (lookahead == '-') ADVANCE(101);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == '0') ADVANCE(118);
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == '<') ADVANCE(153);
      if (lookahead == '=') ADVANCE(152);
      if (lookahead == '>') ADVANCE(154);
      if (lookahead == 'X') ADVANCE(5);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(34);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(73);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(53);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(10);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(44);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(18);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(29);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(70);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(56);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(25);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(80)
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e') ADVANCE(75);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 81:
      if (eof) ADVANCE(83);
      if (lookahead == '(') ADVANCE(97);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == ',') ADVANCE(94);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(35);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(26);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(29);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(56);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(81)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 82:
      if (eof) ADVANCE(83);
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(108);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(29);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(56);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(82)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(104);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_select_statement_token1);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_select_statement_token2);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_select_statement_token2);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_select_statement_token3);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_select_statement_token3);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_select_statement_token4);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_select_statement_token5);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_select_statement_token6);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_select_element_token1);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__hex_4digit);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__hex_4digit);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__hex_digit);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'X') ADVANCE(121);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(37);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(39);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(161);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(113);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym__string_literal_token2);
      if (lookahead == '$') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(115);
      if (lookahead != 0) ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym__string_literal_token2);
      if (lookahead == '$') ADVANCE(79);
      if (lookahead != 0) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__dec_digit);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__dec_digit);
      if (lookahead == 'X') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__dec_digit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_X_SQUOTE);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_0X);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__boolean_literal);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__boolean_literal);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_object_name);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == '\'') ADVANCE(120);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(146);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(141);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(123);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(135);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(140);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(145);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(100);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(132);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(89);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(127);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(134);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(144);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(128);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(136);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(142);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(87);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(129);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(133);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(128);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(145);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_object_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(146);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_object_name);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_from_spec_token1);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_where_spec_token1);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_relation_elements_token1);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(155);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(156);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_relation_element_token1);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_relalationContainsKey_token1);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_relalationContainsKey_token2);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_order_spec_token1);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_order_spec_token2);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_order_spec_element_token1);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_order_spec_element_token2);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 80},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 80},
  [8] = {.lex_state = 80},
  [9] = {.lex_state = 80},
  [10] = {.lex_state = 80},
  [11] = {.lex_state = 80},
  [12] = {.lex_state = 80},
  [13] = {.lex_state = 80},
  [14] = {.lex_state = 80},
  [15] = {.lex_state = 80},
  [16] = {.lex_state = 81},
  [17] = {.lex_state = 81},
  [18] = {.lex_state = 81},
  [19] = {.lex_state = 81},
  [20] = {.lex_state = 81},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 82},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 80},
  [29] = {.lex_state = 82},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 81},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 81},
  [53] = {.lex_state = 81},
  [54] = {.lex_state = 9},
  [55] = {.lex_state = 81},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 81},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 81},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 80},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 7},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 80},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 7},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 80},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 80},
  [110] = {.lex_state = 80},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 81},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 81},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 81},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 80},
  [120] = {.lex_state = 7},
  [121] = {.lex_state = 80},
  [122] = {.lex_state = 80},
  [123] = {.lex_state = 81},
  [124] = {.lex_state = 80},
  [125] = {.lex_state = 7},
  [126] = {.lex_state = 81},
  [127] = {.lex_state = 81},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 81},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 81},
  [139] = {.lex_state = 80},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 80},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 80},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 7},
  [148] = {.lex_state = 80},
  [149] = {.lex_state = 80},
  [150] = {.lex_state = 80},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 80},
  [155] = {.lex_state = 3},
  [156] = {.lex_state = 80},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 7},
  [159] = {.lex_state = 80},
  [160] = {.lex_state = 80},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 80},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 7},
  [166] = {.lex_state = 80},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 80},
  [169] = {.lex_state = 7},
  [170] = {.lex_state = 7},
  [171] = {.lex_state = 4},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 80},
  [175] = {.lex_state = 80},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 112},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [aux_sym_select_statement_token1] = ACTIONS(1),
    [aux_sym_select_statement_token2] = ACTIONS(1),
    [aux_sym_select_statement_token3] = ACTIONS(1),
    [aux_sym_select_statement_token4] = ACTIONS(1),
    [aux_sym_select_statement_token5] = ACTIONS(1),
    [aux_sym_select_statement_token6] = ACTIONS(1),
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
  },
  [1] = {
    [sym_source_file] = STATE(151),
    [sym__statement] = STATE(67),
    [sym_select_statement] = STATE(91),
    [aux_sym_source_file_repeat1] = STATE(67),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_select_statement_token1] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(7), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_RPAREN,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(15), 1,
      sym__hex_4digit,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(21), 1,
      sym__dec_digit,
    ACTIONS(23), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_0X,
    ACTIONS(27), 1,
      sym_object_name,
    STATE(17), 1,
      aux_sym__decimal_literal,
    STATE(146), 1,
      sym_function_args,
    ACTIONS(11), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(100), 2,
      sym_function_call,
      sym_constant,
    STATE(21), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [51] = 13,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(15), 1,
      sym__hex_4digit,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(21), 1,
      sym__dec_digit,
    ACTIONS(23), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_0X,
    ACTIONS(27), 1,
      sym_object_name,
    STATE(17), 1,
      aux_sym__decimal_literal,
    STATE(152), 1,
      sym_function_args,
    ACTIONS(11), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(100), 2,
      sym_function_call,
      sym_constant,
    STATE(21), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [96] = 12,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(15), 1,
      sym__hex_4digit,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(21), 1,
      sym__dec_digit,
    ACTIONS(23), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_0X,
    ACTIONS(31), 1,
      sym_object_name,
    STATE(17), 1,
      aux_sym__decimal_literal,
    ACTIONS(11), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(41), 2,
      sym_function_call,
      sym_constant,
    STATE(21), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [138] = 13,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(21), 1,
      sym__dec_digit,
    ACTIONS(23), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_0X,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      sym__hex_4digit,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    STATE(17), 1,
      aux_sym__decimal_literal,
    STATE(118), 1,
      sym_constant,
    STATE(128), 1,
      sym_assignment_tuple,
    ACTIONS(35), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(21), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [182] = 12,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(15), 1,
      sym__hex_4digit,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(21), 1,
      sym__dec_digit,
    ACTIONS(23), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_0X,
    ACTIONS(41), 1,
      sym_object_name,
    STATE(17), 1,
      aux_sym__decimal_literal,
    ACTIONS(11), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(111), 2,
      sym_function_call,
      sym_constant,
    STATE(21), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [224] = 2,
    ACTIONS(45), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(43), 14,
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
  [245] = 2,
    ACTIONS(49), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(47), 14,
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
  [266] = 12,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(21), 1,
      sym__dec_digit,
    ACTIONS(23), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_0X,
    ACTIONS(37), 1,
      sym__hex_4digit,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      aux_sym_relalationContainsKey_token2,
    STATE(17), 1,
      aux_sym__decimal_literal,
    STATE(39), 1,
      sym_constant,
    ACTIONS(35), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(21), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [307] = 2,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 14,
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
  [328] = 11,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(21), 1,
      sym__dec_digit,
    ACTIONS(23), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_0X,
    ACTIONS(37), 1,
      sym__hex_4digit,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    STATE(17), 1,
      aux_sym__decimal_literal,
    STATE(118), 1,
      sym_constant,
    ACTIONS(35), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(21), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [366] = 11,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(21), 1,
      sym__dec_digit,
    ACTIONS(23), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_0X,
    ACTIONS(37), 1,
      sym__hex_4digit,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    STATE(17), 1,
      aux_sym__decimal_literal,
    STATE(41), 1,
      sym_constant,
    ACTIONS(35), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(21), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [404] = 11,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(21), 1,
      sym__dec_digit,
    ACTIONS(23), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_0X,
    ACTIONS(37), 1,
      sym__hex_4digit,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    STATE(17), 1,
      aux_sym__decimal_literal,
    STATE(61), 1,
      sym_constant,
    ACTIONS(35), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(21), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [442] = 11,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(21), 1,
      sym__dec_digit,
    ACTIONS(23), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_0X,
    ACTIONS(37), 1,
      sym__hex_4digit,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    STATE(17), 1,
      aux_sym__decimal_literal,
    STATE(40), 1,
      sym_constant,
    ACTIONS(35), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(21), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [480] = 11,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      anon_sym_DOLLAR_DOLLAR,
    ACTIONS(21), 1,
      sym__dec_digit,
    ACTIONS(23), 1,
      anon_sym_X_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_0X,
    ACTIONS(37), 1,
      sym__hex_4digit,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    STATE(17), 1,
      aux_sym__decimal_literal,
    STATE(38), 1,
      sym_constant,
    ACTIONS(35), 2,
      aux_sym_constant_token1,
      sym__boolean_literal,
    STATE(21), 4,
      sym__uuid,
      sym__string_literal,
      sym__float_literal,
      sym__hexadecimal_literal,
  [518] = 3,
    ACTIONS(59), 1,
      sym__dec_digit,
    STATE(16), 1,
      aux_sym__decimal_literal,
    ACTIONS(57), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
  [538] = 4,
    ACTIONS(64), 1,
      anon_sym_DOT,
    ACTIONS(66), 1,
      sym__dec_digit,
    STATE(16), 1,
      aux_sym__decimal_literal,
    ACTIONS(62), 10,
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
  [560] = 4,
    ACTIONS(66), 1,
      sym__dec_digit,
    ACTIONS(70), 1,
      anon_sym_DOT,
    STATE(16), 1,
      aux_sym__decimal_literal,
    ACTIONS(68), 10,
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
  [582] = 3,
    ACTIONS(66), 1,
      sym__dec_digit,
    STATE(16), 1,
      aux_sym__decimal_literal,
    ACTIONS(72), 10,
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
  [601] = 3,
    ACTIONS(66), 1,
      sym__dec_digit,
    STATE(16), 1,
      aux_sym__decimal_literal,
    ACTIONS(74), 10,
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
  [620] = 1,
    ACTIONS(62), 10,
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
  [633] = 1,
    ACTIONS(76), 10,
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
  [646] = 1,
    ACTIONS(78), 10,
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
  [659] = 1,
    ACTIONS(80), 10,
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
  [672] = 3,
    ACTIONS(84), 1,
      sym__hex_digit,
    STATE(25), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(82), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
  [688] = 7,
    ACTIONS(89), 1,
      aux_sym_select_statement_token4,
    ACTIONS(91), 1,
      aux_sym_select_statement_token5,
    ACTIONS(93), 1,
      aux_sym_where_spec_token1,
    ACTIONS(95), 1,
      aux_sym_order_spec_token1,
    STATE(47), 1,
      sym_where_spec,
    STATE(65), 1,
      sym_order_spec,
    ACTIONS(87), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
  [712] = 7,
    ACTIONS(93), 1,
      aux_sym_where_spec_token1,
    ACTIONS(95), 1,
      aux_sym_order_spec_token1,
    ACTIONS(99), 1,
      aux_sym_select_statement_token4,
    ACTIONS(101), 1,
      aux_sym_select_statement_token5,
    STATE(51), 1,
      sym_where_spec,
    STATE(68), 1,
      sym_order_spec,
    ACTIONS(97), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
  [736] = 6,
    ACTIONS(103), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(111), 1,
      aux_sym_relation_element_token1,
    ACTIONS(113), 1,
      aux_sym_relalationContainsKey_token1,
    ACTIONS(109), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(107), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [758] = 3,
    ACTIONS(117), 1,
      sym__hex_digit,
    STATE(25), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(115), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
  [774] = 7,
    ACTIONS(93), 1,
      aux_sym_where_spec_token1,
    ACTIONS(95), 1,
      aux_sym_order_spec_token1,
    ACTIONS(121), 1,
      aux_sym_select_statement_token4,
    ACTIONS(123), 1,
      aux_sym_select_statement_token5,
    STATE(49), 1,
      sym_where_spec,
    STATE(64), 1,
      sym_order_spec,
    ACTIONS(119), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
  [798] = 3,
    ACTIONS(127), 1,
      aux_sym_relation_elements_token1,
    STATE(32), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(125), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      aux_sym_order_spec_token1,
  [813] = 3,
    ACTIONS(131), 1,
      aux_sym_relation_elements_token1,
    STATE(32), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(129), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      aux_sym_order_spec_token1,
  [828] = 3,
    ACTIONS(127), 1,
      aux_sym_relation_elements_token1,
    STATE(31), 1,
      aux_sym_relation_elements_repeat1,
    ACTIONS(134), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      aux_sym_order_spec_token1,
  [843] = 2,
    ACTIONS(138), 1,
      anon_sym_DOT,
    ACTIONS(136), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      aux_sym_where_spec_token1,
      aux_sym_order_spec_token1,
  [856] = 1,
    ACTIONS(140), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      aux_sym_where_spec_token1,
      aux_sym_order_spec_token1,
  [866] = 7,
    ACTIONS(142), 1,
      aux_sym_select_statement_token2,
    ACTIONS(144), 1,
      aux_sym_select_statement_token3,
    ACTIONS(146), 1,
      anon_sym_STAR,
    ACTIONS(148), 1,
      sym_object_name,
    STATE(79), 1,
      sym_function_call,
    STATE(109), 1,
      sym_select_element,
    STATE(124), 1,
      sym_select_elements,
  [888] = 1,
    ACTIONS(129), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
  [898] = 1,
    ACTIONS(150), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
  [908] = 1,
    ACTIONS(152), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
  [918] = 1,
    ACTIONS(154), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
  [928] = 1,
    ACTIONS(156), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
  [938] = 1,
    ACTIONS(158), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
  [948] = 1,
    ACTIONS(160), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      aux_sym_where_spec_token1,
      aux_sym_order_spec_token1,
  [958] = 1,
    ACTIONS(162), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
  [968] = 6,
    ACTIONS(164), 1,
      anon_sym_LPAREN,
    ACTIONS(166), 1,
      sym_object_name,
    STATE(33), 1,
      sym_relation_element,
    STATE(60), 1,
      sym_relation_elements,
    STATE(77), 1,
      sym_function_call,
    STATE(42), 2,
      sym_relalationContainsKey,
      sym_relalationContains,
  [988] = 1,
    ACTIONS(168), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
  [998] = 5,
    ACTIONS(95), 1,
      aux_sym_order_spec_token1,
    ACTIONS(99), 1,
      aux_sym_select_statement_token4,
    ACTIONS(101), 1,
      aux_sym_select_statement_token5,
    STATE(68), 1,
      sym_order_spec,
    ACTIONS(97), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
  [1016] = 2,
    ACTIONS(172), 2,
      aux_sym_order_spec_element_token1,
      aux_sym_order_spec_element_token2,
    ACTIONS(170), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
  [1028] = 5,
    ACTIONS(95), 1,
      aux_sym_order_spec_token1,
    ACTIONS(176), 1,
      aux_sym_select_statement_token4,
    ACTIONS(178), 1,
      aux_sym_select_statement_token5,
    STATE(66), 1,
      sym_order_spec,
    ACTIONS(174), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
  [1046] = 1,
    ACTIONS(180), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      aux_sym_relation_elements_token1,
      aux_sym_order_spec_token1,
  [1056] = 5,
    ACTIONS(95), 1,
      aux_sym_order_spec_token1,
    ACTIONS(121), 1,
      aux_sym_select_statement_token4,
    ACTIONS(123), 1,
      aux_sym_select_statement_token5,
    STATE(64), 1,
      sym_order_spec,
    ACTIONS(119), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
  [1074] = 4,
    ACTIONS(66), 1,
      sym__dec_digit,
    ACTIONS(178), 1,
      aux_sym_select_statement_token5,
    STATE(16), 1,
      aux_sym__decimal_literal,
    ACTIONS(174), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
  [1089] = 4,
    ACTIONS(66), 1,
      sym__dec_digit,
    ACTIONS(123), 1,
      aux_sym_select_statement_token5,
    STATE(16), 1,
      aux_sym__decimal_literal,
    ACTIONS(119), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
  [1104] = 6,
    ACTIONS(146), 1,
      anon_sym_STAR,
    ACTIONS(148), 1,
      sym_object_name,
    ACTIONS(182), 1,
      aux_sym_select_statement_token3,
    STATE(79), 1,
      sym_function_call,
    STATE(109), 1,
      sym_select_element,
    STATE(139), 1,
      sym_select_elements,
  [1123] = 4,
    ACTIONS(66), 1,
      sym__dec_digit,
    ACTIONS(186), 1,
      aux_sym_select_statement_token5,
    STATE(16), 1,
      aux_sym__decimal_literal,
    ACTIONS(184), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
  [1138] = 2,
    ACTIONS(190), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(188), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_relation_element_token1,
  [1149] = 5,
    ACTIONS(164), 1,
      anon_sym_LPAREN,
    ACTIONS(166), 1,
      sym_object_name,
    STATE(37), 1,
      sym_relation_element,
    STATE(77), 1,
      sym_function_call,
    STATE(42), 2,
      sym_relalationContainsKey,
      sym_relalationContains,
  [1166] = 4,
    ACTIONS(66), 1,
      sym__dec_digit,
    ACTIONS(194), 1,
      aux_sym_select_statement_token5,
    STATE(16), 1,
      aux_sym__decimal_literal,
    ACTIONS(192), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
  [1181] = 2,
    ACTIONS(198), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(196), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_relation_element_token1,
  [1192] = 1,
    ACTIONS(200), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
      aux_sym_order_spec_token1,
  [1201] = 6,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 1,
      anon_sym_COMMA,
    ACTIONS(204), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      aux_sym_assignment_tuple_repeat1,
    STATE(83), 1,
      aux_sym_relation_element_repeat2,
    STATE(84), 1,
      sym_assignment_tuple,
  [1220] = 4,
    ACTIONS(66), 1,
      sym__dec_digit,
    ACTIONS(208), 1,
      aux_sym_select_statement_token5,
    STATE(16), 1,
      aux_sym__decimal_literal,
    ACTIONS(206), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
  [1235] = 3,
    ACTIONS(210), 1,
      sym__hex_digit,
    STATE(63), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(82), 3,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1247] = 3,
    ACTIONS(176), 1,
      aux_sym_select_statement_token4,
    ACTIONS(178), 1,
      aux_sym_select_statement_token5,
    ACTIONS(174), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
  [1259] = 3,
    ACTIONS(99), 1,
      aux_sym_select_statement_token4,
    ACTIONS(101), 1,
      aux_sym_select_statement_token5,
    ACTIONS(97), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
  [1271] = 3,
    ACTIONS(186), 1,
      aux_sym_select_statement_token5,
    ACTIONS(213), 1,
      aux_sym_select_statement_token4,
    ACTIONS(184), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
  [1283] = 4,
    ACTIONS(5), 1,
      aux_sym_select_statement_token1,
    ACTIONS(215), 1,
      ts_builtin_sym_end,
    STATE(91), 1,
      sym_select_statement,
    STATE(76), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
  [1297] = 3,
    ACTIONS(121), 1,
      aux_sym_select_statement_token4,
    ACTIONS(123), 1,
      aux_sym_select_statement_token5,
    ACTIONS(119), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
  [1309] = 5,
    ACTIONS(146), 1,
      anon_sym_STAR,
    ACTIONS(217), 1,
      sym_object_name,
    STATE(79), 1,
      sym_function_call,
    STATE(109), 1,
      sym_select_element,
    STATE(139), 1,
      sym_select_elements,
  [1325] = 2,
    ACTIONS(221), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(219), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1335] = 1,
    ACTIONS(223), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
  [1343] = 4,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(227), 1,
      anon_sym_DOT,
    ACTIONS(229), 1,
      aux_sym_select_element_token1,
    ACTIONS(225), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [1357] = 1,
    ACTIONS(231), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
      aux_sym_select_statement_token4,
      aux_sym_select_statement_token5,
  [1365] = 3,
    ACTIONS(233), 1,
      sym__hex_digit,
    STATE(63), 1,
      aux_sym__hexadecimal_literal_repeat2,
    ACTIONS(115), 3,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1377] = 5,
    ACTIONS(146), 1,
      anon_sym_STAR,
    ACTIONS(217), 1,
      sym_object_name,
    STATE(79), 1,
      sym_function_call,
    STATE(109), 1,
      sym_select_element,
    STATE(122), 1,
      sym_select_elements,
  [1393] = 4,
    ACTIONS(235), 1,
      ts_builtin_sym_end,
    ACTIONS(237), 1,
      aux_sym_select_statement_token1,
    STATE(91), 1,
      sym_select_statement,
    STATE(76), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
  [1407] = 2,
    ACTIONS(242), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(240), 3,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1417] = 4,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 1,
      anon_sym_COMMA,
    ACTIONS(246), 1,
      anon_sym_RPAREN,
    STATE(104), 1,
      aux_sym_function_args_repeat1,
  [1430] = 2,
    ACTIONS(229), 1,
      aux_sym_select_element_token1,
    ACTIONS(225), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [1438] = 3,
    ACTIONS(248), 1,
      anon_sym_COMMA,
    ACTIONS(250), 1,
      anon_sym_RPAREN,
    STATE(88), 1,
      aux_sym_relation_element_repeat2,
  [1448] = 3,
    ACTIONS(252), 1,
      anon_sym_COMMA,
    ACTIONS(255), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      aux_sym_relation_element_repeat2,
  [1458] = 3,
    ACTIONS(257), 1,
      anon_sym_COMMA,
    ACTIONS(259), 1,
      anon_sym_RPAREN,
    STATE(108), 1,
      aux_sym_assignment_tuple_repeat1,
  [1468] = 3,
    ACTIONS(248), 1,
      anon_sym_COMMA,
    ACTIONS(259), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      aux_sym_relation_element_repeat2,
  [1478] = 3,
    ACTIONS(248), 1,
      anon_sym_COMMA,
    ACTIONS(259), 1,
      anon_sym_RPAREN,
    STATE(101), 1,
      aux_sym_relation_element_repeat2,
  [1488] = 1,
    ACTIONS(174), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
  [1494] = 3,
    ACTIONS(261), 1,
      anon_sym_COMMA,
    ACTIONS(263), 1,
      anon_sym_RPAREN,
    STATE(103), 1,
      aux_sym_relation_element_repeat1,
  [1504] = 3,
    ACTIONS(248), 1,
      anon_sym_COMMA,
    ACTIONS(265), 1,
      anon_sym_RPAREN,
    STATE(96), 1,
      aux_sym_relation_element_repeat2,
  [1514] = 3,
    ACTIONS(248), 1,
      anon_sym_COMMA,
    ACTIONS(265), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      aux_sym_relation_element_repeat2,
  [1524] = 3,
    ACTIONS(267), 1,
      sym__hex_digit,
    ACTIONS(270), 1,
      anon_sym_SQUOTE,
    STATE(89), 1,
      aux_sym__hexadecimal_literal_repeat1,
  [1534] = 2,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(272), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1542] = 2,
    ACTIONS(276), 1,
      anon_sym_SEMI,
    ACTIONS(274), 2,
      ts_builtin_sym_end,
      aux_sym_select_statement_token1,
  [1550] = 3,
    ACTIONS(272), 1,
      anon_sym_RPAREN,
    ACTIONS(278), 1,
      anon_sym_COMMA,
    STATE(92), 1,
      aux_sym_function_args_repeat1,
  [1560] = 1,
    ACTIONS(281), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
  [1566] = 1,
    ACTIONS(119), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
  [1572] = 3,
    ACTIONS(261), 1,
      anon_sym_COMMA,
    ACTIONS(283), 1,
      anon_sym_RPAREN,
    STATE(86), 1,
      aux_sym_relation_element_repeat1,
  [1582] = 3,
    ACTIONS(248), 1,
      anon_sym_COMMA,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      aux_sym_relation_element_repeat2,
  [1592] = 1,
    ACTIONS(287), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
  [1598] = 3,
    ACTIONS(217), 1,
      sym_object_name,
    STATE(79), 1,
      sym_function_call,
    STATE(121), 1,
      sym_select_element,
  [1608] = 1,
    ACTIONS(206), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
  [1614] = 3,
    ACTIONS(244), 1,
      anon_sym_COMMA,
    ACTIONS(246), 1,
      anon_sym_RPAREN,
    STATE(104), 1,
      aux_sym_function_args_repeat1,
  [1624] = 3,
    ACTIONS(248), 1,
      anon_sym_COMMA,
    ACTIONS(289), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      aux_sym_relation_element_repeat2,
  [1634] = 3,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    ACTIONS(293), 1,
      aux_sym_from_spec_token1,
    STATE(110), 1,
      aux_sym_select_elements_repeat1,
  [1644] = 3,
    ACTIONS(295), 1,
      anon_sym_COMMA,
    ACTIONS(298), 1,
      anon_sym_RPAREN,
    STATE(103), 1,
      aux_sym_relation_element_repeat1,
  [1654] = 3,
    ACTIONS(244), 1,
      anon_sym_COMMA,
    ACTIONS(300), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      aux_sym_function_args_repeat1,
  [1664] = 1,
    ACTIONS(192), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
  [1670] = 1,
    ACTIONS(184), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_statement_token1,
  [1676] = 3,
    ACTIONS(302), 1,
      sym__hex_digit,
    ACTIONS(304), 1,
      anon_sym_SQUOTE,
    STATE(89), 1,
      aux_sym__hexadecimal_literal_repeat1,
  [1686] = 3,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    ACTIONS(309), 1,
      anon_sym_RPAREN,
    STATE(108), 1,
      aux_sym_assignment_tuple_repeat1,
  [1696] = 3,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    ACTIONS(311), 1,
      aux_sym_from_spec_token1,
    STATE(102), 1,
      aux_sym_select_elements_repeat1,
  [1706] = 3,
    ACTIONS(313), 1,
      anon_sym_COMMA,
    ACTIONS(316), 1,
      aux_sym_from_spec_token1,
    STATE(110), 1,
      aux_sym_select_elements_repeat1,
  [1716] = 1,
    ACTIONS(272), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1721] = 2,
    ACTIONS(318), 1,
      sym__dec_digit,
    STATE(55), 1,
      aux_sym__decimal_literal,
  [1728] = 2,
    ACTIONS(320), 1,
      sym__hex_digit,
    STATE(29), 1,
      aux_sym__hexadecimal_literal_repeat2,
  [1735] = 1,
    ACTIONS(322), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1740] = 2,
    ACTIONS(324), 1,
      sym__dec_digit,
    STATE(19), 1,
      aux_sym__decimal_literal,
  [1747] = 1,
    ACTIONS(326), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1752] = 2,
    ACTIONS(328), 1,
      sym__dec_digit,
    STATE(18), 1,
      aux_sym__decimal_literal,
  [1759] = 1,
    ACTIONS(309), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1764] = 1,
    ACTIONS(330), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [1769] = 2,
    ACTIONS(332), 1,
      sym_object_name,
    STATE(73), 1,
      sym_order_spec_element,
  [1776] = 1,
    ACTIONS(316), 2,
      anon_sym_COMMA,
      aux_sym_from_spec_token1,
  [1781] = 2,
    ACTIONS(334), 1,
      aux_sym_from_spec_token1,
    STATE(30), 1,
      sym_from_spec,
  [1788] = 2,
    ACTIONS(336), 1,
      sym__dec_digit,
    STATE(52), 1,
      aux_sym__decimal_literal,
  [1795] = 2,
    ACTIONS(334), 1,
      aux_sym_from_spec_token1,
    STATE(26), 1,
      sym_from_spec,
  [1802] = 2,
    ACTIONS(338), 1,
      sym_object_name,
    STATE(35), 1,
      sym_from_spec_element,
  [1809] = 2,
    ACTIONS(340), 1,
      sym__dec_digit,
    STATE(58), 1,
      aux_sym__decimal_literal,
  [1816] = 2,
    ACTIONS(342), 1,
      sym__dec_digit,
    STATE(62), 1,
      aux_sym__decimal_literal,
  [1823] = 1,
    ACTIONS(255), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1828] = 1,
    ACTIONS(298), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1833] = 2,
    ACTIONS(344), 1,
      sym__dec_digit,
    STATE(20), 1,
      aux_sym__decimal_literal,
  [1840] = 1,
    ACTIONS(346), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1845] = 1,
    ACTIONS(270), 2,
      sym__hex_digit,
      anon_sym_SQUOTE,
  [1850] = 1,
    ACTIONS(348), 2,
      ts_builtin_sym_end,
      aux_sym_select_statement_token1,
  [1855] = 2,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    STATE(128), 1,
      sym_assignment_tuple,
  [1862] = 2,
    ACTIONS(302), 1,
      sym__hex_digit,
    STATE(107), 1,
      aux_sym__hexadecimal_literal_repeat1,
  [1869] = 2,
    ACTIONS(350), 1,
      sym__hex_digit,
    STATE(74), 1,
      aux_sym__hexadecimal_literal_repeat2,
  [1876] = 2,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    STATE(87), 1,
      sym_assignment_tuple,
  [1883] = 2,
    ACTIONS(352), 1,
      sym__dec_digit,
    STATE(53), 1,
      aux_sym__decimal_literal,
  [1890] = 2,
    ACTIONS(334), 1,
      aux_sym_from_spec_token1,
    STATE(27), 1,
      sym_from_spec,
  [1897] = 2,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_assignment_tuple,
  [1904] = 1,
    ACTIONS(354), 1,
      anon_sym_LPAREN,
  [1908] = 1,
    ACTIONS(356), 1,
      aux_sym_order_spec_token2,
  [1912] = 1,
    ACTIONS(358), 1,
      anon_sym_LPAREN,
  [1916] = 1,
    ACTIONS(360), 1,
      aux_sym_select_statement_token6,
  [1920] = 1,
    ACTIONS(362), 1,
      anon_sym_DASH,
  [1924] = 1,
    ACTIONS(364), 1,
      anon_sym_RPAREN,
  [1928] = 1,
    ACTIONS(366), 1,
      sym_object_name,
  [1932] = 1,
    ACTIONS(368), 1,
      aux_sym_select_statement_token6,
  [1936] = 1,
    ACTIONS(370), 1,
      aux_sym_select_statement_token6,
  [1940] = 1,
    ACTIONS(372), 1,
      sym__hex_4digit,
  [1944] = 1,
    ACTIONS(374), 1,
      ts_builtin_sym_end,
  [1948] = 1,
    ACTIONS(376), 1,
      anon_sym_RPAREN,
  [1952] = 1,
    ACTIONS(378), 1,
      anon_sym_STAR,
  [1956] = 1,
    ACTIONS(380), 1,
      aux_sym_select_statement_token6,
  [1960] = 1,
    ACTIONS(382), 1,
      aux_sym__string_literal_token2,
  [1964] = 1,
    ACTIONS(384), 1,
      sym__hex_4digit,
  [1968] = 1,
    ACTIONS(386), 1,
      anon_sym_DASH,
  [1972] = 1,
    ACTIONS(378), 1,
      sym_object_name,
  [1976] = 1,
    ACTIONS(388), 1,
      aux_sym_select_statement_token6,
  [1980] = 1,
    ACTIONS(390), 1,
      sym__hex_4digit,
  [1984] = 1,
    ACTIONS(392), 1,
      anon_sym_DASH,
  [1988] = 1,
    ACTIONS(394), 1,
      anon_sym_DASH,
  [1992] = 1,
    ACTIONS(396), 1,
      aux_sym_select_statement_token6,
  [1996] = 1,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
  [2000] = 1,
    ACTIONS(398), 1,
      sym_object_name,
  [2004] = 1,
    ACTIONS(400), 1,
      sym__hex_4digit,
  [2008] = 1,
    ACTIONS(402), 1,
      anon_sym_RPAREN,
  [2012] = 1,
    ACTIONS(404), 1,
      aux_sym_select_statement_token6,
  [2016] = 1,
    ACTIONS(406), 1,
      sym_object_name,
  [2020] = 1,
    ACTIONS(408), 1,
      sym_object_name,
  [2024] = 1,
    ACTIONS(410), 1,
      sym__hex_digit,
  [2028] = 1,
    ACTIONS(412), 1,
      anon_sym_DOLLAR_DOLLAR,
  [2032] = 1,
    ACTIONS(412), 1,
      anon_sym_SQUOTE,
  [2036] = 1,
    ACTIONS(414), 1,
      sym__hex_4digit,
  [2040] = 1,
    ACTIONS(416), 1,
      sym__hex_4digit,
  [2044] = 1,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
  [2048] = 1,
    ACTIONS(420), 1,
      aux_sym__string_literal_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 51,
  [SMALL_STATE(4)] = 96,
  [SMALL_STATE(5)] = 138,
  [SMALL_STATE(6)] = 182,
  [SMALL_STATE(7)] = 224,
  [SMALL_STATE(8)] = 245,
  [SMALL_STATE(9)] = 266,
  [SMALL_STATE(10)] = 307,
  [SMALL_STATE(11)] = 328,
  [SMALL_STATE(12)] = 366,
  [SMALL_STATE(13)] = 404,
  [SMALL_STATE(14)] = 442,
  [SMALL_STATE(15)] = 480,
  [SMALL_STATE(16)] = 518,
  [SMALL_STATE(17)] = 538,
  [SMALL_STATE(18)] = 560,
  [SMALL_STATE(19)] = 582,
  [SMALL_STATE(20)] = 601,
  [SMALL_STATE(21)] = 620,
  [SMALL_STATE(22)] = 633,
  [SMALL_STATE(23)] = 646,
  [SMALL_STATE(24)] = 659,
  [SMALL_STATE(25)] = 672,
  [SMALL_STATE(26)] = 688,
  [SMALL_STATE(27)] = 712,
  [SMALL_STATE(28)] = 736,
  [SMALL_STATE(29)] = 758,
  [SMALL_STATE(30)] = 774,
  [SMALL_STATE(31)] = 798,
  [SMALL_STATE(32)] = 813,
  [SMALL_STATE(33)] = 828,
  [SMALL_STATE(34)] = 843,
  [SMALL_STATE(35)] = 856,
  [SMALL_STATE(36)] = 866,
  [SMALL_STATE(37)] = 888,
  [SMALL_STATE(38)] = 898,
  [SMALL_STATE(39)] = 908,
  [SMALL_STATE(40)] = 918,
  [SMALL_STATE(41)] = 928,
  [SMALL_STATE(42)] = 938,
  [SMALL_STATE(43)] = 948,
  [SMALL_STATE(44)] = 958,
  [SMALL_STATE(45)] = 968,
  [SMALL_STATE(46)] = 988,
  [SMALL_STATE(47)] = 998,
  [SMALL_STATE(48)] = 1016,
  [SMALL_STATE(49)] = 1028,
  [SMALL_STATE(50)] = 1046,
  [SMALL_STATE(51)] = 1056,
  [SMALL_STATE(52)] = 1074,
  [SMALL_STATE(53)] = 1089,
  [SMALL_STATE(54)] = 1104,
  [SMALL_STATE(55)] = 1123,
  [SMALL_STATE(56)] = 1138,
  [SMALL_STATE(57)] = 1149,
  [SMALL_STATE(58)] = 1166,
  [SMALL_STATE(59)] = 1181,
  [SMALL_STATE(60)] = 1192,
  [SMALL_STATE(61)] = 1201,
  [SMALL_STATE(62)] = 1220,
  [SMALL_STATE(63)] = 1235,
  [SMALL_STATE(64)] = 1247,
  [SMALL_STATE(65)] = 1259,
  [SMALL_STATE(66)] = 1271,
  [SMALL_STATE(67)] = 1283,
  [SMALL_STATE(68)] = 1297,
  [SMALL_STATE(69)] = 1309,
  [SMALL_STATE(70)] = 1325,
  [SMALL_STATE(71)] = 1335,
  [SMALL_STATE(72)] = 1343,
  [SMALL_STATE(73)] = 1357,
  [SMALL_STATE(74)] = 1365,
  [SMALL_STATE(75)] = 1377,
  [SMALL_STATE(76)] = 1393,
  [SMALL_STATE(77)] = 1407,
  [SMALL_STATE(78)] = 1417,
  [SMALL_STATE(79)] = 1430,
  [SMALL_STATE(80)] = 1438,
  [SMALL_STATE(81)] = 1448,
  [SMALL_STATE(82)] = 1458,
  [SMALL_STATE(83)] = 1468,
  [SMALL_STATE(84)] = 1478,
  [SMALL_STATE(85)] = 1488,
  [SMALL_STATE(86)] = 1494,
  [SMALL_STATE(87)] = 1504,
  [SMALL_STATE(88)] = 1514,
  [SMALL_STATE(89)] = 1524,
  [SMALL_STATE(90)] = 1534,
  [SMALL_STATE(91)] = 1542,
  [SMALL_STATE(92)] = 1550,
  [SMALL_STATE(93)] = 1560,
  [SMALL_STATE(94)] = 1566,
  [SMALL_STATE(95)] = 1572,
  [SMALL_STATE(96)] = 1582,
  [SMALL_STATE(97)] = 1592,
  [SMALL_STATE(98)] = 1598,
  [SMALL_STATE(99)] = 1608,
  [SMALL_STATE(100)] = 1614,
  [SMALL_STATE(101)] = 1624,
  [SMALL_STATE(102)] = 1634,
  [SMALL_STATE(103)] = 1644,
  [SMALL_STATE(104)] = 1654,
  [SMALL_STATE(105)] = 1664,
  [SMALL_STATE(106)] = 1670,
  [SMALL_STATE(107)] = 1676,
  [SMALL_STATE(108)] = 1686,
  [SMALL_STATE(109)] = 1696,
  [SMALL_STATE(110)] = 1706,
  [SMALL_STATE(111)] = 1716,
  [SMALL_STATE(112)] = 1721,
  [SMALL_STATE(113)] = 1728,
  [SMALL_STATE(114)] = 1735,
  [SMALL_STATE(115)] = 1740,
  [SMALL_STATE(116)] = 1747,
  [SMALL_STATE(117)] = 1752,
  [SMALL_STATE(118)] = 1759,
  [SMALL_STATE(119)] = 1764,
  [SMALL_STATE(120)] = 1769,
  [SMALL_STATE(121)] = 1776,
  [SMALL_STATE(122)] = 1781,
  [SMALL_STATE(123)] = 1788,
  [SMALL_STATE(124)] = 1795,
  [SMALL_STATE(125)] = 1802,
  [SMALL_STATE(126)] = 1809,
  [SMALL_STATE(127)] = 1816,
  [SMALL_STATE(128)] = 1823,
  [SMALL_STATE(129)] = 1828,
  [SMALL_STATE(130)] = 1833,
  [SMALL_STATE(131)] = 1840,
  [SMALL_STATE(132)] = 1845,
  [SMALL_STATE(133)] = 1850,
  [SMALL_STATE(134)] = 1855,
  [SMALL_STATE(135)] = 1862,
  [SMALL_STATE(136)] = 1869,
  [SMALL_STATE(137)] = 1876,
  [SMALL_STATE(138)] = 1883,
  [SMALL_STATE(139)] = 1890,
  [SMALL_STATE(140)] = 1897,
  [SMALL_STATE(141)] = 1904,
  [SMALL_STATE(142)] = 1908,
  [SMALL_STATE(143)] = 1912,
  [SMALL_STATE(144)] = 1916,
  [SMALL_STATE(145)] = 1920,
  [SMALL_STATE(146)] = 1924,
  [SMALL_STATE(147)] = 1928,
  [SMALL_STATE(148)] = 1932,
  [SMALL_STATE(149)] = 1936,
  [SMALL_STATE(150)] = 1940,
  [SMALL_STATE(151)] = 1944,
  [SMALL_STATE(152)] = 1948,
  [SMALL_STATE(153)] = 1952,
  [SMALL_STATE(154)] = 1956,
  [SMALL_STATE(155)] = 1960,
  [SMALL_STATE(156)] = 1964,
  [SMALL_STATE(157)] = 1968,
  [SMALL_STATE(158)] = 1972,
  [SMALL_STATE(159)] = 1976,
  [SMALL_STATE(160)] = 1980,
  [SMALL_STATE(161)] = 1984,
  [SMALL_STATE(162)] = 1988,
  [SMALL_STATE(163)] = 1992,
  [SMALL_STATE(164)] = 1996,
  [SMALL_STATE(165)] = 2000,
  [SMALL_STATE(166)] = 2004,
  [SMALL_STATE(167)] = 2008,
  [SMALL_STATE(168)] = 2012,
  [SMALL_STATE(169)] = 2016,
  [SMALL_STATE(170)] = 2020,
  [SMALL_STATE(171)] = 2024,
  [SMALL_STATE(172)] = 2028,
  [SMALL_STATE(173)] = 2032,
  [SMALL_STATE(174)] = 2036,
  [SMALL_STATE(175)] = 2040,
  [SMALL_STATE(176)] = 2044,
  [SMALL_STATE(177)] = 2048,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 2),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__decimal_literal, 2),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__decimal_literal, 2), SHIFT_REPEAT(16),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_literal, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_literal, 3),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_literal, 4),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hexadecimal_literal, 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__uuid, 11),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 3, .production_id = 3),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hexadecimal_literal_repeat2, 2),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hexadecimal_literal_repeat2, 2), SHIFT_REPEAT(25),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hexadecimal_literal, 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 5),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_elements_repeat1, 2), SHIFT_REPEAT(57),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_elements, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec_element, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec, 2),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relalationContainsKey, 4),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relalationContains, 3, .production_id = 4),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 5),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_spec_element, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 7),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 8),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec_element, 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 6),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_element, 9),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 7),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 8),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_spec, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 9),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hexadecimal_literal_repeat2, 2), SHIFT_REPEAT(63),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec_element, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_spec, 3),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(36),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2), SHIFT_REPEAT(134),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat2, 2),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__hexadecimal_literal_repeat1, 2), SHIFT_REPEAT(171),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__hexadecimal_literal_repeat1, 2),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_args_repeat1, 2), SHIFT_REPEAT(6),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 11),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 10),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 2),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2), SHIFT_REPEAT(170),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_element_repeat1, 2),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_args, 2),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_tuple_repeat1, 2), SHIFT_REPEAT(11),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_tuple_repeat1, 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 1),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2), SHIFT_REPEAT(98),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 5),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 4),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_element, 3),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_tuple, 3),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [374] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
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
