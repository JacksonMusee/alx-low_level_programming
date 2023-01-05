#include "main.h"
#include <stdio.h>

/**
 *_memset - Fill mem
 *
 *@s: Memory address
 *@b: Character to be filled
 *@n: number of  bytes
 *
 *Return: Adress of s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char s_origi;

	for (i = 1; i <= (n * sizeof(b)); i++)
	{
	*s = b;
	s = s + sizeof(b);
	}

	return (s_origi);
}
