#include <stdio.h>
#include "main.h"

/**
 *swap_int - See code
 *
 *Return: void
 *
 * @a: integer
 * @b: another one
 */

void swap_int(int *a, int *b)
{
	int orig_a;

	orig_a = *a;
	*a = *b;
	*b = orig_a;
}
