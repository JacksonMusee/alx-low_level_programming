#include "main.h"

/**
 *clear_bit - Sets a given bit to zero
 *
 *@n: Pointer to a number
 *@index: index of the bit to clear
 *
 *Return: 1 on success -1 on error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = ~(1UL << index);

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= mask;

	return (1);
}
