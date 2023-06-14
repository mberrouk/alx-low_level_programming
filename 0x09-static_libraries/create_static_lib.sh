#!/bin/bash

# Compile all .c files in the current directory into object files
gcc -Wall -Werror -Wextra -pedantic -c *.c

# Create a static library from the object files
ar -rc liball.a *.o

# Index the symbols in the library for faster linking
#ranlib liball.a

# Clean up the object files
rm *.o

