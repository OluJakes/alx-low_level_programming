#include "main.h"

/**
 * _memset - Fills a block of memory with a byte value.
 * @s: The block of memory.
 * @b: The byte value to be filled.
 * @n: The number of bytes to be filled.
 *
 * Return: The pointer to the block of memory.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}

	return (start);
}

