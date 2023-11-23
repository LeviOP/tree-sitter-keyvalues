(key) @property
(value) @string
(conditional) @conditional

((key) @include
 (#any-of? @include "#include" "#base" "\"#include\"" "\"#base\""))

[
  "{"
  "}"
] @punctuation.bracket

(escape_sequence) @string.escape
(comment) @comment
