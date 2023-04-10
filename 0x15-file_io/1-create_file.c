#include "main.h"
/**
 * create_file - Write a function that create a filename
 * @filename: file is being created
 * @text_content: contents of the file
 * Return:Returns: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int x, y, z;

	if (!filename)
	{
		return (-1);
	}

	x = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (x == -1)
	{
		return (-1);
	}

	if (!text_content)
	{
		text_content = "";
	}

	for (y = 0; text_content[y]; y++)
		;

	z = write(x, text_content, y);
	if (z == -1)
	{
		return (-1);
	}
	close(x);

	return (1);
}
/* a NIYIBIZI Bonaventure codes */
