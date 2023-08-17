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

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	new->next = *head;
	*head = new;
	new->prev = *head;

	return (*head);
}
