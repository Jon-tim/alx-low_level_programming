#include "lists.h"
/**
 * insert_nodeint_at_index - insert node at a given index
 * @head: linked list
 * @idx: index to place the new node
 * @n: value of int n
 * Return: address of the new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *previousNode, *newNode;
	size_t i = 0;

	previousNode = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && *head != NULL; i++)
		{
			previousNode = previousNode->next;
		}
	}

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	if (previousNode == NULL && idx != 0)
	{
		return (NULL);
	}

	newNode->n = n;
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
	} else
	{
		newNode->next = previousNode->next;
		previousNode->next = newNode;
	}
	return (new);
}
