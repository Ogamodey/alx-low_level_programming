#include "hash_tables.h"

/**
 * key_index - Get the index which is a key/value
 * pair should be stored in array of a hash table
 * @key: The key to get the index of
 * @size: the size of the array of the hash table
 * Return the index of the key
 *
 * Description use the djb2 algorithm
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
