#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *print_list - Print elements of a singly linked list
 *
 *@h: Pointer to the list
 *
 *Return: number of node printed
 */

size_t print_list(const list_t *h)
{
	size_t node_count = 0;
	const list_t *actv_node = h;

	if (actv_node == NULL)
		return (0);

	while (actv_node != NULL)
	{
		if (actv_node->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] ", actv_node->len);
			printf("%s\n", actv_node->str);
		}
		actv_node = actv_node->next;
		node_count++;
	}

	return  (node_count);
}
