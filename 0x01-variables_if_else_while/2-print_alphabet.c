#include <stdio.h>

/**
 * main - Program that print lowercase letther
 *
 * Return: 0 if success
 */
int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar('a' + i);
	}
	putchar('\n');
	return (0);
}
