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

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
		_putchar(48 + j);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
