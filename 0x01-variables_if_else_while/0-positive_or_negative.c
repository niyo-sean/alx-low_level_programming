#include <stdio.h>

/**
 * main - Program print rondom number for variable
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	n = 2;

	/* set conditions */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}
