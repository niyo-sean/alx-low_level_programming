#include "main.h"
/**
 * append_text_to_file -  that appends text at the end of a file.
 * @filename :file is going to be added of some content
 * @text_content:content will be added to a file
 * Return:1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int x, y, z;

	if (!filename)
	{
		return (-1);
	}
	x = open(filename, O_WRONLY | O_APPEND);
	if (x == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		for (y = 0; text_content[y]; y++)
			;

		z = write(x, text_content, y);


		if (z == -1)
		{
			return (-1);
		}
	}
	close(x);
	return (1);
}
/* a NIYIBIZI Bonaventure codes */
