#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *print_numbers - Functon to print number arguments
 *
 *@separator: goes between prnted numbers
 *@n: argument count
 *
 *Return - void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list my_args;
	unsigned int i;

	va_start(my_args, n);
	for (i = 0; i < n; i++)
	{
		if (i == n-1)
		{
			printf("%d\n", va_arg(my_args, int));
		}
		else
		{
			printf("%d", va_arg(my_args, int));

			if (separator && i != n-1)
				printf("%s", separator);

		}

	}
	va_end(my_args);
}
