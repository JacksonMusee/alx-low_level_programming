#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - prnt sum of diagnol of matrix
 *@a: 2D Array/matrix
 *@size: of array
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
	sum1 += a[i][i];
	}
	for (i = size; i >= 0; i--)
	{
	sum2 += a[i][i];
	}
	printf("%d, %d", sum1, sum2)
}
