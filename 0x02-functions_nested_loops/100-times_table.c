#include "main.h"

/**
 *print_times_table - print times
 *
 *@n - maximum number
 */
void print(int);

void print_times_table(int n)
{
	int i;
	int j;
	int product;

	if (n > 15 || n < 0)
	return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
		product = i * j;
		if (product < 10 && j > 0)
		{
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		}
		if (product >= 10 && product < 100 && j > 0)
		{
		_putchar(' ');
		_putchar(' ');
		}
		if (product >= 100 && product < 1000 && j > 0)
		{
		_putchar(' ');
		}
		print(product);
		_putchar(',');
		}
		_putchar('\n');
	}
}

/**
 *print - Assit prnt number
 *@n: the number to print
 */
void print(int n)
{
	if (n < 0)
	{
	_putchar('-');
	n = -n;
	}

	if (n / 10)
	print(n / 10);

	_putchar(48 + (n % 10));
}
