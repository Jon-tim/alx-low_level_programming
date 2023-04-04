#include "lists.h"
/**
 * free_listint - function that frees a linked list
 * @head: node
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *assume;

	while (head != NULL)
	{
		assume = head;
		head = head->next;
		free(assume);
	}
}
