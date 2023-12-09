#include "lists.h"

/**
 *
 *
 *
 *
 *
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_nod;
	dlistint_t *new_nod_prev;
	unsigned int idx_count;
	dlistint_t *temp_h = *h;

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
		return (NULL);
	}
	
	return (new_nod);
}
