#include "main.h"
/**
 *  set_bit - sets the value of a bit to 1 at a given index.
 *  @index: is the index, starting from 0 of the bit you want to set
 *  @n: is the pointing number of x
 *  Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	x = 1 << index;
	*n = *n | x;
	return (1);
}
/* a NIYIBIZI Bonaventure codes */
