#include "lists.h"

/**
 *reverse_listint - reverse a list
 *
 *@head: Pointer to the list
 *
 *Return: Pointer to the reversed list
 *
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node;
	listint_t *temp_node;

	if (head == NULL || *head == NULL)
		return (NULL);

	prev_node = NULL;
	temp_node = NULL;

	while (*head != NULL)
	{
		temp_node = (*head)->next;
		(*head)->next = prev_node;
		prev_node = *head;
		*head = temp_node;

	}

	*head = prev_node;

	return (prev_node);

}
