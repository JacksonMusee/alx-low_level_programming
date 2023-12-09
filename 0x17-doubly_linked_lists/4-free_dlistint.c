#include "lists.h"

/**
 *free_dlistint - free a list
 *
 *@head: The list's head
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp_nxt;

	while (head != NULL)
	{
		temp_nxt = head->next;
		free(head);
		head = temp_nxt;
	}
}
