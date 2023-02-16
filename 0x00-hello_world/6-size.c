#include <stdio.h>
/*
 *
 * main - Entry point
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int e;
	long long int d;
	float r;

	printf("Size of a char is: %lu bytes(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int is: %lu bytes(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int is: %lu bytes(s)\n", (unsigned long)sizeof(e));
	printf("Size of a long long int is:%lu bytes(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float is: %lu bytes(s)\n", (unsigned long)sizeof(r));
	return (0);
