#include "lists.h"
/**
 * reverse_listint - reverse a linked list
 * @head: pointer to pointer to head node
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *current, *next = NULL;

	current = *head;
	for (; current != NULL;)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
	return (*head);
}
