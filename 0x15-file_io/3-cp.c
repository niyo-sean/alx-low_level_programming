#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdarg.h>

#define BUFFER_SIZE 1024

/**
 * error_exit - Prints an error message and exits with the specified code
 * @exit_code: The exit code
 * @format: The format string for the error message
 * @...: Additional arguments for the format string
 */
void error_exit(int exit_code, const char *format, ...)
{
	va_list args;

	va_start(args, format);
	dprintf(STDERR_FILENO, format, args);
	va_end(args);
	exit(exit_code);
}
/**
 * main - Entry point for the cp program
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Description: This program copies the content of one file to another file.
 *
 * Return: 0 on success, or error codes as specified in the prompt.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to\n");

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
		error_exit(99, "Error: Can't write to file %s\n", argv[2]);


	while ((bytes_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written == -1)
			error_exit(99, "Error: Can't write to file %s\n", argv[2]);
	}

	if (bytes_read == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);

	if (close(file_from) == -1)
		error_exit(100, "Error: Can't close fd %d\n", file_from);

	if (close(file_to) == -1)
		error_exit(100, "Error: Can't close fd %d\n", file_to);

	return (0);
}

