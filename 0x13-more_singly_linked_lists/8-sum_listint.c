#include "lists.h"
#include <stdio.h>
/**
 * sum_listint -returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to the first node
 *
 * Return:sum all the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
/* a NIYIBIZI Bonaventur codes */
