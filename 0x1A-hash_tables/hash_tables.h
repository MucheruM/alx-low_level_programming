#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct hash_node_ - Node of a hash table
 *
 * @key: The key, string
 * The Key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structures
 *
 * @size: The size of the array
 * @array: An array of the size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);

#endif