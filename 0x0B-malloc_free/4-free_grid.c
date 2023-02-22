#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *free_grid - Free allocated memory in fle 3-alloc_grid.c
 *
 *@grid: pointer to array of ponters
 *@height: number rows/sub arrays
 *
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
	free(grid[i]);
	}

	free(grid);
}
