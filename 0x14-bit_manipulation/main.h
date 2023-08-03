#ifndef MAIN_H
#define MAIN_H

/* Standard Library Headers */
#include <stddef.h>

/* Function Prototypes */

/* Converts a binary number to an unsigned int. */
unsigned int binary_to_uint(const char *b);

/* Prints the binary representation of a number. */
void print_binary(unsigned long int n);

/* Returns the value of a bit at a given index. */
int get_bit(unsigned long int n, unsigned int index);

/* Sets the value of a bit to 1 at a given index. */
int set_bit(unsigned long int *n, unsigned int index);

/* Sets the value of a bit to 0 at a given index. */
int clear_bit(unsigned long int *n, unsigned int index);

/* Returns the number of bits needed to flip to get from one number to another. */
unsigned int flip_bits(unsigned long int n, unsigned long int m);

/* Provided function for printing characters. */
int _putchar(char c);

#endif /* MAIN_H */

