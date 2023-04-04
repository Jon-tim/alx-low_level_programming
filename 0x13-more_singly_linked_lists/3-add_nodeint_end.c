#include "lists.h"
/**
 * add_nodeint_end - add node to the end of a linked list
 * @head: linked list
 * @n: value of int n
 * Return: number of the new element or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *assume;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;
	assume = *head;

	if (*head == NULL)
	{
		*head = newNode;
	} else
	{
		while (assume->next != NULL)
		{
			assume = assume->next;
		}
		assume->next = newNode;
	}
	return (*head);
}
