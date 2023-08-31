#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of binary digits.
 *
 * Return: The converted number, or 0 if invalid chars or b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0); /* Invalid character found */
		result = result * 2 + (*b - '0');
		b++;
	}

	return (result);
}

