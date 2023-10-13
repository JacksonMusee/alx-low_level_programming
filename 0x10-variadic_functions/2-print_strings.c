#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *print_strings - Prints all string variable passed to it
 *
 *@separator: Goes between strngs
 *@n: Number of strings passed
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list my_strs;
	unsigned int i;


	if (n == 0)
		_putchar('\n');

	va_start(my_strs, n);
	for (i = 0; i < n; i++)
	{
		char *currt_arg = va_arg(my_strs, char *);

		if (i == n - 1)
		{
			if (currt_arg == NULL)
			{
			printf("%s\n", "(nil)");
			}
			else
			{
			printf("%s\n", currt_arg);
			}
		}
		else
		{
			if (currt_arg == NULL)
			{
			printf("%s\n", "(nil)");
			}
			else
			{
			printf("%s", currt_arg);
			}
			if (separator != NULL)
				printf("%s", separator);

		}
	}
	va_end(my_strs);
}
