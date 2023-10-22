#include "main.h"

/**
 *print_number - do it
 *@n: number to print
 */

void print_number(int n)
{
	int num = n;

	if (num < 0)
	{
	num = -num;
	_putchar('-');
	}

	if (num / 10)
	{
	print_number(num / 10);
	}

	_putchar(48 + (num % 10));
}
