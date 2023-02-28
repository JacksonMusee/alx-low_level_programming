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
	int c_count = 0;
	int w_count = 0;
	static int count[2];

	if (*str == ' ' || *str == '\t')
		str++;

	while (*str != '\0')
	{
		c_count++;
		str++;

		while (*str == ' ' || *str == '\t')
			str++;

		if ((*str != ' ' && *str != '\t') && (*(str - 1) == ' ' || *(str - 1) == '\t'))
		{
			w_count++;
			c_count++;
		}
	}

	if (w_count > 0)
		w_count += 1;

	count[0] = w_count;
	count[1] = c_count;

	return (count);
}

/*
int main()
{
	char *str = "I know but it does not matter";

	int *x = do_count(str);

	printf("w_count = %d, c_count = %d\n", *x, *(x + 1));

	return (0);
}
*/

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
	int *count;
	int c_count;
	int w_count;

	count = do_count(str);
	w_count = *count;
	c_count = *(count + 1);

	if (str == NULL || *str == '\0')
		return (NULL);

	words =(int *) malloc((sizeof(char) * (c_count + 1)) + (sizeof(char) * (w_count + 1)));

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
