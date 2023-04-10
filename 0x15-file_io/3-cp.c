#include "main.h"
#include <stdio.h>
/**
 * error_file - this will check if file can be opened
 * @file_to:where we paste content
 * @file_from: where we copy content
 * @argv :is arguments vector
 * Return: not used
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error:file not readeble from %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: file not writable to %s\n", argv[2]);
		exit(98);
	}
}

/**
 * main -check the codes
 * @argv: arguments vector
 * @argc: arguments number
 * Return:Always 0.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, x;
	ssize_t nchars, y;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "\n%s", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(file_from, buffer, 1024);
		if (nchars == -1)
		{
			error_file(-1, 0, argv);
		}
		y = write(file_to, buffer, nchars);
		if (y == -1)
		{
			error_file(0, -1, argv);
		}
	}
	x = close(file_from);
	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error:can't close fd %d\n", file_from);
		exit(100);
	}
	x = close(file_to);
	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
/* a NIYIBIZI Bonaventure codes */
