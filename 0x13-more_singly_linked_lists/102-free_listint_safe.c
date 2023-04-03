#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _bonaventure -reallocates memory for an array of pointers
 * @list:the old list to append
 * @size:size of the new list
 *
 * Return:pointer to the new list
 */
listint_t **_bonaventure(listint_t **list, size_t size, listint_t *new)
{
        listint_t **newlist;
        size_t i;
        newlist = malloc(size *sizeof(listint_t *));
        if (newlist == NULL)
        {
                free(list);
                exit(98);
        }
        for (i = 0; i < size - 1; i++)
        {
                newlist[i] = list[i];
        }
        newlist[i] =new;
        free(list);
        return (newlist);
}
/**
 * free_listint_safe -frees a listint_t lis
 * @head : double pointer 
 *
 * Return: the number of nodes
 */
size_t free_listint_safe(listint_t **head)
{
	size_t i, num = 0;
	listint_t **list = NULL;
	listint_t *next;
	if (head == NULL || *head == NULL)
	{
		return (num);
	}
	while (*head != NULL)
	{
		for (i = 0; i < num; i++)
		{
			if (*head == list[i])
			{
				*head = NULL;
				free(list);
				return (num);
			}
		}
		num++;
		list = _bonaventure(list, num, *head);
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	free(list);
	return (num);
}
/* a NIYIBIZI Bonaventure codes */
