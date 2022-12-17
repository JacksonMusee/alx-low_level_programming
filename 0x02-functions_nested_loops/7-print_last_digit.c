#include <stdio.h>
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

	last_dig = 'num % 10';
	_putchar(last_dig);

	return (last_dig);
}
