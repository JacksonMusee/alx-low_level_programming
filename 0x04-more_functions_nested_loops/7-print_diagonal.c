#include "main.h"

/**
 *print_diagonal - See code
 *@n: Times to print
 *
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
	for (i = 1; i <= n; i++)
	{
		for (j = 0; j <= i - 2; j++)
		{
		_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	}

	else
	{
	_putchar('\n');
	}	
}...
