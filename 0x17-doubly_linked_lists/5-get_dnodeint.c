#include "lists.h"

/**
 *get_dnodeint_at_index - Get nth node
 *
 *@head: The list
 *@index: The nth index
 *
 *Return: nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp_nxt;
	unsigned int count = 0;
	dlistint_t *nth_nod = NULL;

	while (head)
	{
		temp_nxt = head->next;

		if (count == index)
		{
			nth_nod = head;
			break;
		}
		count++;
		head = temp_nxt;
	}

	return (nth_nod);
}
