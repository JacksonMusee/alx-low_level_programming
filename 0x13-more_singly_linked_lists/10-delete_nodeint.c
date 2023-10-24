#include "lists.h"

/**
 *delete_nodeint_at_index - delete node a given index
 *
 *@head: Double ponter to the list
 *@index: Given index
 *
 *Return: 1 on success, -1 on fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev_node;
	listint_t *actv_node;
	unsigned int count;

	if (*head == NULL)
		return (-1);

	count = 0;
	prev_node = NULL;
	actv_node = *head;

	if (index == 0)
	{
		*head = actv_node->next;
		free(actv_node);
		return (1);
	}

	while (count < index)
	{
		if (actv_node == NULL)
			return (-1);

		prev_node = actv_node;
		actv_node = actv_node->next;
		count++;
	}

	prev_node->next = actv_node->next;
	free(actv_node);

	return (1);
}
