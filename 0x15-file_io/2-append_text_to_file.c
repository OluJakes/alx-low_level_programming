#include "main.h"
#include <stdlib.h>

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: Pointer to the name of the file.
 * @text_content: Pointer to the text to add to the end of the file.
 *
 * Return: On success, 1. On failure, -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}

