#include "hash_tables.h"
/**
 * hash_table_delete - a function that deletes a hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *temp;
	unsigned long int index = 0;

	if (ht == NULL)
		return;
	while (index < ht->size)
	{
		node = ht->array[index];
		while (node)
		{
			temp = node;
			node = node->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
