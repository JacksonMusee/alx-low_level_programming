#include <stdio.h>
#include "main.h"

/**
 * _abs - Do absolute value
 *
 * @c: Number to check
 *
 * Return: gives absolute value
 */

int _abs(int c)
{
	int abs_val;

	if (c > 0)
	{
	abs_val = c;
	}
	else
	{
	abs_val = c * -1;
	}
	return (abs_val);
}
