#include "main.h"

/**
 *flip_bits - Get the number of bit you need to flip to get from one number to
 *another
 *
 *@n: One of the numbers
 *@m: The other number
 *
 * Return: Number of bits to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int max_shift = (sizeof(unsigned long int) * 8) - 1;
	unsigned long int tmp = n ^ m;
	unsigned long int mask = 1UL;
	int i = 0;
	unsigned int to_flp = 0;

	while (i <= max_shift)
	{
		if ((tmp & mask) != 0)
			to_flp++;

		mask <<= 1;
		i++;
	}

	return (to_flp);
}
