#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: the number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	int i, bit_count = sizeof(n) * 8;
	int flag = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = bit_count - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag == 1)
		{
			_putchar('0');
		}
	}
	/* If flag is still 0, n was a power of 2, loop did not print leading zeros */
	if (flag == 0)
	{
		_putchar('0');
	}
}

