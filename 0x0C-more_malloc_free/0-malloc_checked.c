#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void *malloc_checked(unsigned int b)
{
	void *my_mem;

	my_mem = malloc(b);

	if (my_mem == NULL) exit(98);

	return (my_mem);
}
