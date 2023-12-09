#include "lists.h"

/**
 *insert_dnodeint_at_index - Insert a node at given index
 *
 *@h: Pointer to a pointer to the head of the given list
 *@idx: Index at which to insert a node
 *@n: Data of the new node
 *
 * Return: The new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_nod;
	dlistint_t *new_nod_prev;
	unsigned int idx_count;
	dlistint_t *temp_h = *h;

	if (!h)
		return (NULL);

	new_nod = malloc(sizeof(dlistint_t));
	if (new_nod == NULL)
		return (NULL);

	new_nod->n = n;
	new_nod->prev = NULL;
	new_nod->next = NULL;

	idx_count = 0;
	while (temp_h && idx_count < idx)
	{
		idx_count++;
		temp_h = temp_h->next;
	}

	if (idx_count == idx)
	{
		new_nod_prev = temp_h->prev;
		new_nod_prev->next = new_nod;
		new_nod->prev = new_nod_prev;
		new_nod->next = temp_h;
	}
	else
	{
		free(new_nod);
		return (NULL);
	}

	if (idx == 0)
		*h = new_nod;

	return (new_nod);
}
