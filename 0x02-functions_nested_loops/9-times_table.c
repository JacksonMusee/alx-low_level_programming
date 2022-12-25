#include "main.h"

/**
 *times_table - See code
 */
void times_table(void)
{
	int i;
	int j;
	int product;
	int secDigit;
	int firDigit;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
		product = i * j;
		if (product > 9)
		{
		_putchar(' ');
		secDigit = product % 10;
		firDigit = (product / 10) % 10;
		_putchar(firDigit + '0');
		_putchar(secDigit + '0');
		}
		else if (product < 10 && j != 0)
		{
		_putchar(' ');
		_putchar(' ');
		_putchar(product + '0');
		}
		else
		{
		_putchar(product + '0');
		}
		if (j < 9)
		{
		_putchar(',');
		}
		}
		_putchar('\n');
	}
}
