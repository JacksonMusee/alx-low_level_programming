#include "lists.h"

/**
 *add_dnodeint_end - add node at end of list
 *
 *@head: The list
 *@n: Value of n for the new node
 *
 * Return: The new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_nod;
	dlistint_t *temp;

	new_nod = malloc(sizeof(dlistint_t));
	if (new_nod == NULL)
		return (NULL);

	new_nod->prev = NULL;
	new_nod->next = NULL;
	new_nod->n = n;

	if (*head == NULL)
	{
		*head = new_nod;

		return (new_nod);
	}

	temp = *head;
	while (temp->next)
	{
		temp = temp->next;
	}

	new_nod->prev = temp;
	temp->next = new_nod;

	return (new_nod);
}
