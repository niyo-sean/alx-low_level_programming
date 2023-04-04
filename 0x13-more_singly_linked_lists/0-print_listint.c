#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a linked list
 * @h: head of the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *bona = h;
	size_t count = 0;

	while (bona != NULL)
	{
		printf("%d\n", bona->n);
		count += 1;
		bona = bona->next;
	}
	return (count);
}
/* a NIYIBIZI Bonaventure codes*/
