#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The string to count words from.
 *
 * Return: The number of words.
 */
int count_words(char *str)
{
	int i, count = 0, in_word = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			if (!in_word)
			{
				in_word = 1;
				count++;
			}
		}
		else
		{
			in_word = 0;
		}
	}

	return (count);
}

/**
 * allocate_words - Allocates memory for words in an array of strings.
 * @words: The array of strings.
 * @str: The string to split.
 *
 * Return: 1 on success, 0 on failure.
 */
int allocate_words(char **words, char *str)
{
	int i, j, k, len, word_count = 0, in_word = 0;

	word_count = count_words(str);

	for (i = 0, j = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			if (!in_word)
			{
				in_word = 1;
				len = 1;
				while (str[i + len] != ' ' && str[i + len] != '\0')
					len++;

				words[j] = malloc(sizeof(char) * (len + 1));
				if (words[j] == NULL)
				{
					for (k = 0; k < j; k++)
						free(words[k]);
					return (0);
				}

				for (k = 0; k < len; k++)
					words[j][k] = str[i + k];
				words[j][k] = '\0';
				j++;
			}
		}
		else
		{
			in_word = 0;
		}
	}

	return (1);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings (words), or NULL if it fails.
 */
char **strtow(char *str)
{
	char **words;
	int word_count = 0, j;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	word_count = count_words(str);

	words = malloc(sizeof(char *) * (word_count + 1));
	if (words == NULL)
		return (NULL);

	if (!allocate_words(words, str))
	{
		free(words);
		return (NULL);
	}

	words[word_count] = NULL;

	return (words);
}

