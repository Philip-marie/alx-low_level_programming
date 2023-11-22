#!/bin/bash
gcc -wall -pedantic -werror -wextra -c *.c
ar -rc liball.a *.o
randlib liball.a
