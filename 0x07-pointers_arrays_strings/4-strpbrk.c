#include "main.h"
#include <stdio.h>

/**
 *_strpbrk - See code
 *@s: String one
 *@accept: Strng two
 *
 * Return: Pointer to first occurrence of a character in accept in s
 */

char *_strpbrk(char *s, char *accept)
{
	char *r = NULL;
	char *accept_origi = accept;

	while (*s != '\0')
	{
		while (*accept != *s && *accept != '\0')
		{
		accept++;
		}
	if (*accept == *s)
	{
	r = s;
	break;
	}
	else
	{
	accept = accept_origi;
	}
	s++;
	}
	return (r);
}
