#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *_calloc - Allocate memory in multiple segments
 *
 *@nmemb: Number of segment required
 *@size: Size of each segment
 *
 * Return: Pointer to the memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *mem;

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	memset(mem, 0, size * nmemb);

	return (mem);
}
