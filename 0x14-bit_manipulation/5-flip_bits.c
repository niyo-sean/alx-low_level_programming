#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip ..
 * @n:is the number
 * @m: is the number will flipped in n
 * Return: bits flip from n and m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/* Let x be the XOR of n and m and b be the numbwer of bits*/
	unsigned long int x = n ^ m, b = 0;

	while (x > 0)
	{
		b += (x & 1);
		x >>= 1;
	}
	return (b);
}
/* a NIYIBIZI Boanventure codes */
