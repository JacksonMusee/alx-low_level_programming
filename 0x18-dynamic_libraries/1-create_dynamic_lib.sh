#!/bin/bash
gcc -c *.c | gcc -shared -Wl,-soname,liball.so -o liball.so *.o
