#include <stdio.h>

/**
 * main - Program prints lowercase, and then uppercase lettters
 *
 * Return: 0 if success
 */
int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
		putchar('a' + i);


	for (i = 0; i < 26; i++)
		putchar('A' + i);

	putchar('\n');
	return (0);
}
