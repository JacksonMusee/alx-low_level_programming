#include "main.h"

/**
 *get_endianness - as the name says
 *
 *Return: 1 for lttle endian and 0 for big endian
 *
 */

int get_endianness(void)
{
	int test_num = 1;
	int mask = 1;
	int rslt = 0;

	if ((test_num & mask) == 1)
		rslt = 1;

	return (rslt);
}
