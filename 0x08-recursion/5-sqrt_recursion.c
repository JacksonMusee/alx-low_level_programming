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
	int num = n - 1;
	int sqrt;

	if (num * num == n)
	{
	sqrt = num;
	}

	if (num <= 1)
	{
	sqrt = (-1);
	}

	_sqrt_recursion(num);

	return (sqrt);
}
