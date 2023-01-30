#include "main.h"

/**
 *_sqrt_recursion_helper - Do square root of a number
 *
 *@n: the number
 *@i: Base root
 *
 *Return: Square root or -1 if the number has no natural sqrt
 *
 */
int _sqrt_recurson_helper(int n, int i)
{
	if (i * i == n)
	return (i);

	if (i * i > n)
	return (-1);

	return (_sqrt_recurson_helper(n, i++));
}

/**
 *_sqrt_recursion - Find squareroot of a number
 *
 *@n: the number
 *
 *Return: squareroot of n or -1 if n is less than 0
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);

	return (_sqrt_recurson_helper(n, 0));
}
