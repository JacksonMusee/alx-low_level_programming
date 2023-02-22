#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *alloc_grid - Allocate memory for 2-D array (matrix)
 *
 *@width: number of columns
 *@height: number of rows
 *
 * Return: pointer to the matrix
 */

int *alloc_grid(int width, int height)
{
	int i, j;
	int *grid;

	if (width <= 0 || height <= 0)
	return (NULL);

	grid = malloc(sizeof(int) * (width * height));

	if (grid == NULL)
	return (NULL);

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
