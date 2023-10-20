#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *free_list - Free all memory used by a list
 *
 *@head: Ponter to the lst
 *
 *Return: Nothing
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *old_head = head;

		head = head->next;

		free(old_head->str);
		free(old_head);
	}
}
