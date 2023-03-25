#include "main.h"
#include <stdio.h>

/**
 **_memcpy - see code
 *@dest: one
 *@src: two
 *@n: three
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest_origi = dest;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	*dest = *src;
	dest = dest + 1;
	src = src + 1;
	}

	return (dest_origi);
}
