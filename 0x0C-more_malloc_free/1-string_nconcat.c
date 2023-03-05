#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *str_size - Find lengthe of a string
 *
 *@strg: Thr string
 *
 *Return: The length
 *
 */

int str_size(char *strg)
{
	int len = 0;

	if (strg == NULL)
		return (0);

	while (*strg != '\0')
	{
	len++;
	strg++;
	}

	return (len);

}
/**
 *string_nconcat - Concatenate string with a fraction of another string
 *
 *@s1: String one
 *@s2: String two
 *@n: Chacters of s2 to be used
 *
 *Return: Pointer to teh new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	int j = 0;
	char *new_str;
	int s1_size;

	s1_size = str_size(s1);

	new_str = malloc(sizeof(*new_str) * (s1_size + n + 1));

	if (new_str == NULL)
		return (NULL);

	while (*s1 != '\0')
	{
		new_str[j] = *s1;
		j++;
		s1++;
	}

	while (i < n)
	{
		new_str[j] = *s2;
		s2++;
		i++;
		j++;
	}

	new_str[j] = '\0';

	return (new_str);
}
