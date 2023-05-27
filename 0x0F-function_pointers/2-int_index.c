#include <stdio.h>
#include "function_pointers.h"

/**
 *int_index - Compare two array using foreign function
 *
 *@array: Our array
 *@size: Size of array
 *@cmp: pointer to the foreign function
 *
 * Return: Returns the matching index or -1 on error
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int idx;

	if (size <= 0)
		return (-1);

	if (!array || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
	{
	idx = cmp(array[i]);
	if (idx != 0)
		return (i);
	}

	return (-1);
}