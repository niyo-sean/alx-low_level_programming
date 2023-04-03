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
	size_t count = 0;
	/*while loop to set condition */
	while (h != NULL)
	{
		printf("\n %d", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
/* a NIYIBIZI Bonaventure codes */
