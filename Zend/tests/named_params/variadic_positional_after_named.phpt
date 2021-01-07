--TEST--
Additional named params are collect into variadics
--FILE--
<?php

function test($a, string ...$extra) {
    var_dump($a);
    var_dump($extra);
    // Extra named parameters do not contribute toward func_num_args() and func_get_args().
    var_dump(func_num_args());
    var_dump(func_get_args());
}

test(a: 'a', b: 'b', c: 'c', 'foo', extra: 'extra', 'bar');
echo "\n";

?>
--EXPECT--
string(1) "a"
array(5) {
  [0]=>
  string(3) "foo"
  [1]=>
  string(3) "bar"
  ["b"]=>
  string(1) "b"
  ["c"]=>
  string(1) "c"
  ["extra"]=>
  string(5) "extra"
}
int(3)
array(3) {
  [0]=>
  string(1) "a"
  [1]=>
  string(3) "foo"
  [2]=>
  string(3) "bar"
}
