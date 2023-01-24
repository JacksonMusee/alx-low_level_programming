#include "main.h"

/**
 *_puts_recursion - Print string
 *
 *@s: Pointer to a string
 *
 */

void _puts_recursion(char *s)
{
	int c = *s;

	if (c == '\0')
	{
	_putchar('\n');
	return;
	}
	_putchar(c);
	s++;
	_puts_recursion(s);
}
