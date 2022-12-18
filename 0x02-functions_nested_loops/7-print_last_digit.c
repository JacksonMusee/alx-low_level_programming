#include <stdio.h>
#include <limits.h>
#include "main.h"

/**
 *print_last_digit - print last digit
 *
 *@num: number to be checked
 *
 * Return: return the last digit
 */

int print_last_digit(int num)
{
	int last_dig;
	last_dig = num % 10;

	if (last_dig < 0)
	{
	last_dig = -last_dig;
	}
	else
	{
	last_dig = last_dig;
	}

	_putchar(last_dig + 48);

	return (last_dig);
}
