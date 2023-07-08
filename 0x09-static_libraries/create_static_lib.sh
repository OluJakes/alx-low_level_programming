#!/bin/bash

# Compile all .c files into object files
gcc -c *.c

# Create the static library liball.a from the object files
ar rcs liball.a *.o

# Clean up object files
rm *.o

