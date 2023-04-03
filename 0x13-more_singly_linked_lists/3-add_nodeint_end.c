#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 *
 * @head: head of double pointers
 * @n: integer
 * Return: NULL if is failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *a;
	listint_t *b;
	/*if condition by condition */
	if (head == NULL)
	{
		return (NULL);
	}
	a = malloc(sizeof(listint_t));
	if (a == NULL)
	{
		return (NULL);
	}
	a->n = n;
	a->next = NULL;
	if (*head == NULL)
	{
		*head = a;
		return (a);
	}
	b = *head;
	while (b->next != NULL)
	{
		b = b->next;
	}
	b->next = a;
	return (a);
}
/* a NIYIBIZI Boanventure codes */

