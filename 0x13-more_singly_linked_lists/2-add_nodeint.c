#include "lists.h"

/**
 *add_nodeint - Adds a node at the beginning of a list
 *
 *@head: Pointer to a ponter to the lists head
 *@n: Int value of the new node
 *
 *Return: Return a pointer to the newly added node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
