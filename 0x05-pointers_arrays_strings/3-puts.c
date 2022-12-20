#include <stdio.h>
#include "main.h"

/**
 *_puts - print
 *
 *str: string to print
 *
 *
 */

void _puts(char *str)
{
	
	while (*str != '\0')
	{
	_putchar(*str);
	s++;
	}
	_putchar('\n');
}
