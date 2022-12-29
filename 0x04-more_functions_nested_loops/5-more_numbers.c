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
	int sec;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
		if (j >= 10)
		{
		base = i / 10;
		sec = i % 10;
		}
		else
		{
		base = 0;
		sec = j;
		}
		if (base > 0)
		{
		_putchar(48 + base);
		}
		_putchar(48 + sec);
		}
		_putchar('\n');
	}
}
