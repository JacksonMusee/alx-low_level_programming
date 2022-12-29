#include "main.h"

/**
 *more_numbers - See code
 *
 *
 */

void more_numbers(void)
{
	int i;
	int j;
	int base;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
		if (i >= 10)
		{
		base = i / 10;
		}
		_putchar(48 + base);
		_putchar(48 + j);
		}
		_putchar('\n');
	}
}
