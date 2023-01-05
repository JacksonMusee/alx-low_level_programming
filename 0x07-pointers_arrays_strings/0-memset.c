#include "main.h"

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
	int i;

	for (i = 1; i < n; i++)
	{
	*s = b;
	s += i;
	}

	return (s);
}
