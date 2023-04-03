#include "lists.h"
/**
 * find_listint_loop -finds the loop in a linked list.
 * @head :pointer to the beginning of the list
 *
 * Return: adress of thee node 
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *x, *y;

	x = y = head;
	while (x && y && y->next)
	{
		x = x->next;
		y = y->next->next;
		if (x == y)
		{
			x = head;
			break;
		}
	}
	if ( x || !y || !y->next)
	{
		return (NULL);
	}
	while (x != y)
	{
		x = x->next;
		y = y->next;
	}
	return (y);
}
/* a NIYIBIZI Bonaventure codes */
