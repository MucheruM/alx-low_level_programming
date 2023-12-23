#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: the size of the array
 *
 * Return: pointer to the created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_t;
	unsigned long int j;

	hash_t = malloc(sizeof(hash_table_t));
	if (hash_t == NULL)
		return (NULL);

	hash_t->size = size;
	hash_t->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_t->array == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
		hash_t->array[j] = NULL;

	return (hash_t);
}
