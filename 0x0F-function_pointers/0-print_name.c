#include <stdio.h>
#include "function_pointers.h"

/**
 *print_name - Print a name using a function far away
 *
 *@name: The aneme to print
 *@f: The function from far east!
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL);
		*f(name);
}
