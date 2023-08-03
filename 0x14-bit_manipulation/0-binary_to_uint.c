#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 characters representing the binary number.
 *
 * Return: The converted number, or 0 if:
 * - The input string is NULL
 * - There is at least one character in the string that is not '0' or '1'
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		result <<= 1; // Left shift the result to make space for the next bit
		result += (*b - '0'); // Add the current bit to the result
		b++; // Move to the next character in the string
	}

	return (result);
}

