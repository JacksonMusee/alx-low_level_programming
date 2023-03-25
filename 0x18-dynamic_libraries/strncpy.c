#include <stdio.h>
#include "main.h"

/**
 *_strncpy - Copying function
 *
 *@dest: strng 1
 *@src: string 2
 *@n: limit
 *
 * Return: final string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	dest[i]	= src[i];
	while (i < n)
	dest[i++] = '\0';
	return (dest);
}
