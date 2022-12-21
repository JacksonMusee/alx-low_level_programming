#include <stdio.h>
#include "main.h"

/**
 *puts_half - the function
 *
 *@str: string
 *
 */

void puts_half(char *str)
{
	int len = 0;
	char *y = str;
	int n;

	while (*y != '\n')
	{
	y++;
	len++;
	}
	if (len % 2 == 0)
	{
	n = len / 2;
	}
	else
	{
	n = (len + 1) / 2;
	}
	for (; n < len; n++)
	{
	_putchar(str[n]);
	}
	_putchar('\n');
}
