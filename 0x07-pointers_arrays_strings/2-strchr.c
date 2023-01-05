#include "main.h"
#include <stdio.h>

/**
 *_strchr - see code
 *@s: string
 *@c: character to find
 *
 *Return: Adress of c
 */

char *_strchr(char *s, char c)
{

	while (*s == c && *s != '\0')
	{
	s++;
	}
	if (*s == c)
	{
	return (s);
	}
	else
	{
	return (NULL);
	}
}
