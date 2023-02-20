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
	int i;

	if (str == NULL)
	return (NULL);

	strcpy = malloc(sizeof(str));

	if (strcpy == NULL)
	return (NULL);

	while (*str != '\0')
	{
	strcpy[i] = *(str + 1);
	i++;
	}
	strcpy[i] = '\0';
}
