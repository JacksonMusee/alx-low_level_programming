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

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
	return (NULL);

	grid = (int**)malloc(sizeof(int*) * height);

	if (grid == NULL)
	{
	free(grid);
	return (NULL);
	}

	for (i = 0; i < height; i++)
	{
	grid[i] = (int*)malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
		for (i = 0; j < height; i++)
		{
		free(grid[i]);
		}
		return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
