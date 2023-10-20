#include <stdio.h>
#include "lists.h"

/**
 *list_len - determne length of a lnked list
 *
 *@h: pointer to the lnked list
 *
 *Return: Number of elements/nodes in the list
 */

size_t list_len(const list_t *h)
{
	const list_t *actv_node = h;
	size_t node_count = 0;

	if (h == NULL)
		return (0);

	while (actv_node != NULL)
	{
		node_count++;
		actv_node = actv_node->next;
	}

	return (node_count);
}
