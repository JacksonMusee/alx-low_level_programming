#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *do_count - Count words and characters in a string
 *
 *@str: the string
 *
 *Return: A pointer to array of character count and word count
 */

int *do_count(char *str)
{
	int c_count;
	int w_count;
	static int count[2];

	while (*str == ' ' || *str == '\t')
	{
	str++;
	}

	while (*str != '\0')
	{
		if (*str == ' ' || *str == '\t')
			str++;

		c_count++;

		if ((*str != ' ' && *str != '\t') && (*(str - 1) == ' ' || *(str - 1) == '\t'))
		{
			w_count++;
			c_count++;
		}

		str++;
	}

	count[0] = c_count;
	count[1] = w_count;

	return (count);
}

/**
 *strtow - Convert a string to an array of string (Words)
 *
 *@str: The string
 *
 * Return: pointer to the array
 */

char **strtow(char *str)
{
	char **words;
	int i;
	int j = 0;
	int count[2];
	int c_count;
	int w_count;

	count = do_count(str);
	c_count = count[0];
	w_count = count[1];
/*
	if (str == NULL || str == "")
		return (NULL);*/

	words = malloc((sizeof(char) * (c_count + 1)) + (sizeof(char) * (w_count + 1)));

	if (words == NULL)
		return (NULL);

	for (i = 0; i < w_count; i++)
	{
		if (*str == ' ' || *str == '\t')
			str++;

		while (*str != ' ' && *str != '\t' && *str != '\0')
		{
			words[i][j] = *str;
			str++;
			j++;
		}

		words[i][j] = '\0';
		j = 0;
	}

	return (words);
}

















