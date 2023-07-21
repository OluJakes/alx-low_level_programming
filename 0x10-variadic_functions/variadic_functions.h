#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct data_t - Struct data type
 *
 * @type: Type of the data (char)
 * @printer: The function associated with the data type
 */
typedef struct data_t
{
	char type;
	void (*printer)(va_list);
} data_t;

/* Function prototypes */
int sum_them_all(const unsigned int n, ...);

/**
 * print_numbers - Prints numbers, followed by a new line.
 *
 * @separator: The string to be printed between numbers.
 * @n: Number of integers passed to the function.
 *
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...);

/**
 * print_strings - Prints strings, followed by a new line.
 *
 * @separator: The string to be printed between the strings.
 * @n: Number of strings passed to the function.
 *
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * print_all - Prints anything.
 *
 * @format: The list of types of arguments passed to the function.
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...);

int _putchar(char c);

#endif /* VARIADIC_FUNCTIONS_H */

