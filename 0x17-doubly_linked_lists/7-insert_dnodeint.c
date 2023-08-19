#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts a new node
 * at a given position
 * @h: pointer to head of list
 * @idx: index to insert a new node
 * @n: data to be in the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count;
	dlistint_t *new = NULL;
	dlistint_t *cur = NULL;

	if (*h == NULL)
		return (NULL);
	if (idx == 0)
	{
		new = add_dnodeint(h, n);
	}
	else
	{
		cur = *h;
		for (count = 0; count < idx; count++)
		{
			if (cur == NULL)
				return (NULL);
			cur = cur->next;
		}
		if (cur->next == NULL)
		{
			new = add_dnodeint_end(h, n);
		}
		else
		{
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
				return (NULL);
			new->n = n;
			new->next = cur;
			new->prev = cur->prev;

			if (cur->prev != NULL)
				cur->prev->next = new;
			cur->prev = new;
		}
	}
	return (new);
}
