#include "main.h"
#include <stddef.h>

/**
 *_strchr - see code
 *@s: string
 *@c: character to find
 *
 *Return: Adress of c
 */

char *_strchr(char *s, char c)
{
	char *r;

	while (*s != '\0')
	{
	if (*s == c)
	{
	r = s;
	break;
	}
	s++;
	}

	if (*s == '\n')
	{
	r = NULL;
	}

	return (r);
}
