#include <stdio.h>
#include <stdarg.h>

/**
 *sum_them_all - funscton to sum all its aurguments
 *
 *@n: number arguments
 *
 * Return - retunr the sum
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list my_args;
	unsigned int i;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(my_args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(my_args, unsigned int);
	}
	va_end(my_args);

	return (sum);
}
