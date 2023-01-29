#include "main.h"

/**
 *_pow_recursion - do x power y
 *
 *@x: number
 *@y: power
 *
 *Return - return x power y. return -1 when y<0
 *
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
	return (1);	
	}

	if (y < 0)
	{
	return (-1);
	}

	y--;

	return (x * _pow_recursion(x, y));
}
