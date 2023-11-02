#include "main.h"

/**
 * error_handler - Print an error message to stderr and exit.
 * @exit_code: The exit code for the program.
 * @format: The format string for the error message.
 */
void error_handler(int exit_code, const char *format, ...) {
	va_list args;
	va_start(args, format);
	dprintf(STDERR_FILENO, format, args);
	va_end(args);
	exit(exit_code);
}

int main(int argc, char *argv[]) {
	if (argc != 3) {
		error_handler(97, "Usage: cp file_from file_to\n");
	}

	char *file_from = argv[1];
	char *file_to = argv[2];
	char buffer[1024];
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1) {
		error_handler(98, "Error: Can't read from file %s\n", file_from);
	}

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1) {
		error_handler(99, "Error: Can't write to file %s\n", file_to);
	}

	while ((bytes_read = read(fd_from, buffer, 1024)) > 0) {
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read) {
			error_handler(99, "Error: Can't write to file %s\n", file_to);
		}
	}

	if (bytes_read == -1) {
		error_handler(98, "Error: Can't read from file %s\n", file_from);
	}

	if (close(fd_from) == -1) {
		error_handler(100, "Error: Can't close fd %d\n", fd_from);
	}

	if (close(fd_to) == -1) {
		error_handler(100, "Error: Can't close fd %d\n", fd_to);
	}

	return (0);
}
