#include "lists.h"
/**
 * add_nodeint - adds a node to the beginning of a linked list
 * @head: linked list
 * @n: value of int n
 * Return: address of the new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *addNode;

	addNode = malloc(sizeof(listint_t));
	if (addNode == NULL)
		return (NULL);
	addNode->n = n;
	addNode->next = *head;
	*head = addNode;
	return(*head);
}
