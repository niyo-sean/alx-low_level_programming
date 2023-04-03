#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index -inserts a new node at a given position.
 * @head: double ppointer
 * @idx: inedex of the node
 * @n : new node value
 *Return: the address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *x, *y;

	if (head == NULL)
	{
		return (NULL);
	}
	if (idx != 0)
	{
		x = *head;
		for (i = 0; i < idx -1 && x != NULL; i++)
		{
			x = x->next;
		}
		if (x == NULL)
		{
			return (NULL);
		}
	}
	y = malloc(sizeof(listint_t));
	if (y == NULL)
	{
		return (NULL);
	}
	y->n = n;
	if (idx == 0)
	{
		y->next = *head;
		*head = y;
		return (y);
	}
	y->next = x-> next;
	x->next = y;
	return (y);
}
/* a NIYIBIZI Bonaventure codes */
