#include "hash_tables.h"
/**
 * hash_table_print - a function that prints a hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *node;
	int first_pair = 1;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	while (index < ht->size)
	{
		node = ht->array[index];

		while (node)
		{
			if (!first_pair)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			first_pair = 0;
			node = node->next;
		}
		index++;
	}
	printf("}\n");
}
