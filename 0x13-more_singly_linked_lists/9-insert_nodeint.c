#include "lists.h"

/**
 *insert_nodeint_at_index - Add new node at given index
 *
 *@head: Pointer to the list
 *@idx: Given index
 *@n: Data of the new node
 *
 *Return: Pointer to the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *prev_node;
	listint_t *actv_node;
	unsigned int count;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);


	prev_node = NULL;
	actv_node = *head;
	count = 0;

	while (count < idx)
	{
		prev_node = actv_node;
		actv_node = actv_node->next;
		count++;
	}

	if (actv_node == NULL && prev_node == NULL && *head != NULL)
		return (NULL);

	prev_node->next = new_node;
	new_node->next = actv_node;
	new_node->n = n;

	if (*head == NULL)
		*head = new_node;

	return (new_node);
}
