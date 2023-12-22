#include "hash_tables.h"

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
