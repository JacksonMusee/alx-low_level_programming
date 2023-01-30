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
	int root = 0;
	int ans;

	if (num < 0)
	{
	return (-1);
	}

	if ((root * root) == num)
	{
	return (root);
	}

	if ((root * root) > num)
	{
	return (-1);
	}

	root++;
	ans = _sqrt_recursion(root);

	return(ans);
}
