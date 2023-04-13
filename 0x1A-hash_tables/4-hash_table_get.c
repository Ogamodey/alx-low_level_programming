#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get retieve the value associated with
 * a key in a hash table
 * @ht: a pointer to the hash table
 * @key: the key to get the value of
 * Return if the key cannot be matched -NULL
 * otherwise- the value associated with key in ht
 */
char *hash_table_get(const hash_hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	node = ht->array[index];
	while (node && strcmp(node->key, key) !=0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
