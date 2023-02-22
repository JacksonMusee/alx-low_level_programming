#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *str_concat - concatenate two strngs
 *
 *@s1: String 1
 *@s2: string 2
 *
 *
 * Return: pointer to the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int len1 = 0, len2 = 0;
	int i = 0, j = 0;

	if (s1 == NULL || s2 == NULL)
	return (NULL);

	while (*s1 != '\0')
	{
	len1 += 1;
	s1++;
	}
	s1 -= len1;

	while (*s2 != '\0')
	{
	len2 += 1;
	s2++;
	}
	s2 -= len2;

	str = malloc(sizeof(char) * (l1 + l2 + 1));

	if (str == NULL)
	return (NULL);

	while (i < len1)
	{
	str[i] = *(s1 + i);
	i++
	}

	while (j < len2)
	{
	str[i] = *(s2 + j);
	j++;
	}

	str[i] = '\0';

	return (str);
}
