#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -c *.c
ar -rs liball.a *.o
