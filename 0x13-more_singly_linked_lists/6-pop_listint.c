#include "lists.h"

/**
 *pop_listint - Delete the head of a list
 *
 *@head: Double pointer to the list
 *
 *Return: Data of the head node
 */

int pop_listint(listint_t **head)
{
	int h_data;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return (0);

	h_data = (*head)->n;
	next = (*head)->next;

	free(*head);

	*head = next;

	return (h_data);
}
