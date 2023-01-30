#include "main.h"

/**
 *_sqrt_recursion - Do square root of a number
 *
 *@n: the number
 *
 *Return: Square root or -1 if the number has no natural sqrt
 *
 */

/**
int _sqrt_recursion(int n)
{
	const unsigned int num = n;
	unsigned int root = n;
	unsigned long int root2 = root * root;
	unsigned int ans;

	if (root == 0)
	{
	return (-1);
	}

	if (root2 == num)
	{
	return (root);
	}

	root--;

	ans = 0 + _sqrt_recursion(root);

	return (ans);
}

*/

int _sqrt_recursion_helper(int n, int i) {

	    if (i * i == n) return i;

	        if (i * i > n) return -1;

		    return _sqrt_recursion_helper(n, i + 1);

}



int _sqrt_recursion(int n) {

	    if (n < 0) return -1;

	        return _sqrt_recursion_helper(n, 1);

}
