#include "hash_tables.h"

/**
 *hash_table_create - creates a hash table
 *
 *@size: size of the hash table
 *
 * Return: A pointer to the hash table or NULL on failure
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *my_ht;
	unsigned long int i;

	my_ht = malloc(sizeof(hash_table_t));
	if (my_ht == NULL)
		return (NULL);

	my_ht->array = calloc(size, sizeof(hash_node_t*));

	for (i = 0; i < size; i++)
		my_ht->array[i] = NULL;

	return (my_ht);
}
