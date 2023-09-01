#ifndef MAIN_H
#define MAIN_H

/* Task 0 - Binary to Unsigned int */
unsigned int binary_to_uint(const char *b);

/* Task 1 - Print Binary */
void print_binary(unsigned long int n);

/* Task 2 - Get Bit */
int get_bit(unsigned long int n, unsigned int index);

/* Task 3 - Set Bit */
int set_bit(unsigned long int *n, unsigned int index);

/* Task 4 - Clear Bit */
int clear_bit(unsigned long int *n, unsigned int index);

/* Task 5 - Flip Bits */
unsigned int flip_bits(unsigned long int n, unsigned long int m);

/* Task 6 - Get Endianness */
int get_endianness(void);

/* Provided _putchar function */
int _putchar(char c);

#endif /* MAIN_H */

