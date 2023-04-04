#include "lists.h"
/**
 * pop_listint - delets the head node of a linked list
 * @head: linked list
 * Return: the head node's data (n)
 */
int pop_listint(listint_t **head)
{
	size_t variable;
	listint_t *assumedNode, *nextNode;

	if (*head == NULL)
	{
		return (0);
	}
	assumedNode = *head;
	nextNode = assumedNode->next;
	variable = assumedNode->n;
	free(assumedNode);
	*head = nextNode;
	return (variable);
}
