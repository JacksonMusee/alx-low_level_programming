#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *array_range - arrange integers
 *
 *@min: Lower boarder
 *@max: Upper limit
 *
 *Return: Pointer to the arranged array
 */

int *array_range(int min, int max)
{
	int *arranged;
	int i = 0;

	if (min > max)
	{
		return (NULL);
	}

	arranged = malloc(sizeof(arranged) * ((max - min) + 1));

	if (arranged == NULL)
	{
		return (NULL);
	}

	while (i < (max - min + 1))
	{
		arranged[i] = min + i;
		i++;
	}

	return (arranged);
}

