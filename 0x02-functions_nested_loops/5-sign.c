#include <stdio.h>
#include "main.h"

/**
 *print_sign - Check sign
 *
 *@n: The int to be checked
 *
 *Return: returns integer based on result
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	
	return (1);
	}
	else if (n == 0)
	{
	_putchar('0');

	return (0);
	}
	else if (n < 0)
	{
	_putchar('-');
	
	return (-1);
	}
	else
	{
	return (0);
	}
	_putchar('\n');
}
