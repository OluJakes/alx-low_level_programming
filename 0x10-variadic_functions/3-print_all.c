#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_char - Prints a character.
 *
 * @args: A va_list pointing to the character to be printed.
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_integer - Prints an integer.
 *
 * @args: A va_list pointing to the integer to be printed.
 */
void print_integer(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - Prints a float.
 *
 * @args: A va_list pointing to the float to be printed.
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - Prints a string.
 *
 * @args: A va_list pointing to the string to be printed.
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - Prints anything.
 *
 * @format: The list of types of arguments passed to the function.
 *
 * Description: The format is a list of characters that represent the type of
 * each argument passed to the function:
 * c: char
 * i: integer
 * f: float
 * s: char *
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j = 0;
	char *separator = "";
	data_t data[] = {
		{'c', print_char},
		{'i', print_integer},
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
				printf("%s", separator);
				data[j].printer(args);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}

