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
	
	if (num < 0)
	{
	num = -num;
	}
	else
	{
	num = num;
	}

	last_dig = num % 10;
	_putchar(last_dig + 48);

	return (last_dig);
}
