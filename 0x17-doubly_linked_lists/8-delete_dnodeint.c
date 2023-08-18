#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node
 * at index index of a dlistint_t linked list
 *
 * @head: pointer to head node
 * @index: index of node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *to_be_deleted;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	to_be_deleted = *head;
	if (index == 0)
	{
		if (to_be_deleted->next != NULL)
		{
			to_be_deleted->next->prev = NULL;
		}
		*head = to_be_deleted->next;
		free(to_be_deleted);
		return (1);
	}
	while (count < index && to_be_deleted != NULL)
	{
		to_be_deleted = to_be_deleted->next;
		count++;
	}

	if (to_be_deleted == NULL)
		return (-1);

	if (to_be_deleted->next != NULL)
	{
		to_be_deleted->next->prev = to_be_deleted->prev;
	}
	if (to_be_deleted->prev != NULL)
	{
		to_be_deleted->prev->next = to_be_deleted->next;
	}
	free(to_be_deleted);

	return (1);
}
