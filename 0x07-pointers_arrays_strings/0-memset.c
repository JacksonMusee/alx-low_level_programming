#include "main.h"
#include <stdio.h>

/**
 *_memset - Fill mem
 *
 *@s: Memory address
 *@b: Character to be filled
 *@n: number of  bytes
 *
 * return: Adress of s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 1; i <= (n * sizeof(char)); i++)
	{
	*s = b;
	s = s + sizeof(char);
	}

	return (s);
}
