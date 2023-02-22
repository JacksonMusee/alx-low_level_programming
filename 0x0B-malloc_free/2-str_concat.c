#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int calc_len(char *str_cp)
{
	int len = 0;

	if (str_cp == NULL)
	return (0);

	while (*str_cp != '\0')
	{
	len += 1;
	str_cp++;
	}

	return (len);
}
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
	int len1, len2;
	int i = 0, j = 0;
/*
	if (s1 == NULL && s2 == NULL)
	return (NULL);*/

	len1 = calc_len(s1);
	len2 = calc_len(s2);

	str = malloc(sizeof(char) * (len1 + len2 + 1));

	if (str == NULL)
	return (NULL);

	while (i < len1)
	{
	str[i] = *(s1 + i);
	i++;
	}

	while (j < len2)
	{
	str[i] = *(s2 + j);
	j++;
	i++;
	}

	str[i] = '\0';

	return (str);
}
