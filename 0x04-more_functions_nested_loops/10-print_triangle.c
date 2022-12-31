#include "main.h"

/**
 *print_triangle - See code
 *
 *@size: Size
 *
 *
 */

void print_triangle(int size)
{
	int i;
	int j = 0;

	if (size > 0)
	{
	for (i = 0; i < size; i++)
	{
		while (j < size - i - 1)
		{
		_putchar(' ');
		j++;
		}
		while (j < size)
		{
		_putchar('#');
		j++;
		}
		j = 0;
		_putchar('\n');
	}
	}
	else
	{
	_putchar('\n');
	}
}
