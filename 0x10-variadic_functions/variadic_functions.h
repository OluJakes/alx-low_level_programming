#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/* Function that returns the sum of all its parameters */
int sum_them_all(const unsigned int n, ...);

/* Function that prints numbers followed by a separator */
void print_numbers(const char *separator, const unsigned int n, ...);

/* Function that prints strings followed by a separator */
void print_strings(const char *separator, const unsigned int n, ...);

/* Function that prints anything based on the format provided */
void print_all(const char * const format, ...);

/* Custom putchar function used in the variadic functions */
int _putchar(char c);

#endif /* VARIADIC_FUNCTIONS_H */

