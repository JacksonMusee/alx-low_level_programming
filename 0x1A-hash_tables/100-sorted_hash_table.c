#include "hash_tables.h"

/**
 *shash_table_create - creates a hash table
 *
 *@size: size of the hash table
 *
 * Return: A pointer to the hash table or NULL on failure
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *my_ht;
	unsigned long int i;

	my_ht = malloc(sizeof(shash_table_t));
	if (my_ht == NULL)
		return (NULL);

	my_ht->array = calloc(size, sizeof(shash_node_t *));
	if (my_ht->array == NULL)
	{
		free(my_ht);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		my_ht->array[i] = NULL;
	my_ht->size = size;
	my_ht->shead = NULL;
	my_ht->stail = NULL;

	return (my_ht);
}

/**
 *create_selement - Creates a key:value node
 *
 *@key: Key
 *@value: Value associated with the key
 *
 * Return: Pointet o the created element
 */

shash_node_t *create_selement(const char *key, const char *value)
{
	shash_node_t *selement;

	if (strlen(key) == 0)
		return (NULL);

	selement = malloc(sizeof(shash_node_t));
	if (selement == NULL)
		return (NULL);

	selement->key = malloc(strlen(key) + 1);
	if (selement->key == NULL)
	{
		free(selement);
		return (NULL);
	}

	selement->value = malloc(strlen(value) + 1);
	if (selement->value == NULL)
	{
		free(selement->key);
		free(selement);
		return (NULL);
	}

	strcpy(selement->key, key);
	strcpy(selement->value, value);
	selement->next = NULL;
	selement->sprev = NULL;
	selement->snext = NULL;

	return (selement);
}

/**
*shash_table_set - adds an element to the hash table
*
*@ht: Pointer to the hash table
*@key: Key
*@value: Value associated with the key
*
*Return: 1 on success, 0 otherwise
*/

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *selement;
	shash_node_t *cur_nod;
	unsigned long int size;

	selement = create_selement(key, value);
	if (ht == NULL || selement == NULL)
		return (0);

	size = ht->size;
	index = key_index((const unsigned char *)key, size);

	if (index > (size - 1))
		return (0);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = selement;
	}
	else
	{
		cur_nod = ht->array[index];
		while (cur_nod)
		{
			if (strcmp(cur_nod->key, selement->key) == 0)
			{
				cur_nod->value = selement->value;
				return (1);
			}
			cur_nod = cur_nod->next;
		}
		selement->next = ht->array[index];
		ht->array[index] = selement;
	}

	if (ht->shead == NULL)
		ht->shead = selement;

	if (ht->stail)
		ht->stail->snext = selement;
	selement->sprev = ht->stail;

	ht->stail = selement;

	return (1);
}

/**
 *shash_table_get - retrieves a value associated with a key
 *
 *@ht: Pointer to hash table
 *@key: The key
 *
 * Return: The value associated with the element
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *head;
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

/**
 *shash_table_print - Prints a hash table
 *
 *@ht: The hash table
 *
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *head;

	if (ht == NULL)
		return;

	printf("{");

	head = ht->shead;

	while (head)
	{
		printf("'%s': '%s'", head->key, head->value);
		if (head->snext)
			printf(", ");

		head = head->snext;
	}
	printf("}\n");
}

/**
 *shash_table_print_rev - Prints a hash table in reverse
 *
 *@ht: The hash table
 *
 */
void shash_table_print_rev(const shash_table_t *ht)
{
        shash_node_t *tail;

        if (ht == NULL)
                return;

        printf("{");

        tail = ht->stail;

        while (tail)
        {       
                printf("'%s': '%s'", tail->key, tail->value);
                if (tail->sprev)
                        printf(", ");

                tail = tail->sprev;
        }       
        printf("}\n");
}

/**
 *shash_table_delete -  Deletes a ordered hash table.
 *
 *@ht: The table
 *
 */

void shash_table_delete(shash_table_t *ht)
{
	unsigned long int size;
	unsigned long int cur_idx;
	shash_node_t *temp;
	shash_node_t *head;

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
