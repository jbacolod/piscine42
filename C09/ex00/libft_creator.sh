#!/bin/bash

# Shell script for Exercise 0 of the C09 project

# Stop the script if any error occurs
set -e

# If "clean" or "fclean" is passed as an argument, remove objects and library
if [ "$1" == "clean" ] || [ "$1" == "fclean" ]; then
    echo "=== Removing object files and static library ==="
    rm -f *.o libft.a
    echo "=== Clean completed successfully! ==="
    exit 0
fi

echo "=== Compiling source files into object files ==="
cc -Wall -Wextra -Werror -c *.c

echo "=== Creating static library libft.a ==="
ar rcs libft.a *.o

echo "=== Cleaning up temporary object files ==="
rm -f *.o

echo "=== Library libft.a created successfully! ==="
