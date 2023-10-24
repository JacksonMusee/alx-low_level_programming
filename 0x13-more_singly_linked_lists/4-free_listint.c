#include "lists.h"

/**
 *free_listint - Free a list
 *
 *@head: Pointer to the list
 *
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *next_node;

	while (head != NULL)
	{
		next_node = head->next;
		free(head);
		head = next_node;
	}
}
