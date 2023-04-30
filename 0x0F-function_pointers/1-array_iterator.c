#include <stdio.h>
#include "function_pointers.h"

/**
 *array_iterator - Does something on each ellement of an array using a function from far
 *@array: The array said above
 *@size: length of the array
 *@action: A pointer to the function from far
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
	action(array[i]);
	}
}
