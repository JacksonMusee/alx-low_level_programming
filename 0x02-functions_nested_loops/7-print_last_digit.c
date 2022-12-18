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
	num = num * -1;
	}
	else
	{
	num = num;
	}

	last_dig = num % 10;
	_putchar('0' + last_dig);

	return ('0' + last_dig);
}
