#include "main.h"
/**
 * read_textfile -reads a text file and prints it to the POSIX standard output
 * @filename : filename is going to be open
 * @letter : number of letter i being  printed
 *
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int x;
	ssize_t y, z;
	char *buffer;

	if(!filename)
	{
		return (0);
	}

	x = open(filename, O_RDONLY);
	if (x == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char)*(letters));
	if (!buffer)
	{
		return (0);
	}
	y = read(x, buffer, letters);
	z = write(STDOUT_FILENO, buffer, y);

	close(x);

	free(buffer);

	return (z);
}
/* a NIYIBIZI Bonaventere codes */
