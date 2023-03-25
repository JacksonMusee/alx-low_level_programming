#!/bin/bash
gcc -c -Wall -Werror -Wextra *.c | gcc -shared -Wl,-soname,liball.so -o liball.so *.o
