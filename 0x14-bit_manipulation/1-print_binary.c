#include "main.h"

/**
 *print_binary - Print binary representation of a number
 *
 *@n: The number
 *
 *Return: void
 */

void print_binary(unsigned long int n)
{
	int on_found = 0;
	int bit_size = sizeof(unsigned long int) * 8;
	unsigned long int mask = 1UL << (bit_size - 1);
	int i = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (i < bit_size)
	{
		if ((n & mask) != 0)
		{
			_putchar('1');
			on_found = 1;
		}
		else
		{
			if (on_found == 1)
				_putchar('0');
		}

		mask = mask >> 1;
		i++;
	}
}
