#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: node
 * @index: index of node to be returned
 * Return: nth node of a linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}
	return (head);
}
