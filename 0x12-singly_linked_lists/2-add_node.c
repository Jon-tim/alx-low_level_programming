#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: head node of the linked list
 * @str: string to be duplicated into new head node
 * Return: the address of the new element or Null if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t i;

	i = 0;

	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	char *dup_str = strdup(str);

	if (dup_str == NULL)
	{
		free(dup_str);
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}
	new_node->len = i;
	new_node->str = dup_str;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
