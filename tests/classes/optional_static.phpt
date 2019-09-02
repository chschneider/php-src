--TEST--
Classes can declare functions which can be called statically or in object
--FILE--
<?php

class TestClass
{
	var $dynamic = 'dynamic';

	static function Test1()
	{
		var_dump(isset($this) ? $this->dynamic : 'static');
	}

	?static function Test2()
	{
		var_dump(isset($this) ? $this->dynamic : 'static');
	}

	function Test3()
	{
		var_dump(isset($this) ? $this->dynamic : 'static');
	}
}

$obj = new TestClass;
$obj->Test1();
TestClass::Test1();
$obj->Test2();
TestClass::Test2();
$obj->Test3();
TestClass::Test3();

?>
--EXPECT--
string(6) "static"
string(6) "static"
string(7) "dynamic"
string(6) "static"
string(7) "dynamic"

Fatal error: Uncaught Error: Non-static method TestClass::Test3() cannot be called statically in /home/cschneid/src/php-src/tests/classes/optional_static.php:29
Stack trace:
#0 {main}
  thrown in /home/cschneid/src/php-src/tests/classes/optional_static.php on line 29
