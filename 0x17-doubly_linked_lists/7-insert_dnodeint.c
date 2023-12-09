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
	unsigned int idx_count;
	dlistint_t *temp_h;

	if (h == NULL)
		return (NULL);

	new_nod = malloc(sizeof(dlistint_t));
	if (new_nod == NULL)
		return (NULL);

	new_nod->n = n;
	new_nod->prev = NULL;
	new_nod->next = NULL;

	temp_h = *h;

	if (idx == 0)
	{
		if (temp_h)
			temp_h->prev = new_nod;
		new_nod->next = temp_h;
		*h = new_nod;

		return (new_nod);
	}

	idx_count = 0;
	while (temp_h != NULL && idx_count < idx - 1)
	{
		idx_count++;
		temp_h = temp_h->next;
	}

	if (idx_count == idx - 1)
	{
		if (temp_h)
			new_nod->next = temp_h->next;
		new_nod->prev = temp_h;

		if (temp_h)
			temp_h->next = new_nod;
	}
	else
	{

		free(new_nod);
		return (NULL);
	}

	return (new_nod);
}
