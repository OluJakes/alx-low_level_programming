#include "main.h"

/**
 * get_endianness - Checks the endianness of the machine.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *endian_ptr = (char *)&num;

	if (*endian_ptr)
		return (1); /* Little endian */
	else
		return (0); /* Big endian */
}

