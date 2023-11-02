#include "main.h"

/**
 * read_textfile - reads text from a file and prints it
 * @filename: name of file to read
 * @letters: number of bytes to read
 *
 * Return: number bytes read/printed
 */

ssize_t read_textfile(const char *filename, size_t letters) {
	ssize_t bytes_read;
	char *buffer;
	FILE *file;
	ssize_t bytes_written;

	if (filename == NULL) {
		return (0);
	}

	file = fopen(filename, "r");
	if (file == NULL) {
		return (0);
	}

	buffer = (char *)malloc(letters + 1);

	if (buffer == NULL) {
		fclose(file);
		return (0);
	}

	bytes_read = fread(buffer, 1, letters, file);

	if (bytes_read < 0) {
		free(buffer);
		fclose(file);
		return (0);
	}

	buffer[bytes_read] = '\0';

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written < 0 || bytes_written != bytes_read) {
		free(buffer);
		fclose(file);
		return (0);
	}

	free(buffer);
	fclose(file);

	return (bytes_read);
}
