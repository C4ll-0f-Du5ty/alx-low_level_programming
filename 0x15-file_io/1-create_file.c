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
	int i;
	ssize_t bytes, len;

	len = strlen(text_content);

	if (!filename)
		return (-1);
	i = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (i == -1)
		return (-1);
	if (chmod(filename, S_IRUSR | S_IWUSR) != 0)
	{
	return (-1);
	}
	if (len)
		bytes = write(i, text_content, len);
	close(i);
	if (bytes == len)
		return (1);
	else
		return (-1);
}

