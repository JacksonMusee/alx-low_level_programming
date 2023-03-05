#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
	void *mem;
	unsigned int i;

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
	{
	 mem[i] = 0;
	}

	return (mem);
}
