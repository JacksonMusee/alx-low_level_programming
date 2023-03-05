#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *string_nconcat - Concatenate string with a fraction of another string
 *
 *@s1: String one
 *@s2: String two
 *@n: Chacters of s2 to be used
 *
 * Return: Ponter to teh new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0;
	char *new_str;

	new_str = malloc(sizeof(s1) + n + 1);

	if (new_str == NULL)
		return (NULL);

	while (*s1 != '\0')
	{
		*new_str = *s1;

		new_str++;
		s1++;
	}

	while (i < n)
	{
		*new_str = *s2;

		new_str++;
		s2++;
		i++;
	}

	*new_str = '\0';

	return (new_str);
}
