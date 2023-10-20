#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *add_node_end - Add new node at the end of list
 *
 *@head: Pointer to pointer to the head of the list
 *@str: Strng value of thenew element
 *
 *Return: Return address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *curr = *head;
	list_t *new_end = malloc(sizeof(list_t));

	if (new_end == NULL)
		return (NULL);

	new_end->str = strdup(str);
	if (new_end->str == NULL)
	{
		free(new_end);
		return (NULL);
	}

	new_end->len = strlen(str);
	new_end->next = NULL;

	if (*head == NULL)
	{
		*head = new_end;
	}
	else
	{
		while (curr->next != NULL)
		{
			curr = curr->next;
		}
		curr->next = new_end;
	}

	return (new_end);
}
