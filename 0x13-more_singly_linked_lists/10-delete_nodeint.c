#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at-index - deletes the node at index index of a listint_t
 * @head:double of pointer
 * @index: index of node
 *
 * Return: pointer to thr=e index node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *x, *next;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	x = *head;
	for (i = 0; i < index -1; i++)
	{
		if (x->next == NULL)
		{
			return (-1);
			x = x->next;
		}
	}
	next = x->next;
	x->next = next->next;
	free(next);
	return (1);
}
/* a NIYIBIZI Bonaventure */

