#include "main.h"

/**
 *void _print_rev_recursion - Print string
 *
 *@s: Pointer to a string
 *
 */

void _print_rev_recursion(char *s)
{
	int c = *s;

	if (c == '\0')
	{
	return;
	}
	s++;
	_print_rev_recursion(s);
	_putchar(c);
	_putchar('\n');
}
