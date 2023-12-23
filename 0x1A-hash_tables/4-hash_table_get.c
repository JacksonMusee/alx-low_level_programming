#include "hash_tables.h"

/**
 *hash_node_t - retrieves a value associated with a key
 *
 *@ht: Pointer to hash table
 *@key: The key
 *
 * Return: The value associated with the element,
 *or NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *head;
	char *the_value = NULL;

	if (ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	head = ht->array[index];

	if (head == NULL)
		return (NULL);

	while (head)
	{
		if (strcmp(head->key, key) == 0)
		{
			the_value = head->value;
			break;
		}

		head = head->next;
	}

	return (the_value);

}
