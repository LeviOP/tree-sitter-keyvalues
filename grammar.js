module.exports = grammar({
    name: "keyvalues",

    extras: $ => [
        /\s/,
        $.comment
    ],

    rules: {
        document: $ => repeat($.pair),
        pair: $ => seq(
            field("key", $.key),
            field("value", $._value),
            optional(field("conditional", $.conditional))
        ),
        conditional: $ => token(seq(
            "[", token.immediate(/[^"{}\s]*/), "]"
        )),
        key: $ => choice(
            seq("\"", $._string_content, "\""),
            $._unquoted_string
        ),
        _value: $ => choice(
            $.subpairs,
            $.value
        ),
        value: $ => $._string_value,
        _string_value: $ => choice(
            seq("\"", optional($._string_content), "\""),
            $._unquoted_string
        ),
        subpairs: $ => seq("{", repeat($.pair), "}"),
        _unquoted_string: $ => /[^\s{}"]+/,
        _string_content: $ => repeat1(choice(
            token.immediate(prec(1, /[^\\"]+/)),
            $.escape_sequence,
            "\\"
        )),
        escape_sequence: $ => token.immediate(seq(
            "\\",
            /(n|t|\\|\")/
        )),
        comment: $ => token(prec(1, seq("/", /.*/)))
    }
});
