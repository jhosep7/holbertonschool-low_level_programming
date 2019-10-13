#!/bin/bash
<<<<<<< HEAD
=======
gcc -Wall -pedantic -Werror -Wextra -c *.c
>>>>>>> ad1e4a10d7d8bd9bb4fe70d6ffcf2f5491462ca1
ar -rc liball.a *.o
ar -t liball.a
ranlib liball.a
