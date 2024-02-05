const subdirectiveFields = $ => [
		repeat(choice($.url, $.unix_socket, $.placeholder, $._string_literal, $.int_literal, $.argument)),
		choice($.block, token.immediate(/\r?\n/)),
	],
	directiveFields = $ => [optional($.matcher), ...subdirectiveFields($)];
module.exports = grammar({
	name: 'caddyfile',

	extras: $ => [$.comment, /\s/],

	rules: {
		source_file: $ =>
			seq(
				// Allow a single "global options" block at the beginning of the file.
				optional($.global_options),

				// Allow multiple snippet definitions (re-usable/importable blocks) that are shared
				// across multiple sites.
				repeat($.snippet_definition),

				// Allow site definitions, either a single site or multiple site blocks.
				$.sites,
			),

		// Global options is a special block that only allows the use of directives.
		// Defining snippets or named matchers is not allowed in it's scope.
		global_options: $ => seq('{', token.immediate(/\r?\n/), repeat($.directive), '}'),

		// Snippets are re-usable parts of a caddyfile, the content of a snippet can be anything
		// that is allowed inside of a site block.
		//
		// Snippets must be defined outside of a site block and after global options (if present).
		snippet_name: _ => token(seq('(', /[a-zA-Z0-9\-_]+/, ')')),
		snippet_definition: $ => seq(field('name', $.snippet_name), $.block),

		// Comment is available at the start (or during) a line that contains a # with preceding whitespace
		comment: _ => token(seq('#', /(#+(.|\r?\n)|[^#\n])*/)),

		// Argument is pretty much anything that isn't a matcher
		// TODO: figure out how to make this be a fallback, it is overriding preference of unix_sockets
		// and some matchers.
		argument: _ => /[a-zA-Z\-_+.\\\/*]([a-zA-Z\-_+.\\\/*0-9]*)/,

		// Website URLs or a Unix Socket path
		url: _ => /(https?:\/\/)[a-z0-9-\*]*(?:\.[a-zA-Z]{2,})+(:[0-9]+)*([^, \r\n])*/,
		unix_socket: _ => token(seq('unix//', /[a-zA-Z0-9_\-./*]+/)),

		// Placeholder is used for environment variables or runtime value substitution
		_placeholder: _ => token(seq('{', token.immediate(/\$?[a-zA-Z0-9][a-zA-Z0-9_.\[\]]*/), '}')),
		placeholder: $ => $._placeholder,

		// Directives
		// TODO
		directive_name: _ => /[a-zA-Z_\-+]+/,
		directive: $ => seq(field('name', $.directive_name), ...directiveFields($)),

		// https://caddyserver.com/docs/caddyfile/matchers#named-matchers
		matcher_name: _ => token(seq('@', /[a-zA-Z0-9\-_]+/)),
		named_matcher: $ => seq(field('name', $.matcher_name), ...subdirectiveFields($)),
		matcher: $ =>
			choice(
				// Allow a lone `*`
				'*',
				// Path matching
				token(seq(choice('/', '\\'), /([a-zA-Z0-9\-_%\\\/.]+)*(\*){0,1}/)),
				// Named matcher
				$.matcher_name,
			),

		//
		// Sites
		//

		sites: $ => choice($.single_site, repeat1($.site_definition)),

		single_site: $ => seq(field('name', commaSep1($.site_address)), field('definitions', repeat($._definition))),

		site_definition: $ => seq(field('name', commaSep1($.site_address)), $.block),

		_definition: $ => choice($.directive, $.named_matcher),

		// Block is a site block that is allowed to define directives and named matchers.
		block: $ => seq('{', token.immediate(/\r?\n/), repeat($._definition), '}'),

		//
		// Literals
		//

		_string_literal: $ => choice($.raw_string_literal, $.interpreted_string_literal),

		// TODO: this will allow new-lines which we don't want to allow.
		raw_string_literal: _ => token(seq('`', repeat(/[^`]/), '`')),

		interpreted_string_literal: $ =>
			seq(
				'"',
				repeat(choice($._interpreted_string_literal_basic_content, $.escape_sequence)),
				token.immediate('"'),
			),
		_interpreted_string_literal_basic_content: _ => token.immediate(prec(1, /[^"\n\\]+/)),

		escape_sequence: _ =>
			token.immediate(
				seq('\\', choice(/[^xuU]/, /\d{2,3}/, /x[0-9a-fA-F]{2,}/, /u[0-9a-fA-F]{4}/, /U[0-9a-fA-F]{8}/)),
			),

		int_literal: _ => token(choice('0', seq(/[1-9]/, repeat(/[0-9]/)))),

		//
		// Addresses
		//

		site_address: $ => choice($._site_url, $._localhost, $._ipv4, $._ipv6, $._port, $._placeholder),

		_site_url: _ => /(https?:\/\/)*[a-z0-9-\*]*(?:\.[a-zA-Z]{2,})+(:[0-9]+)*([^, \r\n])*/,
		_localhost: _ => /localhost(:[0-9]{1,5})*/,
		_ipv4: _ => /((25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)\\.){3}(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)/,
		_ipv6: _ =>
			/(([0-9a-fA-F]{1,4}:){7,7}[0-9a-fA-F]{1,4}|([0-9a-fA-F]{1,4}:){1,7}:|([0-9a-fA-F]{1,4}:){1,6}:[0-9a-fA-F]{1,4}|([0-9a-fA-F]{1,4}:){1,5}(:[0-9a-fA-F]{1,4}){1,2}|([0-9a-fA-F]{1,4}:){1,4}(:[0-9a-fA-F]{1,4}){1,3}|([0-9a-fA-F]{1,4}:){1,3}(:[0-9a-fA-F]{1,4}){1,4}|([0-9a-fA-F]{1,4}:){1,2}(:[0-9a-fA-F]{1,4}){1,5}|[0-9a-fA-F]{1,4}:((:[0-9a-fA-F]{1,4}){1,6})|:((:[0-9a-fA-F]{1,4}){1,7}|:)|fe80:(:[0-9a-fA-F]{0,4}){0,4}%[0-9a-zA-Z]{1,}|::(ffff(:0{1,4}){0,1}:){0,1}((25[0-5]|(2[0-4]|1{0,1}[0-9]){0,1}[0-9])\\.){3,3}(25[0-5]|(2[0-4]|1{0,1}[0-9]){0,1}[0-9])|([0-9a-fA-F]{1,4}:){1,4}:((25[0-5]|(2[0-4]|1{0,1}[0-9]){0,1}[0-9])\\.){3,3}(25[0-5]|(2[0-4]|1{0,1}[0-9]){0,1}[0-9]))/,
		_port: _ => /:[0-9]{1,5}/,
	},
});

/**
 * Creates a rule to optionally match one or more of the rules separated by a comma
 *
 * @param {Rule} rule
 *
 * @return {ChoiceRule}
 *
 */
function commaSep(rule) {
	return optional(commaSep1(rule));
}

/**
 * Creates a rule to match one or more of the rules separated by a comma
 *
 * @param {Rule} rule
 *
 * @return {SeqRule}
 *
 */
function commaSep1(rule) {
	return seq(rule, repeat(seq(token.immediate(/, /), rule)));
}
