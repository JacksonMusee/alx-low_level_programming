#include "lists.h"

/**
 *print_listint - Print all elements of a list
 *
 *@h: A ponter to the list
 *
 *Return: Number of nodes
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	const listint_t *actv_node = h;

	if (h == NULL)
		return (0);

	while (actv_node->next != NULL)
	{
		printf("%d\n", actv_node->n);
		actv_node = actv_node->next;
		node_count++;

	}
	printf("%d\n", actv_node->n);
	node_count++;

	return (node_count);
}
