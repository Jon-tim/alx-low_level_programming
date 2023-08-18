#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node
 * of a dlistint_t linked list
 *
 * @head: pointer to head
 * @index: index of node to get
 * Return: the nth node of a list or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *cur;
	size_t i;

	cur = head;

	for (i = 0; i < index && cur != NULL; i++)
	{
		cur = cur->next;
	}

	if (cur == NULL)
		return (NULL);

	return (cur);
}
