#include "lists.h"

/**
 *get_nodeint_at_index - Return node at gven index
 *
 *@head: Pointer to the list
 *@index: The index needed
 *
 *Return: Pointer to the node at the index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node_count;
	listint_t *actv_node;

	if (head == NULL)
		return (NULL);


	node_count = 0;
	actv_node = head;

	while (actv_node->next != NULL && node_count < index)
	{
		node_count++;
		actv_node = actv_node->next;
	}

	if (node_count < index)
		return (NULL);

	return (actv_node);
}
