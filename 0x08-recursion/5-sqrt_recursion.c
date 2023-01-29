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
	int sqrt = n;

	if (sqrt * sqrt == num)
	{
	return (sqrt);
	}

	if (num <= 0 || sqrt <= 1)
	{
	return (-1);
	}

	sqrt--;

	return(_sqrt_recursion(sqrt));
}
