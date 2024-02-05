#include "tree_sitter/parser.h"

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

#define LANGUAGE_VERSION 14
#define STATE_COUNT 63
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 48
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 5

enum ts_symbol_identifiers {
  anon_sym_LBRACE = 1,
  aux_sym_global_options_token1 = 2,
  anon_sym_RBRACE = 3,
  sym_snippet_name = 4,
  sym_comment = 5,
  sym_argument = 6,
  sym_url = 7,
  sym_unix_socket = 8,
  sym__placeholder = 9,
  sym_directive_name = 10,
  sym_matcher_name = 11,
  anon_sym_STAR = 12,
  aux_sym_matcher_token1 = 13,
  aux_sym_single_site_token1 = 14,
  sym_raw_string_literal = 15,
  anon_sym_DQUOTE = 16,
  anon_sym_DQUOTE2 = 17,
  sym__interpreted_string_literal_basic_content = 18,
  sym_escape_sequence = 19,
  sym_int_literal = 20,
  sym__site_url = 21,
  sym__localhost = 22,
  sym__ipv4 = 23,
  sym__ipv6 = 24,
  sym__port = 25,
  sym_source_file = 26,
  sym_global_options = 27,
  sym_snippet_definition = 28,
  sym_placeholder = 29,
  sym_directive = 30,
  sym_named_matcher = 31,
  sym_matcher = 32,
  sym_sites = 33,
  sym_single_site = 34,
  sym_site_definition = 35,
  sym__definition = 36,
  sym_block = 37,
  sym__string_literal = 38,
  sym_interpreted_string_literal = 39,
  sym_site_address = 40,
  aux_sym_source_file_repeat1 = 41,
  aux_sym_global_options_repeat1 = 42,
  aux_sym_directive_repeat1 = 43,
  aux_sym_sites_repeat1 = 44,
  aux_sym_single_site_repeat1 = 45,
  aux_sym_single_site_repeat2 = 46,
  aux_sym_interpreted_string_literal_repeat1 = 47,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [aux_sym_global_options_token1] = "global_options_token1",
  [anon_sym_RBRACE] = "}",
  [sym_snippet_name] = "snippet_name",
  [sym_comment] = "comment",
  [sym_argument] = "argument",
  [sym_url] = "url",
  [sym_unix_socket] = "unix_socket",
  [sym__placeholder] = "_placeholder",
  [sym_directive_name] = "directive_name",
  [sym_matcher_name] = "matcher_name",
  [anon_sym_STAR] = "*",
  [aux_sym_matcher_token1] = "matcher_token1",
  [aux_sym_single_site_token1] = "single_site_token1",
  [sym_raw_string_literal] = "raw_string_literal",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_DQUOTE2] = "\"",
  [sym__interpreted_string_literal_basic_content] = "_interpreted_string_literal_basic_content",
  [sym_escape_sequence] = "escape_sequence",
  [sym_int_literal] = "int_literal",
  [sym__site_url] = "_site_url",
  [sym__localhost] = "_localhost",
  [sym__ipv4] = "_ipv4",
  [sym__ipv6] = "_ipv6",
  [sym__port] = "_port",
  [sym_source_file] = "source_file",
  [sym_global_options] = "global_options",
  [sym_snippet_definition] = "snippet_definition",
  [sym_placeholder] = "placeholder",
  [sym_directive] = "directive",
  [sym_named_matcher] = "named_matcher",
  [sym_matcher] = "matcher",
  [sym_sites] = "sites",
  [sym_single_site] = "single_site",
  [sym_site_definition] = "site_definition",
  [sym__definition] = "_definition",
  [sym_block] = "block",
  [sym__string_literal] = "_string_literal",
  [sym_interpreted_string_literal] = "interpreted_string_literal",
  [sym_site_address] = "site_address",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_global_options_repeat1] = "global_options_repeat1",
  [aux_sym_directive_repeat1] = "directive_repeat1",
  [aux_sym_sites_repeat1] = "sites_repeat1",
  [aux_sym_single_site_repeat1] = "single_site_repeat1",
  [aux_sym_single_site_repeat2] = "single_site_repeat2",
  [aux_sym_interpreted_string_literal_repeat1] = "interpreted_string_literal_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [aux_sym_global_options_token1] = aux_sym_global_options_token1,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_snippet_name] = sym_snippet_name,
  [sym_comment] = sym_comment,
  [sym_argument] = sym_argument,
  [sym_url] = sym_url,
  [sym_unix_socket] = sym_unix_socket,
  [sym__placeholder] = sym__placeholder,
  [sym_directive_name] = sym_directive_name,
  [sym_matcher_name] = sym_matcher_name,
  [anon_sym_STAR] = anon_sym_STAR,
  [aux_sym_matcher_token1] = aux_sym_matcher_token1,
  [aux_sym_single_site_token1] = aux_sym_single_site_token1,
  [sym_raw_string_literal] = sym_raw_string_literal,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_DQUOTE2] = anon_sym_DQUOTE,
  [sym__interpreted_string_literal_basic_content] = sym__interpreted_string_literal_basic_content,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_int_literal] = sym_int_literal,
  [sym__site_url] = sym__site_url,
  [sym__localhost] = sym__localhost,
  [sym__ipv4] = sym__ipv4,
  [sym__ipv6] = sym__ipv6,
  [sym__port] = sym__port,
  [sym_source_file] = sym_source_file,
  [sym_global_options] = sym_global_options,
  [sym_snippet_definition] = sym_snippet_definition,
  [sym_placeholder] = sym_placeholder,
  [sym_directive] = sym_directive,
  [sym_named_matcher] = sym_named_matcher,
  [sym_matcher] = sym_matcher,
  [sym_sites] = sym_sites,
  [sym_single_site] = sym_single_site,
  [sym_site_definition] = sym_site_definition,
  [sym__definition] = sym__definition,
  [sym_block] = sym_block,
  [sym__string_literal] = sym__string_literal,
  [sym_interpreted_string_literal] = sym_interpreted_string_literal,
  [sym_site_address] = sym_site_address,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_global_options_repeat1] = aux_sym_global_options_repeat1,
  [aux_sym_directive_repeat1] = aux_sym_directive_repeat1,
  [aux_sym_sites_repeat1] = aux_sym_sites_repeat1,
  [aux_sym_single_site_repeat1] = aux_sym_single_site_repeat1,
  [aux_sym_single_site_repeat2] = aux_sym_single_site_repeat2,
  [aux_sym_interpreted_string_literal_repeat1] = aux_sym_interpreted_string_literal_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_global_options_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_snippet_name] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_url] = {
    .visible = true,
    .named = true,
  },
  [sym_unix_socket] = {
    .visible = true,
    .named = true,
  },
  [sym__placeholder] = {
    .visible = false,
    .named = true,
  },
  [sym_directive_name] = {
    .visible = true,
    .named = true,
  },
  [sym_matcher_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_matcher_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_single_site_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_raw_string_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [sym__interpreted_string_literal_basic_content] = {
    .visible = false,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_int_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__site_url] = {
    .visible = false,
    .named = true,
  },
  [sym__localhost] = {
    .visible = false,
    .named = true,
  },
  [sym__ipv4] = {
    .visible = false,
    .named = true,
  },
  [sym__ipv6] = {
    .visible = false,
    .named = true,
  },
  [sym__port] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_global_options] = {
    .visible = true,
    .named = true,
  },
  [sym_snippet_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_placeholder] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_named_matcher] = {
    .visible = true,
    .named = true,
  },
  [sym_matcher] = {
    .visible = true,
    .named = true,
  },
  [sym_sites] = {
    .visible = true,
    .named = true,
  },
  [sym_single_site] = {
    .visible = true,
    .named = true,
  },
  [sym_site_definition] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__string_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_interpreted_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_site_address] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_global_options_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sites_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_single_site_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_single_site_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interpreted_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_definitions = 1,
  field_name = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_definitions] = "definitions",
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_name, 0},
    {field_name, 1},
  [3] =
    {field_definitions, 1},
    {field_name, 0},
  [5] =
    {field_definitions, 2},
    {field_name, 0},
    {field_name, 1},
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
  [29] = 28,
  [30] = 27,
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
  [44] = 23,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 21,
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
  [62] = 59,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(167);
      if (lookahead == '"') ADVANCE(228);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '(') ADVANCE(154);
      if (lookahead == '*') ADVANCE(212);
      if (lookahead == ',') ADVANCE(6);
      if (lookahead == '/') ADVANCE(223);
      if (lookahead == '0') ADVANCE(239);
      if (lookahead == ':') ADVANCE(132);
      if (lookahead == '@') ADVANCE(155);
      if (lookahead == '\\') ADVANCE(224);
      if (lookahead == '`') ADVANCE(130);
      if (lookahead == 'h') ADVANCE(208);
      if (lookahead == 'l') ADVANCE(203);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '}') ADVANCE(171);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(163)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(240);
      if (('+' <= lookahead && lookahead <= '-') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '"') ADVANCE(227);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '*') ADVANCE(213);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(176);
      if (lookahead == '0') ADVANCE(239);
      if (lookahead == '@') ADVANCE(155);
      if (lookahead == '`') ADVANCE(130);
      if (lookahead == 'h') ADVANCE(185);
      if (lookahead == 'u') ADVANCE(182);
      if (lookahead == '{') ADVANCE(169);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(7)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(240);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '"') ADVANCE(227);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '0') ADVANCE(239);
      if (lookahead == '`') ADVANCE(130);
      if (lookahead == 'h') ADVANCE(185);
      if (lookahead == 'u') ADVANCE(182);
      if (lookahead == '{') ADVANCE(169);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(8)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(240);
      if (lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead == '"') ADVANCE(227);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '*') ADVANCE(213);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(176);
      if (lookahead == '0') ADVANCE(239);
      if (lookahead == '@') ADVANCE(155);
      if (lookahead == '`') ADVANCE(130);
      if (lookahead == 'h') ADVANCE(185);
      if (lookahead == 'u') ADVANCE(182);
      if (lookahead == '{') ADVANCE(169);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(240);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead == '"') ADVANCE(227);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '0') ADVANCE(239);
      if (lookahead == '`') ADVANCE(130);
      if (lookahead == 'h') ADVANCE(185);
      if (lookahead == 'u') ADVANCE(182);
      if (lookahead == '{') ADVANCE(169);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(240);
      if (lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '"') ADVANCE(228);
      if (lookahead == '#') ADVANCE(231);
      if (lookahead == '\\') ADVANCE(113);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(230);
      if (lookahead != 0) ADVANCE(232);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(225);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(227);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '*') ADVANCE(213);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(176);
      if (lookahead == '0') ADVANCE(239);
      if (lookahead == '@') ADVANCE(155);
      if (lookahead == '`') ADVANCE(130);
      if (lookahead == 'h') ADVANCE(185);
      if (lookahead == 'u') ADVANCE(182);
      if (lookahead == '{') ADVANCE(169);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(240);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(227);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '0') ADVANCE(239);
      if (lookahead == '`') ADVANCE(130);
      if (lookahead == 'h') ADVANCE(185);
      if (lookahead == 'u') ADVANCE(182);
      if (lookahead == '{') ADVANCE(169);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(240);
      if (lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(173);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '%') ADVANCE(153);
      END_STATE();
    case 11:
      if (lookahead == '%') ADVANCE(153);
      if (lookahead == ':') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      END_STATE();
    case 12:
      if (lookahead == '%') ADVANCE(153);
      if (lookahead == ':') ADVANCE(28);
      END_STATE();
    case 13:
      if (lookahead == '%') ADVANCE(153);
      if (lookahead == ':') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == '%') ADVANCE(153);
      if (lookahead == ':') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(264);
      END_STATE();
    case 15:
      if (lookahead == '%') ADVANCE(153);
      if (lookahead == ':') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(13);
      END_STATE();
    case 16:
      if (lookahead == '%') ADVANCE(153);
      if (lookahead == ':') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == '%') ADVANCE(153);
      if (lookahead == ':') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == '%') ADVANCE(153);
      if (lookahead == ':') ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == '%') ADVANCE(153);
      if (lookahead == ':') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == '%') ADVANCE(153);
      if (lookahead == ':') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == '%') ADVANCE(153);
      if (lookahead == ':') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == '%') ADVANCE(153);
      if (lookahead == ':') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(278);
      END_STATE();
    case 23:
      if (lookahead == '%') ADVANCE(153);
      if (lookahead == ':') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 24:
      if (lookahead == '%') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 25:
      if (lookahead == '%') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 26:
      if (lookahead == '%') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(282);
      END_STATE();
    case 27:
      if (lookahead == '%') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 28:
      if (lookahead == '%') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 29:
      if (lookahead == ')') ADVANCE(172);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '*' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '0') ADVANCE(34);
      if (lookahead == ':') ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(81);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      if (lookahead == '*' ||
          lookahead == '-' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 32:
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '5') ADVANCE(35);
      if (lookahead == ':') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(157);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(83);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      if (lookahead == '*' ||
          lookahead == '-' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '8') ADVANCE(31);
      if (lookahead == ':') ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      if (lookahead == '*' ||
          lookahead == '-' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 34:
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == '*' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == ':') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(82);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      if (lookahead == '*' ||
          lookahead == '-' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == ':') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      if (lookahead == '*' ||
          lookahead == '-' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 37:
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == ':') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(82);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (lookahead == '*' ||
          lookahead == '-' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 38:
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == ':') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      if (lookahead == '*' ||
          lookahead == '-' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 39:
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == ':') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(83);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (lookahead == '*' ||
          lookahead == '-' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 40:
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == ':') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(83);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (lookahead == '*' ||
          lookahead == '-' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 41:
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == ':') ADVANCE(78);
      if (lookahead == 'e') ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      if (lookahead == '*' ||
          lookahead == '-' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 42:
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == ':') ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      if (lookahead == '*' ||
          lookahead == '-' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 43:
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == ':') ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      if (lookahead == '*' ||
          lookahead == '-' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 44:
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == ':') ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      if (lookahead == '*' ||
          lookahead == '-' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 45:
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == ':') ADVANCE(78);
      if (lookahead == '*' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 46:
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 's') ADVANCE(47);
      if (lookahead == '*' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 47:
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == '*' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 48:
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == 'a') ADVANCE(52);
      if (lookahead == '*' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 49:
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == 'c') ADVANCE(48);
      if (lookahead == '*' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 50:
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == 'h') ADVANCE(59);
      if (lookahead == '*' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 51:
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == 'h') ADVANCE(54);
      if (lookahead == '*' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 52:
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == 'l') ADVANCE(51);
      if (lookahead == '*' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 53:
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == 'o') ADVANCE(49);
      if (lookahead == '*' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 54:
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == 'o') ADVANCE(56);
      if (lookahead == '*' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 55:
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == 'p') ADVANCE(46);
      if (lookahead == '*' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 56:
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == 's') ADVANCE(58);
      if (lookahead == '*' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 57:
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == 't') ADVANCE(55);
      if (lookahead == '*' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 58:
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == 't') ADVANCE(247);
      if (lookahead == '*' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 59:
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == 't') ADVANCE(57);
      if (lookahead == '*' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '*' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 61:
      if (lookahead == '/') ADVANCE(30);
      END_STATE();
    case 62:
      if (lookahead == '/') ADVANCE(61);
      END_STATE();
    case 63:
      if (lookahead == '/') ADVANCE(50);
      END_STATE();
    case 64:
      if (lookahead == '/') ADVANCE(63);
      END_STATE();
    case 65:
      if (lookahead == '0') ADVANCE(283);
      if (lookahead == '1') ADVANCE(350);
      if (lookahead == '2') ADVANCE(296);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(348);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(355);
      END_STATE();
    case 66:
      if (lookahead == '1') ADVANCE(358);
      if (lookahead == '2') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      END_STATE();
    case 67:
      if (lookahead == '1') ADVANCE(125);
      if (lookahead == '2') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 68:
      if (lookahead == '1') ADVANCE(117);
      if (lookahead == '2') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 69:
      if (lookahead == '1') ADVANCE(340);
      if (lookahead == '2') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(338);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(345);
      END_STATE();
    case 70:
      if (lookahead == '2') ADVANCE(73);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(129);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 71:
      if (lookahead == '2') ADVANCE(254);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(257);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(256);
      END_STATE();
    case 72:
      if (lookahead == '2') ADVANCE(76);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(121);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 73:
      if (lookahead == '5') ADVANCE(127);
      if (lookahead == '\\') ADVANCE(162);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(128);
      END_STATE();
    case 74:
      if (lookahead == '5') ADVANCE(123);
      if (lookahead == '\\') ADVANCE(161);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(124);
      END_STATE();
    case 75:
      if (lookahead == '5') ADVANCE(115);
      if (lookahead == '\\') ADVANCE(160);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(116);
      END_STATE();
    case 76:
      if (lookahead == '5') ADVANCE(119);
      if (lookahead == '\\') ADVANCE(159);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(120);
      END_STATE();
    case 77:
      if (lookahead == ':') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(368);
      END_STATE();
    case 78:
      if (lookahead == ':') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      END_STATE();
    case 79:
      if (lookahead == ':') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(361);
      END_STATE();
    case 80:
      if (lookahead == ':') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      END_STATE();
    case 81:
      if (lookahead == ':') ADVANCE(78);
      END_STATE();
    case 82:
      if (lookahead == ':') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 83:
      if (lookahead == ':') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      END_STATE();
    case 84:
      if (lookahead == ':') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 85:
      if (lookahead == ':') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      END_STATE();
    case 86:
      if (lookahead == ':') ADVANCE(80);
      END_STATE();
    case 87:
      if (lookahead == ':') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 88:
      if (lookahead == ':') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 89:
      if (lookahead == ':') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 90:
      if (lookahead == ':') ADVANCE(85);
      END_STATE();
    case 91:
      if (lookahead == ':') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      END_STATE();
    case 92:
      if (lookahead == ':') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 93:
      if (lookahead == ':') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 94:
      if (lookahead == ':') ADVANCE(79);
      END_STATE();
    case 95:
      if (lookahead == ':') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      END_STATE();
    case 96:
      if (lookahead == ':') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      END_STATE();
    case 97:
      if (lookahead == ':') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
      END_STATE();
    case 98:
      if (lookahead == ':') ADVANCE(102);
      END_STATE();
    case 99:
      if (lookahead == ':') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      END_STATE();
    case 100:
      if (lookahead == ':') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(99);
      END_STATE();
    case 101:
      if (lookahead == ':') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(98);
      END_STATE();
    case 102:
      if (lookahead == ':') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      END_STATE();
    case 103:
      if (lookahead == ':') ADVANCE(107);
      END_STATE();
    case 104:
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 105:
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(104);
      END_STATE();
    case 106:
      if (lookahead == ':') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      END_STATE();
    case 107:
      if (lookahead == ':') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      END_STATE();
    case 108:
      if (lookahead == ':') ADVANCE(112);
      END_STATE();
    case 109:
      if (lookahead == ':') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 110:
      if (lookahead == ':') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 111:
      if (lookahead == ':') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      END_STATE();
    case 112:
      if (lookahead == ':') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 113:
      if (lookahead == 'U') ADVANCE(147);
      if (lookahead == 'u') ADVANCE(140);
      if (lookahead == 'x') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 114:
      if (lookahead == '\\') ADVANCE(160);
      END_STATE();
    case 115:
      if (lookahead == '\\') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(114);
      END_STATE();
    case 116:
      if (lookahead == '\\') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 117:
      if (lookahead == '\\') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 118:
      if (lookahead == '\\') ADVANCE(159);
      END_STATE();
    case 119:
      if (lookahead == '\\') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(118);
      END_STATE();
    case 120:
      if (lookahead == '\\') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 121:
      if (lookahead == '\\') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 122:
      if (lookahead == '\\') ADVANCE(161);
      END_STATE();
    case 123:
      if (lookahead == '\\') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(122);
      END_STATE();
    case 124:
      if (lookahead == '\\') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 125:
      if (lookahead == '\\') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 126:
      if (lookahead == '\\') ADVANCE(162);
      END_STATE();
    case 127:
      if (lookahead == '\\') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(126);
      END_STATE();
    case 128:
      if (lookahead == '\\') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 129:
      if (lookahead == '\\') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 130:
      if (lookahead == '`') ADVANCE(226);
      if (lookahead != 0) ADVANCE(130);
      END_STATE();
    case 131:
      if (lookahead == '}') ADVANCE(195);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 132:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(368);
      END_STATE();
    case 133:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(252);
      END_STATE();
    case 134:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(233);
      END_STATE();
    case 135:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(134);
      END_STATE();
    case 136:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(135);
      END_STATE();
    case 137:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(315);
      END_STATE();
    case 138:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(325);
      END_STATE();
    case 139:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(361);
      END_STATE();
    case 140:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(136);
      END_STATE();
    case 141:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(335);
      END_STATE();
    case 142:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(140);
      END_STATE();
    case 143:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(345);
      END_STATE();
    case 144:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(142);
      END_STATE();
    case 145:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(355);
      END_STATE();
    case 146:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(144);
      END_STATE();
    case 147:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(146);
      END_STATE();
    case 148:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 149:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 150:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 151:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 152:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 153:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 154:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 155:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 156:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(173);
      if (lookahead == '\r') ADVANCE(175);
      if (lookahead == '#') ADVANCE(174);
      END_STATE();
    case 157:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 158:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 159:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 160:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 161:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 162:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 163:
      if (eof) ADVANCE(167);
      if (lookahead == '"') ADVANCE(227);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '(') ADVANCE(154);
      if (lookahead == '*') ADVANCE(212);
      if (lookahead == '/' ||
          lookahead == '\\') ADVANCE(223);
      if (lookahead == '0') ADVANCE(239);
      if (lookahead == ':') ADVANCE(132);
      if (lookahead == '@') ADVANCE(155);
      if (lookahead == '`') ADVANCE(130);
      if (lookahead == 'h') ADVANCE(208);
      if (lookahead == 'l') ADVANCE(203);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '}') ADVANCE(171);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(163)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(240);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 164:
      if (eof) ADVANCE(167);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '(') ADVANCE(154);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '2') ADVANCE(32);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == 'f') ADVANCE(41);
      if (lookahead == 'h') ADVANCE(59);
      if (lookahead == 'l') ADVANCE(53);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(40);
      if (('a' <= lookahead && lookahead <= 'e')) ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(164)
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(84);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (lookahead == '*' ||
          lookahead == '-' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 165:
      if (eof) ADVANCE(167);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == ',') ADVANCE(6);
      if (lookahead == '@') ADVANCE(155);
      if (lookahead == '{') ADVANCE(168);
      if (lookahead == '}') ADVANCE(171);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(166)
      if (('+' <= lookahead && lookahead <= '-') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 166:
      if (eof) ADVANCE(167);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '@') ADVANCE(155);
      if (lookahead == '{') ADVANCE(168);
      if (lookahead == '}') ADVANCE(171);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(166)
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '$') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_global_options_token1);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_snippet_name);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '#') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(173);
      if (lookahead == '\r') ADVANCE(175);
      if (lookahead == '#') ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(173);
      if (lookahead == '#') ADVANCE(156);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_argument);
      if (lookahead == '%') ADVANCE(223);
      if (lookahead == '*') ADVANCE(188);
      if (lookahead == '+') ADVANCE(188);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_argument);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_argument);
      if (lookahead == '/') ADVANCE(177);
      if (lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_argument);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == 's') ADVANCE(180);
      if (lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_argument);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_argument);
      if (lookahead == 'i') ADVANCE(186);
      if (lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_argument);
      if (lookahead == 'n') ADVANCE(181);
      if (lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_argument);
      if (lookahead == 'p') ADVANCE(179);
      if (lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_argument);
      if (lookahead == 't') ADVANCE(183);
      if (lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_argument);
      if (lookahead == 't') ADVANCE(184);
      if (lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_argument);
      if (lookahead == 'x') ADVANCE(178);
      if (lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_argument);
      if (lookahead == '+' ||
          lookahead == '\\') ADVANCE(188);
      if (lookahead == '*' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_argument);
      if (lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '.') ADVANCE(193);
      if (lookahead == ':') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',') ADVANCE(194);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ':') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',') ADVANCE(194);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_url);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',') ADVANCE(194);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_url);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',') ADVANCE(194);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_url);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',') ADVANCE(194);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_url);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',') ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__placeholder);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_directive_name);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == 's') ADVANCE(197);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_directive_name);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_directive_name);
      if (lookahead == ':') ADVANCE(133);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_directive_name);
      if (lookahead == 'a') ADVANCE(202);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_directive_name);
      if (lookahead == 'c') ADVANCE(199);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_directive_name);
      if (lookahead == 'h') ADVANCE(204);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_directive_name);
      if (lookahead == 'l') ADVANCE(201);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_directive_name);
      if (lookahead == 'o') ADVANCE(200);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_directive_name);
      if (lookahead == 'o') ADVANCE(206);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_directive_name);
      if (lookahead == 'p') ADVANCE(196);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_directive_name);
      if (lookahead == 's') ADVANCE(209);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_directive_name);
      if (lookahead == 't') ADVANCE(205);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_directive_name);
      if (lookahead == 't') ADVANCE(207);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_directive_name);
      if (lookahead == 't') ADVANCE(198);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_directive_name);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_matcher_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_matcher_token1);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_matcher_token1);
      if (lookahead == '*') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      if (lookahead == '%' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_matcher_token1);
      if (lookahead == '*') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(215);
      if (lookahead == '%' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_matcher_token1);
      if (lookahead == '*') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(216);
      if (lookahead == '%' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_matcher_token1);
      if (lookahead == '*') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(217);
      if (lookahead == '%' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_matcher_token1);
      if (lookahead == '*') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(218);
      if (lookahead == '%' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_matcher_token1);
      if (lookahead == '*') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(219);
      if (lookahead == '%' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_matcher_token1);
      if (lookahead == '*') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(220);
      if (lookahead == '%' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_matcher_token1);
      if (lookahead == '*') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(221);
      if (lookahead == '%' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_matcher_token1);
      if (lookahead == '*') ADVANCE(214);
      if (lookahead == '%' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_matcher_token1);
      if (lookahead == '*') ADVANCE(233);
      if (lookahead == 'U') ADVANCE(222);
      if (lookahead == 'u') ADVANCE(218);
      if (lookahead == 'x') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(235);
      if (lookahead == '%' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_single_site_token1);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_raw_string_literal);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '\r') ADVANCE(231);
      if (lookahead == '#') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(231);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '#') ADVANCE(231);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(232);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '#') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '*') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      if (lookahead == '%' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '*') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      if (lookahead == '%' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '*') ADVANCE(214);
      if (lookahead == '%' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(233);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_int_literal);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_int_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(240);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__site_url);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == ':') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',') ADVANCE(246);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__site_url);
      if (lookahead == ':') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',') ADVANCE(246);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__site_url);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',') ADVANCE(246);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__site_url);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',') ADVANCE(246);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__site_url);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',') ADVANCE(246);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__site_url);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',') ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__localhost);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == ':') ADVANCE(133);
      if (lookahead == '*' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__localhost);
      if (lookahead == ':') ADVANCE(133);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__localhost);
      if (lookahead == ':') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__localhost);
      if (lookahead == ':') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(249);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__localhost);
      if (lookahead == ':') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(250);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__localhost);
      if (lookahead == ':') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__ipv4);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__ipv4);
      if (lookahead == '5') ADVANCE(255);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(256);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__ipv4);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(253);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__ipv4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__ipv4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(256);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__ipv6);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == '%') ADVANCE(153);
      if (lookahead == '1') ADVANCE(269);
      if (lookahead == '2') ADVANCE(260);
      if (lookahead == ':') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(274);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == '%') ADVANCE(153);
      if (lookahead == '5') ADVANCE(266);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '\\') ADVANCE(158);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(273);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == '%') ADVANCE(153);
      if (lookahead == ':') ADVANCE(26);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == '%') ADVANCE(153);
      if (lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(261);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == '%') ADVANCE(153);
      if (lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(262);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == '%') ADVANCE(153);
      if (lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(263);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == '%') ADVANCE(153);
      if (lookahead == ':') ADVANCE(22);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == '%') ADVANCE(153);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '\\') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(270);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(272);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == '%') ADVANCE(153);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '\\') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(273);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == '%') ADVANCE(153);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '\\') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(272);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == '%') ADVANCE(153);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '\\') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(273);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == '%') ADVANCE(153);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '\\') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(265);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == '%') ADVANCE(153);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '\\') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(272);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == '%') ADVANCE(153);
      if (lookahead == ':') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(265);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == '%') ADVANCE(153);
      if (lookahead == ':') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(272);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == '%') ADVANCE(153);
      if (lookahead == ':') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(273);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == '%') ADVANCE(153);
      if (lookahead == ':') ADVANCE(14);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == '%') ADVANCE(153);
      if (lookahead == ':') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(275);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == '%') ADVANCE(153);
      if (lookahead == ':') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(276);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == '%') ADVANCE(153);
      if (lookahead == ':') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(277);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == '%') ADVANCE(153);
      if (lookahead == ':') ADVANCE(137);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == '%') ADVANCE(153);
      if (lookahead == ':') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(279);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == '%') ADVANCE(153);
      if (lookahead == ':') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(280);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == '%') ADVANCE(153);
      if (lookahead == ':') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(281);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == '0') ADVANCE(284);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == '\\') ADVANCE(158);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(352);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(354);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == '0') ADVANCE(285);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == '\\') ADVANCE(158);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(353);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == '0') ADVANCE(311);
      if (lookahead == ':') ADVANCE(69);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(346);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == '1') ADVANCE(301);
      if (lookahead == '2') ADVANCE(291);
      if (lookahead == 'f') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(299);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(309);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == '1') ADVANCE(320);
      if (lookahead == '2') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(318);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(325);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == '1') ADVANCE(330);
      if (lookahead == '2') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(335);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == '1') ADVANCE(340);
      if (lookahead == '2') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(338);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(345);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == '1') ADVANCE(350);
      if (lookahead == '2') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(348);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(355);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == '5') ADVANCE(298);
      if (lookahead == ':') ADVANCE(145);
      if (lookahead == '\\') ADVANCE(158);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(308);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == '5') ADVANCE(356);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(357);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == '5') ADVANCE(317);
      if (lookahead == ':') ADVANCE(137);
      if (lookahead == '\\') ADVANCE(158);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(319);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(324);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == '5') ADVANCE(327);
      if (lookahead == ':') ADVANCE(138);
      if (lookahead == '\\') ADVANCE(158);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(329);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(334);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == '5') ADVANCE(337);
      if (lookahead == ':') ADVANCE(141);
      if (lookahead == '\\') ADVANCE(158);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(339);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(344);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == '5') ADVANCE(347);
      if (lookahead == ':') ADVANCE(143);
      if (lookahead == '\\') ADVANCE(158);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(354);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == ':') ADVANCE(145);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == ':') ADVANCE(145);
      if (lookahead == '\\') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(302);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(307);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == ':') ADVANCE(145);
      if (lookahead == '\\') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(303);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(308);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == ':') ADVANCE(145);
      if (lookahead == '\\') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(302);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(307);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == ':') ADVANCE(145);
      if (lookahead == '\\') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(308);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == ':') ADVANCE(145);
      if (lookahead == '\\') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(297);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == ':') ADVANCE(145);
      if (lookahead == '\\') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(307);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == ':') ADVANCE(145);
      if (lookahead == 'f') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(307);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == ':') ADVANCE(145);
      if (lookahead == 'f') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(297);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == ':') ADVANCE(145);
      if (lookahead == 'f') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(308);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == ':') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(297);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == ':') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(307);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == ':') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(308);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == ':') ADVANCE(65);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == ':') ADVANCE(69);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == ':') ADVANCE(139);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == ':') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(314);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == ':') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(312);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == ':') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(313);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == ':') ADVANCE(137);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == ':') ADVANCE(137);
      if (lookahead == '\\') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(321);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(323);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == ':') ADVANCE(137);
      if (lookahead == '\\') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(324);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == ':') ADVANCE(137);
      if (lookahead == '\\') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(323);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == ':') ADVANCE(137);
      if (lookahead == '\\') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(319);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(324);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == ':') ADVANCE(137);
      if (lookahead == '\\') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(316);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == ':') ADVANCE(137);
      if (lookahead == '\\') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(323);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == ':') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(316);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == ':') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(323);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == ':') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(324);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == ':') ADVANCE(138);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == ':') ADVANCE(138);
      if (lookahead == '\\') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(331);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(333);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == ':') ADVANCE(138);
      if (lookahead == '\\') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(334);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == ':') ADVANCE(138);
      if (lookahead == '\\') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(333);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == ':') ADVANCE(138);
      if (lookahead == '\\') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(334);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == ':') ADVANCE(138);
      if (lookahead == '\\') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(326);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == ':') ADVANCE(138);
      if (lookahead == '\\') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(333);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == ':') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(326);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == ':') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(333);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == ':') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(334);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == ':') ADVANCE(141);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == ':') ADVANCE(141);
      if (lookahead == '\\') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(341);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(343);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == ':') ADVANCE(141);
      if (lookahead == '\\') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(342);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(344);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == ':') ADVANCE(141);
      if (lookahead == '\\') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(341);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(343);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == ':') ADVANCE(141);
      if (lookahead == '\\') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(344);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == ':') ADVANCE(141);
      if (lookahead == '\\') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(336);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == ':') ADVANCE(141);
      if (lookahead == '\\') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(343);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(336);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(343);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(344);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == ':') ADVANCE(143);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == ':') ADVANCE(143);
      if (lookahead == '\\') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(351);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(353);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == ':') ADVANCE(143);
      if (lookahead == '\\') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(352);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(354);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == ':') ADVANCE(143);
      if (lookahead == '\\') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(351);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(353);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == ':') ADVANCE(143);
      if (lookahead == '\\') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(354);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == ':') ADVANCE(143);
      if (lookahead == '\\') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(346);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == ':') ADVANCE(143);
      if (lookahead == '\\') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(353);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == ':') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(346);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == ':') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(353);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym__ipv6);
      if (lookahead == ':') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(354);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym__ipv6);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(258);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym__ipv6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__ipv6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym__ipv6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(258);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__ipv6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(359);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__ipv6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(360);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym__ipv6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(315);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__ipv6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(361);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__port);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__port);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(364);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym__port);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(365);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym__port);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(366);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym__port);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(367);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 164},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 164},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 164},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 164},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 165},
  [13] = {.lex_state = 165},
  [14] = {.lex_state = 164},
  [15] = {.lex_state = 164},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 164},
  [21] = {.lex_state = 164},
  [22] = {.lex_state = 165},
  [23] = {.lex_state = 164},
  [24] = {.lex_state = 164},
  [25] = {.lex_state = 164},
  [26] = {.lex_state = 164},
  [27] = {.lex_state = 165},
  [28] = {.lex_state = 165},
  [29] = {.lex_state = 165},
  [30] = {.lex_state = 165},
  [31] = {.lex_state = 165},
  [32] = {.lex_state = 164},
  [33] = {.lex_state = 164},
  [34] = {.lex_state = 165},
  [35] = {.lex_state = 164},
  [36] = {.lex_state = 165},
  [37] = {.lex_state = 165},
  [38] = {.lex_state = 165},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 165},
  [41] = {.lex_state = 165},
  [42] = {.lex_state = 165},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 165},
  [45] = {.lex_state = 165},
  [46] = {.lex_state = 165},
  [47] = {.lex_state = 165},
  [48] = {.lex_state = 165},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 165},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 165},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_snippet_name] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_url] = ACTIONS(1),
    [sym__placeholder] = ACTIONS(1),
    [sym_directive_name] = ACTIONS(1),
    [sym_matcher_name] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [aux_sym_matcher_token1] = ACTIONS(1),
    [aux_sym_single_site_token1] = ACTIONS(1),
    [sym_raw_string_literal] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_int_literal] = ACTIONS(1),
    [sym__localhost] = ACTIONS(1),
    [sym__port] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(56),
    [sym_global_options] = STATE(3),
    [sym_snippet_definition] = STATE(5),
    [sym_sites] = STATE(57),
    [sym_single_site] = STATE(58),
    [sym_site_definition] = STATE(15),
    [sym_site_address] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(5),
    [aux_sym_sites_repeat1] = STATE(15),
    [anon_sym_LBRACE] = ACTIONS(5),
    [sym_snippet_name] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym__placeholder] = ACTIONS(9),
    [sym__site_url] = ACTIONS(9),
    [sym__localhost] = ACTIONS(11),
    [sym__ipv4] = ACTIONS(9),
    [sym__ipv6] = ACTIONS(9),
    [sym__port] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      aux_sym_global_options_token1,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym__placeholder,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    STATE(10), 1,
      sym_matcher,
    STATE(42), 1,
      sym_block,
    ACTIONS(23), 3,
      sym_matcher_name,
      anon_sym_STAR,
      aux_sym_matcher_token1,
    STATE(7), 4,
      sym_placeholder,
      sym__string_literal,
      sym_interpreted_string_literal,
      aux_sym_directive_repeat1,
    ACTIONS(19), 5,
      sym_argument,
      sym_url,
      sym_unix_socket,
      sym_raw_string_literal,
      sym_int_literal,
  [40] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_snippet_name,
    ACTIONS(11), 1,
      sym__localhost,
    STATE(12), 1,
      sym_site_address,
    STATE(58), 1,
      sym_single_site,
    STATE(60), 1,
      sym_sites,
    STATE(8), 2,
      sym_snippet_definition,
      aux_sym_source_file_repeat1,
    STATE(15), 2,
      sym_site_definition,
      aux_sym_sites_repeat1,
    ACTIONS(9), 5,
      sym__placeholder,
      sym__site_url,
      sym__ipv4,
      sym__ipv6,
      sym__port,
  [74] = 8,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym__placeholder,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      aux_sym_global_options_token1,
    STATE(51), 1,
      sym_block,
    STATE(11), 4,
      sym_placeholder,
      sym__string_literal,
      sym_interpreted_string_literal,
      aux_sym_directive_repeat1,
    ACTIONS(29), 5,
      sym_argument,
      sym_url,
      sym_unix_socket,
      sym_raw_string_literal,
      sym_int_literal,
  [106] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_snippet_name,
    ACTIONS(11), 1,
      sym__localhost,
    STATE(12), 1,
      sym_site_address,
    STATE(58), 1,
      sym_single_site,
    STATE(60), 1,
      sym_sites,
    STATE(15), 2,
      sym_site_definition,
      aux_sym_sites_repeat1,
    STATE(20), 2,
      sym_snippet_definition,
      aux_sym_source_file_repeat1,
    ACTIONS(9), 5,
      sym__placeholder,
      sym__site_url,
      sym__ipv4,
      sym__ipv6,
      sym__port,
  [140] = 8,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym__placeholder,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      aux_sym_global_options_token1,
    STATE(53), 1,
      sym_block,
    STATE(11), 4,
      sym_placeholder,
      sym__string_literal,
      sym_interpreted_string_literal,
      aux_sym_directive_repeat1,
    ACTIONS(29), 5,
      sym_argument,
      sym_url,
      sym_unix_socket,
      sym_raw_string_literal,
      sym_int_literal,
  [172] = 8,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym__placeholder,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      aux_sym_global_options_token1,
    STATE(40), 1,
      sym_block,
    STATE(11), 4,
      sym_placeholder,
      sym__string_literal,
      sym_interpreted_string_literal,
      aux_sym_directive_repeat1,
    ACTIONS(29), 5,
      sym_argument,
      sym_url,
      sym_unix_socket,
      sym_raw_string_literal,
      sym_int_literal,
  [204] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_snippet_name,
    ACTIONS(11), 1,
      sym__localhost,
    STATE(12), 1,
      sym_site_address,
    STATE(58), 1,
      sym_single_site,
    STATE(61), 1,
      sym_sites,
    STATE(15), 2,
      sym_site_definition,
      aux_sym_sites_repeat1,
    STATE(20), 2,
      sym_snippet_definition,
      aux_sym_source_file_repeat1,
    ACTIONS(9), 5,
      sym__placeholder,
      sym__site_url,
      sym__ipv4,
      sym__ipv6,
      sym__port,
  [238] = 8,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym__placeholder,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      aux_sym_global_options_token1,
    STATE(41), 1,
      sym_block,
    STATE(6), 4,
      sym_placeholder,
      sym__string_literal,
      sym_interpreted_string_literal,
      aux_sym_directive_repeat1,
    ACTIONS(37), 5,
      sym_argument,
      sym_url,
      sym_unix_socket,
      sym_raw_string_literal,
      sym_int_literal,
  [270] = 8,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym__placeholder,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      aux_sym_global_options_token1,
    STATE(40), 1,
      sym_block,
    STATE(4), 4,
      sym_placeholder,
      sym__string_literal,
      sym_interpreted_string_literal,
      aux_sym_directive_repeat1,
    ACTIONS(39), 5,
      sym_argument,
      sym_url,
      sym_unix_socket,
      sym_raw_string_literal,
      sym_int_literal,
  [302] = 7,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      aux_sym_global_options_token1,
    ACTIONS(48), 1,
      sym__placeholder,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    STATE(11), 4,
      sym_placeholder,
      sym__string_literal,
      sym_interpreted_string_literal,
      aux_sym_directive_repeat1,
    ACTIONS(45), 5,
      sym_argument,
      sym_url,
      sym_unix_socket,
      sym_raw_string_literal,
      sym_int_literal,
  [331] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 1,
      anon_sym_LBRACE,
    ACTIONS(58), 1,
      sym_directive_name,
    ACTIONS(60), 1,
      sym_matcher_name,
    ACTIONS(62), 1,
      aux_sym_single_site_token1,
    STATE(13), 1,
      aux_sym_single_site_repeat1,
    STATE(32), 1,
      sym_block,
    STATE(31), 4,
      sym_directive,
      sym_named_matcher,
      sym__definition,
      aux_sym_single_site_repeat2,
  [362] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_LBRACE,
    ACTIONS(58), 1,
      sym_directive_name,
    ACTIONS(60), 1,
      sym_matcher_name,
    ACTIONS(62), 1,
      aux_sym_single_site_token1,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    STATE(25), 1,
      sym_block,
    STATE(36), 1,
      aux_sym_single_site_repeat1,
    STATE(34), 4,
      sym_directive,
      sym_named_matcher,
      sym__definition,
      aux_sym_single_site_repeat2,
  [393] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 1,
      sym__localhost,
    STATE(43), 1,
      sym_site_address,
    STATE(14), 2,
      sym_site_definition,
      aux_sym_sites_repeat1,
    ACTIONS(68), 5,
      sym__placeholder,
      sym__site_url,
      sym__ipv4,
      sym__ipv6,
      sym__port,
  [417] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__localhost,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
    STATE(43), 1,
      sym_site_address,
    STATE(14), 2,
      sym_site_definition,
      aux_sym_sites_repeat1,
    ACTIONS(9), 5,
      sym__placeholder,
      sym__site_url,
      sym__ipv4,
      sym__ipv6,
      sym__port,
  [441] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(78), 1,
      aux_sym_global_options_token1,
    ACTIONS(76), 8,
      anon_sym_LBRACE,
      sym_argument,
      sym_url,
      sym_unix_socket,
      sym__placeholder,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      sym_int_literal,
  [458] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(82), 1,
      aux_sym_global_options_token1,
    ACTIONS(80), 8,
      anon_sym_LBRACE,
      sym_argument,
      sym_url,
      sym_unix_socket,
      sym__placeholder,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      sym_int_literal,
  [475] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(86), 1,
      aux_sym_global_options_token1,
    ACTIONS(84), 8,
      anon_sym_LBRACE,
      sym_argument,
      sym_url,
      sym_unix_socket,
      sym__placeholder,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      sym_int_literal,
  [492] = 3,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(90), 1,
      aux_sym_global_options_token1,
    ACTIONS(88), 8,
      anon_sym_LBRACE,
      sym_argument,
      sym_url,
      sym_unix_socket,
      sym__placeholder,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      sym_int_literal,
  [509] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      sym_snippet_name,
    ACTIONS(97), 1,
      sym__localhost,
    STATE(20), 2,
      sym_snippet_definition,
      aux_sym_source_file_repeat1,
    ACTIONS(95), 5,
      sym__placeholder,
      sym__site_url,
      sym__ipv4,
      sym__ipv6,
      sym__port,
  [530] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      sym__localhost,
    ACTIONS(99), 7,
      ts_builtin_sym_end,
      sym_snippet_name,
      sym__placeholder,
      sym__site_url,
      sym__ipv4,
      sym__ipv6,
      sym__port,
  [546] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      sym_directive_name,
    ACTIONS(108), 1,
      sym_matcher_name,
    ACTIONS(103), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(22), 4,
      sym_directive,
      sym_named_matcher,
      sym__definition,
      aux_sym_single_site_repeat2,
  [566] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym__localhost,
    ACTIONS(111), 7,
      ts_builtin_sym_end,
      sym_snippet_name,
      sym__placeholder,
      sym__site_url,
      sym__ipv4,
      sym__ipv6,
      sym__port,
  [582] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      sym__localhost,
    ACTIONS(115), 6,
      sym_snippet_name,
      sym__placeholder,
      sym__site_url,
      sym__ipv4,
      sym__ipv6,
      sym__port,
  [597] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      sym__localhost,
    ACTIONS(119), 6,
      ts_builtin_sym_end,
      sym__placeholder,
      sym__site_url,
      sym__ipv4,
      sym__ipv6,
      sym__port,
  [612] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      sym__localhost,
    ACTIONS(123), 6,
      sym_snippet_name,
      sym__placeholder,
      sym__site_url,
      sym__ipv4,
      sym__ipv6,
      sym__port,
  [627] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      sym_directive_name,
    ACTIONS(60), 1,
      sym_matcher_name,
    ACTIONS(127), 1,
      anon_sym_RBRACE,
    STATE(22), 4,
      sym_directive,
      sym_named_matcher,
      sym__definition,
      aux_sym_single_site_repeat2,
  [646] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      sym_directive_name,
    ACTIONS(60), 1,
      sym_matcher_name,
    ACTIONS(129), 1,
      anon_sym_RBRACE,
    STATE(30), 4,
      sym_directive,
      sym_named_matcher,
      sym__definition,
      aux_sym_single_site_repeat2,
  [665] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      sym_directive_name,
    ACTIONS(60), 1,
      sym_matcher_name,
    ACTIONS(131), 1,
      anon_sym_RBRACE,
    STATE(27), 4,
      sym_directive,
      sym_named_matcher,
      sym__definition,
      aux_sym_single_site_repeat2,
  [684] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      sym_directive_name,
    ACTIONS(60), 1,
      sym_matcher_name,
    ACTIONS(133), 1,
      anon_sym_RBRACE,
    STATE(22), 4,
      sym_directive,
      sym_named_matcher,
      sym__definition,
      aux_sym_single_site_repeat2,
  [703] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      sym_directive_name,
    ACTIONS(60), 1,
      sym_matcher_name,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
    STATE(22), 4,
      sym_directive,
      sym_named_matcher,
      sym__definition,
      aux_sym_single_site_repeat2,
  [722] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      sym__localhost,
    ACTIONS(137), 6,
      ts_builtin_sym_end,
      sym__placeholder,
      sym__site_url,
      sym__ipv4,
      sym__ipv6,
      sym__port,
  [737] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__localhost,
    STATE(38), 1,
      sym_site_address,
    ACTIONS(9), 5,
      sym__placeholder,
      sym__site_url,
      sym__ipv4,
      sym__ipv6,
      sym__port,
  [754] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      sym_directive_name,
    ACTIONS(60), 1,
      sym_matcher_name,
    ACTIONS(141), 1,
      ts_builtin_sym_end,
    STATE(22), 4,
      sym_directive,
      sym_named_matcher,
      sym__definition,
      aux_sym_single_site_repeat2,
  [773] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      sym__localhost,
    ACTIONS(143), 6,
      sym_snippet_name,
      sym__placeholder,
      sym__site_url,
      sym__ipv4,
      sym__ipv6,
      sym__port,
  [788] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      aux_sym_single_site_token1,
    STATE(36), 1,
      aux_sym_single_site_repeat1,
    ACTIONS(147), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_directive_name,
      sym_matcher_name,
  [804] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_directive_name,
      sym_matcher_name,
      aux_sym_single_site_token1,
  [815] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_directive_name,
      sym_matcher_name,
      aux_sym_single_site_token1,
  [826] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_LBRACE,
    ACTIONS(62), 1,
      aux_sym_single_site_token1,
    STATE(25), 1,
      sym_block,
    STATE(36), 1,
      aux_sym_single_site_repeat1,
  [842] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_directive_name,
      sym_matcher_name,
  [852] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_directive_name,
      sym_matcher_name,
  [862] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_directive_name,
      sym_matcher_name,
  [872] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_LBRACE,
    ACTIONS(62), 1,
      aux_sym_single_site_token1,
    STATE(32), 1,
      sym_block,
    STATE(39), 1,
      aux_sym_single_site_repeat1,
  [888] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_directive_name,
      sym_matcher_name,
  [898] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_RBRACE,
    ACTIONS(162), 1,
      sym_directive_name,
    STATE(45), 2,
      sym_directive,
      aux_sym_global_options_repeat1,
  [912] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      sym_directive_name,
    ACTIONS(165), 1,
      anon_sym_RBRACE,
    STATE(47), 2,
      sym_directive,
      aux_sym_global_options_repeat1,
  [926] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      sym_directive_name,
    ACTIONS(167), 1,
      anon_sym_RBRACE,
    STATE(45), 2,
      sym_directive,
      aux_sym_global_options_repeat1,
  [940] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_directive_name,
      sym_matcher_name,
  [950] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_DQUOTE2,
    STATE(52), 1,
      aux_sym_interpreted_string_literal_repeat1,
    ACTIONS(171), 2,
      sym__interpreted_string_literal_basic_content,
      sym_escape_sequence,
  [964] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_DQUOTE2,
    STATE(49), 1,
      aux_sym_interpreted_string_literal_repeat1,
    ACTIONS(175), 2,
      sym__interpreted_string_literal_basic_content,
      sym_escape_sequence,
  [978] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_directive_name,
      sym_matcher_name,
  [988] = 4,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_DQUOTE2,
    STATE(52), 1,
      aux_sym_interpreted_string_literal_repeat1,
    ACTIONS(181), 2,
      sym__interpreted_string_literal_basic_content,
      sym_escape_sequence,
  [1002] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_directive_name,
      sym_matcher_name,
  [1012] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_LBRACE,
    STATE(35), 1,
      sym_block,
  [1022] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(186), 1,
      aux_sym_global_options_token1,
  [1029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      ts_builtin_sym_end,
  [1036] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      ts_builtin_sym_end,
  [1043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
  [1050] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(192), 1,
      aux_sym_global_options_token1,
  [1057] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      ts_builtin_sym_end,
  [1064] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      ts_builtin_sym_end,
  [1071] = 2,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(198), 1,
      aux_sym_global_options_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 40,
  [SMALL_STATE(4)] = 74,
  [SMALL_STATE(5)] = 106,
  [SMALL_STATE(6)] = 140,
  [SMALL_STATE(7)] = 172,
  [SMALL_STATE(8)] = 204,
  [SMALL_STATE(9)] = 238,
  [SMALL_STATE(10)] = 270,
  [SMALL_STATE(11)] = 302,
  [SMALL_STATE(12)] = 331,
  [SMALL_STATE(13)] = 362,
  [SMALL_STATE(14)] = 393,
  [SMALL_STATE(15)] = 417,
  [SMALL_STATE(16)] = 441,
  [SMALL_STATE(17)] = 458,
  [SMALL_STATE(18)] = 475,
  [SMALL_STATE(19)] = 492,
  [SMALL_STATE(20)] = 509,
  [SMALL_STATE(21)] = 530,
  [SMALL_STATE(22)] = 546,
  [SMALL_STATE(23)] = 566,
  [SMALL_STATE(24)] = 582,
  [SMALL_STATE(25)] = 597,
  [SMALL_STATE(26)] = 612,
  [SMALL_STATE(27)] = 627,
  [SMALL_STATE(28)] = 646,
  [SMALL_STATE(29)] = 665,
  [SMALL_STATE(30)] = 684,
  [SMALL_STATE(31)] = 703,
  [SMALL_STATE(32)] = 722,
  [SMALL_STATE(33)] = 737,
  [SMALL_STATE(34)] = 754,
  [SMALL_STATE(35)] = 773,
  [SMALL_STATE(36)] = 788,
  [SMALL_STATE(37)] = 804,
  [SMALL_STATE(38)] = 815,
  [SMALL_STATE(39)] = 826,
  [SMALL_STATE(40)] = 842,
  [SMALL_STATE(41)] = 852,
  [SMALL_STATE(42)] = 862,
  [SMALL_STATE(43)] = 872,
  [SMALL_STATE(44)] = 888,
  [SMALL_STATE(45)] = 898,
  [SMALL_STATE(46)] = 912,
  [SMALL_STATE(47)] = 926,
  [SMALL_STATE(48)] = 940,
  [SMALL_STATE(49)] = 950,
  [SMALL_STATE(50)] = 964,
  [SMALL_STATE(51)] = 978,
  [SMALL_STATE(52)] = 988,
  [SMALL_STATE(53)] = 1002,
  [SMALL_STATE(54)] = 1012,
  [SMALL_STATE(55)] = 1022,
  [SMALL_STATE(56)] = 1029,
  [SMALL_STATE(57)] = 1036,
  [SMALL_STATE(58)] = 1043,
  [SMALL_STATE(59)] = 1050,
  [SMALL_STATE(60)] = 1057,
  [SMALL_STATE(61)] = 1064,
  [SMALL_STATE(62)] = 1071,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_repeat1, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_repeat1, 2), SHIFT_REPEAT(11),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_repeat1, 2), SHIFT_REPEAT(19),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_repeat1, 2), SHIFT_REPEAT(50),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_site, 1, .production_id = 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_site, 2, .production_id = 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sites_repeat1, 2),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sites_repeat1, 2), SHIFT_REPEAT(37),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sites_repeat1, 2), SHIFT_REPEAT(37),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sites, 1),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted_string_literal, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted_string_literal, 2),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted_string_literal, 3),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted_string_literal, 3),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_matcher, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matcher, 1),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_placeholder, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_placeholder, 1),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_single_site_repeat2, 2),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_single_site_repeat2, 2), SHIFT_REPEAT(2),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_single_site_repeat2, 2), SHIFT_REPEAT(9),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_options, 4),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_options, 4),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_site_definition, 3, .production_id = 2),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_site_definition, 3, .production_id = 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_options, 3),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_options, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_site, 2, .production_id = 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_site_definition, 2, .production_id = 1),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_site_definition, 2, .production_id = 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_site, 3, .production_id = 4),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snippet_definition, 2, .production_id = 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_snippet_definition, 2, .production_id = 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_single_site_repeat1, 2),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_single_site_repeat1, 2), SHIFT_REPEAT(33),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_site_address, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3, .production_id = 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_matcher, 2, .production_id = 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2, .production_id = 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_global_options_repeat1, 2),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_global_options_repeat1, 2), SHIFT_REPEAT(2),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4, .production_id = 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 2),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 2), SHIFT_REPEAT(52),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_matcher, 3, .production_id = 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [188] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_caddyfile(void) {
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
