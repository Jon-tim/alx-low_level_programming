#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at
 * the beginning of a doubly linked list
 *
 * @head: pointer to head node
 * @n: item in the new node
 *
 * Return: address of the new element of NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *tmp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	tmp = *head;

	if (tmp != NULL)
	{
		while (tmp->prev != NULL)
		{
			tmp = tmp->prev;
		}
	}

	new->next = tmp;

	if (tmp != NULL)
	{
		tmp->prev = new;
	}

	*head = new;

	return (new);
}
