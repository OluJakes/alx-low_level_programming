#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - Print a char argument.
 * @arg: The char argument to print.
 *
 * Return: Nothing.
 */
void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
 * print_int - Print an integer argument.
 * @arg: The integer argument to print.
 *
 * Return: Nothing.
 */
void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 * print_float - Print a float argument.
 * @arg: The float argument to print.
 *
 * Return: Nothing.
 */
void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
 * print_string - Print a string argument.
 * @arg: The string argument to print.
 *
 * Return: Nothing.
 */
void print_string(va_list arg)
{
	char *str = va_arg(arg, char *);

	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
}

/**
 * print_all - Prints anything.
 * @format: The list of types of arguments passed to the function.
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j;
	char *sep = "";

	data_t data[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;

		while (data[j].type)
		{
			if (format[i] == data[j].type)
			{
				printf("%s", sep);
				data[j].printer(args);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");

	va_end(args);
}

