#include "lists.h"
/**
 * free_listint2 - frees a linked list
 * @head: linked list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *cur, *temp;

	cur = *head;

	if (head !=  NULL)
	{
		while (cur != NULL)
		{
			temp = cur;
			cur = cur->next;
			free(temp);
		}
		*head = NULL;
	}
}
