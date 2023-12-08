#include "lists.h"

/**
 *print_dlistint - Print elements of a list
 *
 *@h: Head to the list
 *
 *Return: Number of elements
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *curr_nd;
	size_t count;

	curr_nd = h;
	count = 0;

	while (curr_nd)
	{
		printf("%d\n", curr_nd->n);
		count++;
		curr_nd = curr_nd->next;
	}

	return (count);
}
