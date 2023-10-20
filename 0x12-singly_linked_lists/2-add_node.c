#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *add_node - Add a node
 *
 *@head: Pointer to pointer to the list
 *@str: String to he new node
 *
 *Return: new head
 */

list_t *add_node(list_t **head, const char *str)
{
	char *my_str = strdup(str);

	list_t *new_head = malloc(sizeof(list_t));

	if (new_head == NULL)
		return (NULL);

	new_head->next = (*head);
	new_head->str = my_str;
	if (new_head->str == NULL)
	{
		free(new_head);
		return (NULL);
	}

	new_head->len = strlen(my_str);

	*head = new_head;

	return (new_head);
}
