#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between the strings.
 * @n: The number of strings passed to the function.
 *
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	/* Initialize the va_list */
	va_start(args, n);

	/* Loop through the strings and print each one */
	for (i = 0; i < n; i++)
	{
		/* Get the next string from the va_list */
		str = va_arg(args, char *);

		/* Check if the string is NULL, print "(nil)" */
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		/* Check if separator is not NULL and we are not at the last string */
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	/* Clean up the va_list */
	va_end(args);

	/* Print a new line at the end */
	printf("\n");
}

