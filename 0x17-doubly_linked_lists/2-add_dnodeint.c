#include "lists.h"

/**
 *add_dnodeint - add a new node at beginning
 *
 *@head: Head of the list
 *@n: value of n
 *
 * Return: the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_nod;

	new_nod = malloc(sizeof(dlistint_t));
	if (new_nod == NULL)
		return (NULL);

	new_nod->n = n;
        new_nod->prev = NULL;
	new_nod->next = *head;

	if (*head)
		(*head)->prev = new_nod;

	*head = new_nod;

	return (new_nod);
	
}
