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

	my_ht->array = calloc(size, sizeof(hash_node_t *));
	if (my_ht->array == NULL)
	{
		free(my_ht);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		my_ht->array[i] = NULL;
	my_ht->size = size;

	return (my_ht);
}

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
*Return: 1 on success, 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *element = create_element(key, value);
	unsigned long int size = ht->size;

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

/**
 *hash_node_t - retrieves a value associated with a key
 *
 *@ht: Pointer to hash table
 *@key: The key
 *
 * Return: The value associated with the element,
 or NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *head;
	char *the_value = NULL;

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

/**
 *hash_table_print - Prints ahash table
 *
 *@ht: The hash table
 *
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int max_idx;
	unsigned long int cur_idx = 0;
	int counter = 0;
	hash_node_t *head;

	if (ht == NULL)
		return;

	max_idx = ht->size;

	printf("{");
	while (cur_idx <= max_idx)
	{
		head = ht->array[cur_idx];

		if (head)
		{
			if (counter > 0)
				printf(", ");

			while (head)
			{
				printf("'%s': '%s'", head->key, head->value);
				counter++;

				if (head->next)
					printf(", ");

				head = head->next;
			}

		}
		cur_idx++;
	}
	printf("}\n");
}

/**
 *hash_table_delete -  Deletes a hash table.
 *
 *@ht: The table
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int size;
	unsigned long int cur_idx;
	hash_node_t *temp;
	hash_node_t *head;

	if (ht == NULL)
		return;

	size = ht->size;
	cur_idx = 0;

	while (cur_idx <= size)
	{
		head = ht->array[cur_idx];

		if (head)
		{
			while (head)
			{
				temp = head;
				head = head->next;
				free(temp->key);
				free(temp->value);
				free(temp);
			}
		}
		cur_idx++;
	}
	free(ht->array);
	free(ht);
}
