#include "lists.h"

/**
 *free_listint2 - Free list and set head to NULL
 *
 *@head: Double pointer to the list
 *
 *Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *curr_head = *head;
	listint_t *next_node;

	if (!head)
		return;

	while (curr_head != NULL)
	{
		next_node = curr_head->next;
		free(curr_head);
		curr_head = next_node;
	}

	*head = NULL;
}
