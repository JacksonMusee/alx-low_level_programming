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
	int i = 0;
	int end_idx = (size * size) - 1;
	int step = size + 1;
	int step2 = size - 1;

	for (i = 0; i <= end_idx; i += step)
	{
	sum1 += a[i];
	}

	for (i = end_idx - step2; i >= step2; i -= step2)
	{
	sum2 += a[i];
	}
	printf("%d, %d\n", sum1, sum2);
}
