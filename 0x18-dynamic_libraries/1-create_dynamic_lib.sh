#!/bin/bash

gcc -fPIC -g -c -Wall -pedantic -Werror -Wextra *.c
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
