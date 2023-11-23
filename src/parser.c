#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 35
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 19
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 3

enum {
  sym_conditional = 1,
  anon_sym_DQUOTE = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  sym__unquoted_string = 5,
  aux_sym__string_content_token1 = 6,
  anon_sym_BSLASH = 7,
  sym_escape_sequence = 8,
  sym_comment = 9,
  sym_document = 10,
  sym_pair = 11,
  sym_key = 12,
  sym__value = 13,
  sym_value = 14,
  sym__string_value = 15,
  sym_subpairs = 16,
  aux_sym__string_content = 17,
  aux_sym_document_repeat1 = 18,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_conditional] = "conditional",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym__unquoted_string] = "_unquoted_string",
  [aux_sym__string_content_token1] = "_string_content_token1",
  [anon_sym_BSLASH] = "\\",
  [sym_escape_sequence] = "escape_sequence",
  [sym_comment] = "comment",
  [sym_document] = "document",
  [sym_pair] = "pair",
  [sym_key] = "key",
  [sym__value] = "_value",
  [sym_value] = "value",
  [sym__string_value] = "_string_value",
  [sym_subpairs] = "subpairs",
  [aux_sym__string_content] = "_string_content",
  [aux_sym_document_repeat1] = "document_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_conditional] = sym_conditional,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym__unquoted_string] = sym__unquoted_string,
  [aux_sym__string_content_token1] = aux_sym__string_content_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_comment] = sym_comment,
  [sym_document] = sym_document,
  [sym_pair] = sym_pair,
  [sym_key] = sym_key,
  [sym__value] = sym__value,
  [sym_value] = sym_value,
  [sym__string_value] = sym__string_value,
  [sym_subpairs] = sym_subpairs,
  [aux_sym__string_content] = aux_sym__string_content,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_conditional] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym__unquoted_string] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__string_content_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym__string_value] = {
    .visible = false,
    .named = true,
  },
  [sym_subpairs] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__string_content] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_conditional = 1,
  field_key = 2,
  field_value = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_conditional] = "conditional",
  [field_key] = "key",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 0},
    {field_value, 1},
  [2] =
    {field_conditional, 2},
    {field_key, 0},
    {field_value, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 4,
  [9] = 6,
  [10] = 5,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 11,
  [16] = 13,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 21,
  [23] = 17,
  [24] = 24,
  [25] = 25,
  [26] = 19,
  [27] = 20,
  [28] = 25,
  [29] = 24,
  [30] = 30,
  [31] = 30,
  [32] = 32,
  [33] = 33,
  [34] = 34,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '[') ADVANCE(2);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == '{') ADVANCE(10);
      if (lookahead == '}') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 2:
      if (lookahead == ']') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(2);
      END_STATE();
    case 3:
      if (eof) ADVANCE(6);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '[') ADVANCE(2);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == '{') ADVANCE(10);
      if (lookahead == '}') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (eof) ADVANCE(6);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == '[') ADVANCE(12);
      if (lookahead == '}') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(13);
      END_STATE();
    case 5:
      if (eof) ADVANCE(6);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == '{') ADVANCE(10);
      if (lookahead == '}') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_conditional);
      if (lookahead == ']') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(2);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_conditional);
      if (lookahead == ']') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(12);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == ']') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym__string_content_token1);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(21);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym__string_content_token1);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym__string_content_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 't') ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 5},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_conditional] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_document] = STATE(34),
    [sym_pair] = STATE(7),
    [sym_key] = STATE(3),
    [aux_sym_document_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym__unquoted_string] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      sym__unquoted_string,
    STATE(22), 1,
      sym__string_value,
    STATE(17), 3,
      sym__value,
      sym_value,
      sym_subpairs,
  [21] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      sym__unquoted_string,
    STATE(21), 1,
      sym__string_value,
    STATE(23), 3,
      sym__value,
      sym_value,
      sym_subpairs,
  [42] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(28), 1,
      sym__unquoted_string,
    STATE(3), 1,
      sym_key,
    STATE(4), 2,
      sym_pair,
      aux_sym_document_repeat1,
  [62] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      sym__unquoted_string,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      sym_key,
    STATE(8), 2,
      sym_pair,
      aux_sym_document_repeat1,
  [82] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      sym__unquoted_string,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      sym_key,
    STATE(5), 2,
      sym_pair,
      aux_sym_document_repeat1,
  [102] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      sym__unquoted_string,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_key,
    STATE(4), 2,
      sym_pair,
      aux_sym_document_repeat1,
  [122] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(28), 1,
      sym__unquoted_string,
    STATE(2), 1,
      sym_key,
    STATE(8), 2,
      sym_pair,
      aux_sym_document_repeat1,
  [142] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      sym__unquoted_string,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      sym_key,
    STATE(10), 2,
      sym_pair,
      aux_sym_document_repeat1,
  [162] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      sym__unquoted_string,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      sym_key,
    STATE(8), 2,
      sym_pair,
      aux_sym_document_repeat1,
  [182] = 5,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_escape_sequence,
    ACTIONS(47), 1,
      sym_comment,
    STATE(16), 1,
      aux_sym__string_content,
    ACTIONS(43), 2,
      aux_sym__string_content_token1,
      anon_sym_BSLASH,
  [199] = 5,
    ACTIONS(47), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      sym_escape_sequence,
    STATE(14), 1,
      aux_sym__string_content,
    ACTIONS(51), 2,
      aux_sym__string_content_token1,
      anon_sym_BSLASH,
  [216] = 5,
    ACTIONS(47), 1,
      sym_comment,
    ACTIONS(53), 1,
      sym_escape_sequence,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    STATE(14), 1,
      aux_sym__string_content,
    ACTIONS(51), 2,
      aux_sym__string_content_token1,
      anon_sym_BSLASH,
  [233] = 5,
    ACTIONS(47), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      sym_escape_sequence,
    STATE(14), 1,
      aux_sym__string_content,
    ACTIONS(59), 2,
      aux_sym__string_content_token1,
      anon_sym_BSLASH,
  [250] = 5,
    ACTIONS(47), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      sym_escape_sequence,
    STATE(13), 1,
      aux_sym__string_content,
    ACTIONS(67), 2,
      aux_sym__string_content_token1,
      anon_sym_BSLASH,
  [267] = 5,
    ACTIONS(47), 1,
      sym_comment,
    ACTIONS(53), 1,
      sym_escape_sequence,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    STATE(14), 1,
      aux_sym__string_content,
    ACTIONS(51), 2,
      aux_sym__string_content_token1,
      anon_sym_BSLASH,
  [284] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_conditional,
    ACTIONS(77), 1,
      sym__unquoted_string,
    ACTIONS(75), 2,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [298] = 4,
    ACTIONS(47), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym_escape_sequence,
    STATE(12), 1,
      aux_sym__string_content,
    ACTIONS(79), 2,
      aux_sym__string_content_token1,
      anon_sym_BSLASH,
  [312] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      sym__unquoted_string,
    ACTIONS(83), 3,
      ts_builtin_sym_end,
      sym_conditional,
      anon_sym_DQUOTE,
  [324] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      sym__unquoted_string,
    ACTIONS(87), 3,
      ts_builtin_sym_end,
      sym_conditional,
      anon_sym_DQUOTE,
  [336] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym__unquoted_string,
    ACTIONS(91), 3,
      ts_builtin_sym_end,
      sym_conditional,
      anon_sym_DQUOTE,
  [348] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym__unquoted_string,
    ACTIONS(91), 3,
      sym_conditional,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [360] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym__unquoted_string,
    ACTIONS(95), 1,
      sym_conditional,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
  [374] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      sym__unquoted_string,
    ACTIONS(97), 3,
      sym_conditional,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [386] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      sym__unquoted_string,
    ACTIONS(101), 3,
      sym_conditional,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [398] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      sym__unquoted_string,
    ACTIONS(83), 3,
      sym_conditional,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [410] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      sym__unquoted_string,
    ACTIONS(87), 3,
      sym_conditional,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [422] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      sym__unquoted_string,
    ACTIONS(101), 3,
      ts_builtin_sym_end,
      sym_conditional,
      anon_sym_DQUOTE,
  [434] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      sym__unquoted_string,
    ACTIONS(97), 3,
      ts_builtin_sym_end,
      sym_conditional,
      anon_sym_DQUOTE,
  [446] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      sym__unquoted_string,
    ACTIONS(105), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
  [457] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      sym__unquoted_string,
    ACTIONS(105), 2,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
  [468] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      sym__unquoted_string,
    ACTIONS(109), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
  [479] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      sym__unquoted_string,
    ACTIONS(113), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
  [490] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 21,
  [SMALL_STATE(4)] = 42,
  [SMALL_STATE(5)] = 62,
  [SMALL_STATE(6)] = 82,
  [SMALL_STATE(7)] = 102,
  [SMALL_STATE(8)] = 122,
  [SMALL_STATE(9)] = 142,
  [SMALL_STATE(10)] = 162,
  [SMALL_STATE(11)] = 182,
  [SMALL_STATE(12)] = 199,
  [SMALL_STATE(13)] = 216,
  [SMALL_STATE(14)] = 233,
  [SMALL_STATE(15)] = 250,
  [SMALL_STATE(16)] = 267,
  [SMALL_STATE(17)] = 284,
  [SMALL_STATE(18)] = 298,
  [SMALL_STATE(19)] = 312,
  [SMALL_STATE(20)] = 324,
  [SMALL_STATE(21)] = 336,
  [SMALL_STATE(22)] = 348,
  [SMALL_STATE(23)] = 360,
  [SMALL_STATE(24)] = 374,
  [SMALL_STATE(25)] = 386,
  [SMALL_STATE(26)] = 398,
  [SMALL_STATE(27)] = 410,
  [SMALL_STATE(28)] = 422,
  [SMALL_STATE(29)] = 434,
  [SMALL_STATE(30)] = 446,
  [SMALL_STATE(31)] = 457,
  [SMALL_STATE(32)] = 468,
  [SMALL_STATE(33)] = 479,
  [SMALL_STATE(34)] = 490,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(18),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(33),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_content, 2),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_content, 2), SHIFT_REPEAT(14),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_content, 2), SHIFT_REPEAT(14),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 2, .production_id = 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pair, 2, .production_id = 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_value, 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_value, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subpairs, 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subpairs, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_value, 2),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_value, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subpairs, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subpairs, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, .production_id = 2),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pair, 3, .production_id = 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 3),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key, 1),
  [117] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_keyvalues(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
