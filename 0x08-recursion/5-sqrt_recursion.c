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
	int root = n;
	int ans;

	if ((num < 0) || (root < 0))
	{
	return (-1);
	}

	if ((root * root) == num)
	{
	return (root);
	}

	root--;

	ans = 0 + _sqrt_recursion(root);

	return(ans);
}
