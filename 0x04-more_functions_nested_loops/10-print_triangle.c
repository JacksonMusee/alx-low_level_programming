#include "main.h"

/**
 *print_triangle - See code
 *
 *
 *
 *
 */

void print_triangle(int size)
{
	int i;
	int j = 1;

	if (size > 0)
	{
	for (i = 1; i <= size; i++)
	{
		while (j <= size - i)
		{
		_putchar(' ');
		j++;
		}
		while (j <= size)
		{
		_putchar('#');
		j++;
		}
		_putchar('\n');
	}
	}
	else
	{
	_putchar('\n');
	}
}
