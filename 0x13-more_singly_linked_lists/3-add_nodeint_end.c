#include "lists.h"

/**
 *add_nodeint_end - Add anode at the end of a list
 *
 *@head: Double Pointer to the list
 *@n: Int value of the new node
 *
 *Return: Return the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *curr_node = *head;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (curr_node->next != NULL)
	{
		curr_node = curr_node->next;
	}

	curr_node->next = new_node;

	return (new_node);
}
