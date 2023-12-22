#include "hash_tables.h"

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
