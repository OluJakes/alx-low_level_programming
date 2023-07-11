#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 * @str: The string to duplicate
 *
 * Return: A pointer to the duplicated string, or NULL if insufficient memory
 */
char *_strdup(char *str)
{
	char *dup;
	int length, i;

	if (str == NULL)
		return (NULL);

	length = 0;
	while (str[length] != '\0')
		length++;

	dup = malloc((length + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		dup[i] = str[i];

	dup[length] = '\0';

	return (dup);
}

