#include "main.h"

/**
 *get_bit - Find the value of the bit at a given index
 *
 *@index: The gven index
 *@n: The number
 *
 *Return: Value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int the_bit = 0;
	unsigned long int mask = 1UL << index;

	if (index > (sizeof(unsigned long int) * 8 )- 1)
		return (-1);

	if ((n & mask) != 0)
		the_bit = 1;

	return (the_bit);
}
