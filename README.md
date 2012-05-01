gcc_tu_parse_json
=================

- Convert GCC translation unit output to json 
- Uses jsdb for commandline javascript.

Example:
=================
- gcc -O0 -c hello.c -g -std=c99 -fno-builtin -fdump-translation-unit -fdump-translation-unit-all
- jsdb tu_parse.js hello.c.001t.tu > hello.c.tu.json
