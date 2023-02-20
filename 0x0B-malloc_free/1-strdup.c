#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strdup - Make a copy of a string
 *
 *@str: the strng to copy
 *
 * Return: A pointer to the copy string
 */

char *_strdup(char *str)
{
	char *strcpy;
	int i = 0;
	int len = 0;

	if (str == NULL)
	return (NULL);

	while (*str != '\0')
	{
	len += 1;
	str++;
	}

	strcpy = malloc((sizeof(char) * len) + 1);

	if (strcpy == NULL)
	return (NULL);

	while (*str != '\0')
	{
	strcpy[i] = *str;
	i++;
	str++;
	}
	strcpy[i] = '\0';

	return (strcpy);
}
