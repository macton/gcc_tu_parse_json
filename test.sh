#!/bin/sh
gcc -O0 -c hello.c -g -std=c99 -fno-builtin -fdump-translation-unit -fdump-translation-unit-all
jsdb tu_parse.js hello.c.001t.tu > hello.c.tu.json
