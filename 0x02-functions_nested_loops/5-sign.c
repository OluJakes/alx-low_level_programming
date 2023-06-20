#include "main.h"
#include <stdio.h>

/**
 * print_sign - Prints the sign of a number
 * @n: The number to check
 *
 * Return : 1 and prints + if number id greater than zero
 *          0 and prints 0 if number is equal to zero
 *         -1 and prints - if number is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
