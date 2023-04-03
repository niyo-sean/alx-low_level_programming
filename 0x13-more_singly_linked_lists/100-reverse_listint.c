#include "lists.h"
#include <stdio.h>
/**
 * reverse_listint - reverses a listint_t linked list
 * @head: double pointer
 *
 * Return: a pointer to the first node of the reverse
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *x, *next;

	if (head == NULL || *head ==NULL)
	{
		return(NULL);
	}
	if ((*head)->next == NULL)
	{
		return(*head);
	}
	x = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = x;
		x = *head;
		*head = next;
	}
	*head = x;
	return (*head);
}
/* a NIYIBIZI Bonaventure codes */

