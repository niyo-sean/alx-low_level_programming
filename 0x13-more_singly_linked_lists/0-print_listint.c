#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print all the elements of a listint_t
 *
 * @h: head of link list node
 * Return: the number of nodes
 *
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *bona = h;
	size_t count = 0;
	/*while loop to set condition */
	while (bona != NULL)
	{
		printf("\n %d", bona->n);
		count+= 1;
		bona = bona->next;
	}
	return (count);
}
/* a NIYIBIZI Bonaventure codes */
