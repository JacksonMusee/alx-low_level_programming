#include "main.h"

/**
 *_sqrt_recursion - Do square root of a number
 *
 *@n: the number
 *
 *Return: Square root or -1 if the number has no natural sqrt
 *
 */

int _sqrt_recursion(int n)
{
	const int num = n;
	int sqrt = 1;

	if (sqrt * sqrt == num)
	{
	return (sqrt);
	}

	if (num <= 0 || sqrt >= num)
	{
	return (-1);
	}

	sqrt++;

	_sqrt_recursion(sqrt);

	return (sqrt);
}
