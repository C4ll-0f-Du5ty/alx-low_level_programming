#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: text to write
 *
 * Return: 1 on success 0 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int i, bytes, len;

	len = strlen(text_content);

	if (!filename)
		return (-1);
	i = open(filename, O_WRONLY | O_CREAT | O_TRUNC);
	if (i == -1)
		return (-1);
	if (len)
		bytes = write(i, text_contnet, len);
	close(i);
	if (bytes == len)
		return (1);
	else
		return (-1);
}

