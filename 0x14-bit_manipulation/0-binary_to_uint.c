#include "main.h"

/**
 *binary_to_uint - Convert binary to decimal
 *
 *@b: Pointer to a string of binary characters
 *
 *Return: The decimal or 0 If NULL b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int h_power;
	unsigned int the_deci;

	if (b == NULL)
		return (0);

	h_power = strlen(b) - 1;
	the_deci = 0;

	while (h_power >= 0)
	{
		if (*b != '1' && *b != '0')
			return (0);

		if (*b == '1')
		{
			the_deci += 1 << h_power;

		}
		b++;
		h_power--;
	}

	return (the_deci);

}
