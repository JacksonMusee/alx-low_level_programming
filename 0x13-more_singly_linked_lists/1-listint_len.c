#include "lists.h"

/**
 *listint_len - Count elements in a list
 *
 *@h: Ponter to the list
 *
 *Return: Number of elements/nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;
	const listint_t *curr_node = h;

	if (h == NULL)
		return (0);

	while (curr_node != NULL)
	{
		node_count++;
		curr_node = curr_node->next;
	}

	return (node_count);
}
