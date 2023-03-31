#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all the lement of a list_t list
 * @h: singly linked list
 * Return: number of elements of a list
 */
size_t print_list(const list_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		} else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		i++;
	};
	return (i);
}
