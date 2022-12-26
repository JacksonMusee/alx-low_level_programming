#include "main.h"
/**
 *print_to_98 - See code
 *@n: First number
 */
void print_to_98(int n)
{
	int cn = n;
	int i;

	if  (cn  <= 98)
	{
		for (i = 0; i <= (98 - n); i++)
		{
		cn += i;
		print(cn);
		cn = n;
		}
		if (cn < 98)
		{
		_putchar(',');
		_putchar(' ');
		}
	}
	else
	{
		for (i = 0; i <= (n - 98); i++)
		{
		cn -= i;
		print(cn);
		cn = n;
		}
		if (cn > 98)
		{
		_putchar(',');
		_putchar(' ');
		}
	}
	_putchar('\n');
}


void print(int n)
{
	if (n < 0)
	{
	_putchar('-');
	n = -n;
	}
	if (n / 10)
	print(n / 10);
	_putchar('0' + n % 10);
}
