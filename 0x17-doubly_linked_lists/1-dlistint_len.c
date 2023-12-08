#include "lists.h"

/**
 *dlistint_len - Find number of elements in a list
 *
 *@h: Head of the list
 *
 * Return: Length od the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	count = 0;
	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
