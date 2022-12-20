#include <stdio.h>
#include "main.h"

/**
 *print_rev - reverse
 *
 *@s - Parameter
 *
 */

void print_rev(char *s)
{
	s = s-2;
	
	while (*s != '\0')
	{
	_putchar(*s);
	s--;
	}
	_putcahr('\n');
}
