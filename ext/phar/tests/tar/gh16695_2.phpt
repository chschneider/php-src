--TEST--
GH-16695 (phar:// tar parser and zero-length file header blocks)
--CREDITS--
hakre
--EXTENSIONS--
phar
--INI--
phar.require_hash=0
--FILE--
<?php

$reportTar = __DIR__.'/gh16695_2.tmp';

$length = file_put_contents($reportTar, base64_decode('bWV0YS5qc29uAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAADAwMDA2NDQAMDAwMDAwMAAwMDAwMDAwADAwMDAwMDAwMTcyADAwMDAwMDAwMDAwADAxMTAyNgAgMAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB1c3RhcgAwMAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAwMDAwMDAwADAwMDAwMDAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB7Ik5hbWUiOiJkZWZhdWx0IiwiTWV0YWRhdGEiOnt9LCJFbmRwb2ludHMiOnsiZG9ja2VyIjp7Ikhvc3QiOiJ1bml4Oi8vL3J1bi91c2VyLzEwMDAvZG9ja2VyLnNvY2siLCJTa2lwVExTVmVyaWZ5IjpmYWxzZX19fQAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA=='));
var_dump($length);
$buffer = file_get_contents("phar://$reportTar/meta.json");
var_dump($buffer);

?>
--CLEAN--
<?php
@unlink(__DIR__.'/gh16695_2.tmp');
?>
--EXPECT--
int(1024)
string(122) "{"Name":"default","Metadata":{},"Endpoints":{"docker":{"Host":"unix:///run/user/1000/docker.sock","SkipTLSVerify":false}}}"
