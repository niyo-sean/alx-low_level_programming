#include <stdio.h>

/**
 * main - program that prints all the numbers of base 16 in lowercase
 *
 * Return: 0 on success
 */
int main(void)
{
	int i;

	for (i = 0x0; i < 0xA; i++)
		putchar('0' + i);
	for (i = 0; i < 6; i++)
		putchar('a' + i);
	putchar('\n');

	return (0);
}
