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
	dlistint_t *prev = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	cur = *h;
	for (count = 0; count < idx && cur != NULL; count++)
	{
		cur = cur->next;
	}

	if (cur == NULL)
		return (NULL);

	prev = cur->prev;
	new->next = cur;
	new->prev = prev;
	prev->next = new;
	cur->prev = new;

	return (new);
}
