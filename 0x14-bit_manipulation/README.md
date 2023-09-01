# 0x14. C - Bit Manipulation

In this project, you will learn about bit manipulation and bitwise operators in C. Bit manipulation is a technique that involves manipulating individual bits in a binary representation of data to achieve certain operations efficiently.

## Learning Objectives

By the end of this project, you should be able to:

- Look for the right source of information without too much help.
- Understand how to manipulate bits and use bitwise operators.

## Requirements

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- All your files should end with a new line.
- A `README.md` file, at the root of the folder, is mandatory.
- Your code should use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`.
- You are not allowed to use global variables.
- No more than 5 functions per file.
- The only C standard library functions allowed are `malloc`, `free`, and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc`, etc., is forbidden.
- You are allowed to use `_putchar`.
- Don’t forget to push your header file.
- All your header files should be include-guarded.

## Tasks

### 0. 0-binary_to_uint.c

Write a function that converts a binary number to an unsigned int.

- Prototype: `unsigned int binary_to_uint(const char *b);`
- `b` is pointing to a string of `0` and `1` chars.
- Return: the converted number, or `0` if there is one or more chars in the string `b` that is not `0` or `1` or if `b` is `NULL`.

### 1. 1-print_binary.c

Write a function that prints the binary representation of a number.

- Prototype: `void print_binary(unsigned long int n);`
- Format: see the example in the task description.
- You are not allowed to use arrays, `malloc`, or `%` and `/` operators.

### 2. 2-get_bit.c

Write a function that returns the value of a bit at a given index.

- Prototype: `int get_bit(unsigned long int n, unsigned int index);`
- `index` is the index, starting from `0`, of the bit you want to get.
- Return: the value of the bit at index `index` or `-1` if an error occurred.

### 3. 3-set_bit.c

Write a function that sets the value of a bit to `1` at a given index.

- Prototype: `int set_bit(unsigned long int *n, unsigned int index);`
- `index` is the index, starting from `0`, of the bit you want to set.
- Return: `1` if it worked, or `-1` if an error occurred.

### 4. 4-clear_bit.c

Write a function that sets the value of a bit to `0` at a given index.

- Prototype: `int clear_bit(unsigned long int *n, unsigned int index);`
- `index` is the index, starting from `0`, of the bit you want to set to `0`.
- Return: `1` if it worked, or `-1` if an error occurred.

### 5. 5-flip_bits.c

Write a function that returns the number of bits you would need to flip to get from one number to another.

- Prototype: `unsigned int flip_bits(unsigned long int n, unsigned long int m);`
- Return: the number of bits you would need to flip to get from `n` to `m`.

## Quiz Questions

- Question #0: `0x02 >> 1 = ?`
- Question #1: `0x66 & 0x22 = ?`
- Question #2: `0x88 & 0x01 = ?`
- Question #3: What is `0x89` in base2?
- Question #4: `0x01 | 0x01 = ?`
- Question #5: `0x13 << 1 = ?`
- Question #6: What is `98` in base16?
- Question #7: What is `0b01101101` in base16?
- Question #8: `0x01 & 0x01 = ?`
- Question #9: What is `0x89` in base10?
- Question #10: What is `98` in base2?
- Question #11: `0x01 | 0x00 = ?`
- Question #12: `~ 0x12 = ?`
- Question #13: `~ 0x98 = ?`
- Question #14: `0x89 >> 3 = ?`
- Question #15: What is `0b001010010` in base10?
- Question #16: `0x89 & 0x01 = ?`
- Question #17: `0x01 & 0x00 = ?`
- Question #18: `0x01 << 1 = ?`
- Question #19: `0x44 | 0x22 = ?`

**Note:** The answers to these quiz questions are not provided here. You need to answer them based on your understanding of binary, hexadecimal, and bitwise operations.
