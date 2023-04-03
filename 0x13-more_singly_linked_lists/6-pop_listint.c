#include "lists.h"
#include <stdlib.h>
/**
 * pop-listint -deletes the head node of a listint_t
 * @head: a double pointer
 *
 * Return:empty
 */
int pop_listint(listint_t **head)
{
	listint_t *y;
	int n;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	y = *head;
	*head = y->next;
	n = y->n;
	return (n);
}
/* a NIYIBIZI Bonaventure codes */
