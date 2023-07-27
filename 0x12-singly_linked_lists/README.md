# 0x12. C - Singly Linked Lists

This project explores the concept of singly linked lists in C programming language. Linked lists are data structures used to store and manage collections of elements. Unlike arrays, linked lists provide dynamic memory allocation and can grow or shrink as needed.

## Learning Objectives

- Understand the advantages and disadvantages of using linked lists compared to arrays.
- Learn how to build and use singly linked lists in C.

## Requirements

- Allowed editors: vi, vim, emacs
- All files will be compiled on Ubuntu 20.04 LTS using gcc, with the options -Wall -Werror -Wextra -pedantic -std=gnu89.
- All files should end with a new line.
- A README.md file at the root of the project is mandatory.
- The code should follow the Betty style, checked with betty-style.pl and betty-doc.pl.
- Global variables are not allowed.
- No more than 5 functions per file.
- The only C standard library functions allowed are malloc, free, and exit. Other functions like printf, puts, calloc, realloc, etc., are forbidden.
- _putchar function is allowed.
- The prototypes of all functions and the prototype of the _putchar function should be included in the header file called lists.h.
- All header files should have include guards.

## Data Structure

The project uses the following data structure for singly linked lists:

typedef struct list_s
{
    char *str;           /* string - (malloc'ed string) */
    unsigned int len;    /* length of the string */
    struct list_s *next; /* points to the next node */
} list_t;

## Compilation and Testing

The code will be compiled using the following command:
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o linked_list
