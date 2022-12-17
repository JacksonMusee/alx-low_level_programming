#include <stdio.h>
#include "main.h"

/**
 * _islower - check lower
 *
 * Return: integer
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	else
	{
	return (0);
	}
	putchar('\n');
}
