#!/bin/bash
gcc -Wall -pendatic -Werror -Wextra -c *.c
ar -rcs liball.a *.o
