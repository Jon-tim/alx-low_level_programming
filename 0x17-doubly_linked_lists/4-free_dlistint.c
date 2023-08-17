#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - a unction that frees a list
 * @head - pointer to head node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	tmp = head;
	while (tmp != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
