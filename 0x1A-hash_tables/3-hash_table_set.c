#include "hash_tables.h"

/**
 *create_element - Creates a key:value node
 *
 *@key: Key
 *@value: Value associated with the key
 *
 * Return: Pointet o the created element
 */

hash_node_t *create_element(const char *key, const char *value)
{
	hash_node_t *element;

	if (strlen(key) == 0)
		return (0);

	element = malloc(sizeof(hash_node_t));
	if (element == NULL)
		return (0);

	element->key = malloc(strlen(key) + 1);
	if (element->key == NULL)
	{
		free(element);
		return (0);
	}

	element->value = malloc(strlen(value) + 1);
	if (element->value == NULL)
	{
		free(element->key);
		free(element);
		return (0);
	}

	strcpy(element->key, key);
	strcpy(element->value, value);
	element->next = NULL;

	return (element);
}

 /** 
 *hash_table_set - adds an element to the hash table
 *
 *@ht: Pointer to the hash table
 *@key: Key
 *@value: Value associated with the key
 *
 * Return: 1 on success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *element = create_element(key, value);
	unsigned long int size = ht->size / sizeof(hash_node_t *);
	index = key_index((const unsigned char *)key, size);

	if (index > (size - 1))
			return (0);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = element;
	}
	else
	{
		element->next = ht->array[index];
		ht->array[index] = element;
	}

	return (1);
}
