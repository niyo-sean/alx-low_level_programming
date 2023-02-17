#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Print last digit comparing result
 *
 * Return: 0 if execution success
 */
int main(void)
{
	int n;
	int last_n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_n = n % 10;
	if (last_n > 5)
		printf("is %d and is greater than 5\n",
				n, last_n);
	else if (last_n == 0)
		printf("is %d  and is 0\n", n, last_n);
	else
		printf("is %d and is less than 6 and not 0\n",
				n, last_digit);

	return (0);
}
