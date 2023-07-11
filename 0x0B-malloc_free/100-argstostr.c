#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of a program.
 * @ac: The number of arguments.
 * @av: An array of strings containing the arguments.
 *
 * Return: A pointer to the concatenated string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k, len;
	int total_len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate the total length of the arguments */
	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len])
			len++;
		total_len += len + 1; /* Add 1 for the newline character */
	}

	/* Allocate memory for the concatenated string */
	str = malloc(sizeof(char) * total_len + 1);
	if (str == NULL)
		return (NULL);

	/* Concatenate the arguments */
	k = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			str[k++] = av[i][j++];
		}
		str[k++] = '\n'; /* Add newline character */
	}
	str[k] = '\0'; /* Add null terminator */

	return (str);
}

