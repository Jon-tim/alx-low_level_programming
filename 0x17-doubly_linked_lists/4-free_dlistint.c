#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - a unction that frees a list
 * @head: pointer to head node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	dlistint_t *cur;

	cur = head;
	while (cur != NULL)
	{
		tmp = cur->next;
		free(cur);
		cur = tmp;
	}
}
