#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table
 */

void hast_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *temp;
	unsigned long int mo;

	if (!ht)
		return;

	for (mo = 0; mo < ht->size; mo++)
	{
		node = ht->array[mo];
		while (node)
		{
			temp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = temp;
		}
	}

	free(ht->array);
	free(ht);
}
