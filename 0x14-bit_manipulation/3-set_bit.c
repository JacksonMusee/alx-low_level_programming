#include "main.h"

/**
 *set_bit - Set the bit at a given index to on
 *
 *@n: Pointer to the number
 *@index: position of the bt to set
 *
 * Return: 1 on succes and -1 one on failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > (sizeof(unsigned long int) * 8) - 1)
		return (-1);

	mask = 1UL << index;
	*(n) |= mask;

	return (1);
}
