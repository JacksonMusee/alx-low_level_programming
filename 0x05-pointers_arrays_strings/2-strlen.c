#include <stdio.h>
#include "main.h"

/**
 *_strlen - get length
 *
 *@s: String
 *
 *Return: see code
 */

int _strlen(char *s)
{
	int strlen;

	strlen = 0;

	while (*s != '\0')
	{
	s++;
	strlen++;
	}

	return (strlen);
}
