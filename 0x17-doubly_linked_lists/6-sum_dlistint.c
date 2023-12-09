#include "lists.h"

/**
 *sum_dlistint - sum list's data
 *
 *@head: The list
 *
 *Return: the sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
