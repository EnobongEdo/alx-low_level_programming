#include "hash_tables.h"

/**
 * hash_table_create - Function that creates a hash table.
 * @size: The size of the array.
 *
 * Returns a pointer to the newly created hash table
 * Function Returns NULL if something went wrong.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size;
	if (ht->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;
	return (ht);
}
