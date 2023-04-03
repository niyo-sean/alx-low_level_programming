#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint -adds a new node at the beginning of a listint_t list.
 *
 * @head: head of double pointer
 * @n: integer
 * Return:NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;
	/* if condition used to set conditions */
	if (head == NULL)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->next = *head;
	*head =  ptr;
	return (ptr);
}
/* a NIYIBIZi Bonaventure codes */
