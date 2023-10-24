#include "lists.h"

/**
 *sum_listint - Sum all data in a list
 *
 *@head: Pointer to the list
 *
 *Return: Sum of data
 *
 */

int sum_listint(listint_t *head)
{
	int data_sum;
	listint_t *actv_node;

	if (head == NULL)
		return (0);

	actv_node = head;
	data_sum = 0;

	while (actv_node != NULL)
	{
		data_sum += actv_node->n;
		actv_node = actv_node->next;
	}

	return (data_sum);
}
