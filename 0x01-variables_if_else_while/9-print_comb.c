#include <stdio.h>

/**
 * main - Program prints all possible combinations of single-digit numbers.
 *
 * Return: 0 on success
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
		if (i == 9)
			break;
		putchar(',');
		putchar(0x20);
	}
	putchar('\n');
	return (0);
}
