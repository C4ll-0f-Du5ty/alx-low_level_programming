#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The NULL-terminated string to add at the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;

	if (filename == NULL)
		return (-1); /* Return -1 if filename is NULL */

	if (text_content == NULL)
		return (1); /* Return 1 if text_content is NULL */

	file = fopen(filename, "a"); /* Open the file in append mode */

	if (file == NULL)
		return (-1); /* Return -1 if the file cannot be opened for appending */

	if (fputs(text_content, file) == EOF)
	{
		fclose(file);
		return (-1); /* Return -1 if writing to the file fails */
	}

	fclose(file);
	return (1); /* Return 1 on success */
}
