#include "main.h"
/**
 * get_endianness- checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int x;
	char *y = (char *)&x;

	if (*y == 1)
	{
		return (1);
	}
	return (0);
}
/* a NIYIBIZI Bonaventure codes */
