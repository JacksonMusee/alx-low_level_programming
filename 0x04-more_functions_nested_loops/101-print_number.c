#include "main.h"

/**
 *print_number - do it
 *
 */

void print_number(int n)
{
	if (n < 0)
	{
	n = -n
	_putchar('-');
	}

	if (n / 10)
	{
	print_numbers(n/10);
	}

	_putchar(n % 10);
}
