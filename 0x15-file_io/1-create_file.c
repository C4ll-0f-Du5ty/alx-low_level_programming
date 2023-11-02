#include "main.h"

/**
 * create_file - Creates or truncates a file with specified content.
 * @filename: The name of the file to create.
 * @text_content: A NULL-terminated string to write (can be NULL).
 *
 * Return: 1 on success, -1 on failure (file cannot be created).
 */
int create_file(const char *filename, char *text_content)
{
	struct stat st;
	size_t text_length;
	FILE *file;

	if (filename == NULL)
		return (-1); /* Return -1 if filename is NULL */

	file = fopen(filename, "w");

	if (file == NULL)
		return (-1); /* Return -1 if the file cannot be created */

	if (text_content != NULL)
	{
		text_length = strlen(text_content);

		if (fwrite(text_content, 1, text_length, file) != text_length)
		{
			fclose(file);
			return (-1); /* Return -1 if the write operation fails */
		}
	}

	fclose(file);

	/* Set file permissions to rw------- if the file is newly created */

	if (stat(filename, &st) == 0)
		return (1); /* File already exists */

	if (chmod(filename, S_IRUSR | S_IWUSR) != 0)
		return (-1); /* Return -1 if changing permissions fails */

	return (1); /* Return 1 on success */
}
