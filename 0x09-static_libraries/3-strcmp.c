#include <stdio.h>
#include "main.h"

/**
 *_strcmp - See code
 *
 *@s1: strng 1
 *@s2: strng 2
 *
 * Return: result
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int res = 0;

	while (res == 0 && s1[i] != '\0' && s2[i] != '\0')
	{
	res = s1[i] - s2[i];
	i++;
	}

	return (res);
}
