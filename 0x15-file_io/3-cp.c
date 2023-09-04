#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

/**
 * exit_with_error - Exit the program with an error message.
 * @message: The error message format.
 * @file_name: The name of the file related to the error.
 * @exit_code: The exit code to use when terminating the program.
 */
void exit_with_error(const char *message, const char *file_name, int exit_code)
{
	dprintf(STDERR_FILENO, message, file_name);
	exit(exit_code);
}

/**
 * copy_file - Copy the content of one file to another.
 * @file_from: The source file.
 * @file_to: The destination file.
 */
void copy_file(const char *file_from, const char *file_to)
{
	int fd_from = open(file_from, O_RDONLY);

	if (fd_from == -1)
	{
		exit_with_error("Error: Can't read from file %s\n", file_from, 98);
	}

	int fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR
		      |	| S_IWUSR | S_IRGRP | S_IROTH);
	if (fd_to == -1)
	{
		close(fd_from);
		exit_with_error("Error: Can't write to file %s\n", file_to, 99);
	}

	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			close(fd_from);
			close(fd_to);
			exit_with_error("Error: Can't write to file %s\n", file_to, 99);
		}
	}

	if (bytes_read == -1)
	{
		close(fd_from);
		close(fd_to);
		exit_with_error("Error: Can't read from file %s\n", file_from, 98);
	}

	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		exit_with_error("Error: Can't close file descriptor\n", "", 100);
	}
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 on success, or the appropriate error code on failure.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		return (97);
	}

	const char *file_from = argv[1];
	const char *file_to = argv[2];

	copy_file(file_from, file_to);

	return (0);
}

