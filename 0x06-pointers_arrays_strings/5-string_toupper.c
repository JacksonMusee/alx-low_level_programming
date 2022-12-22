#include <stdio.h>
#include "main.h"

/**
 *string_toupper - see code
 *
 *@str: the string
 *
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
	if (str[i] >= 97 && str[i] <= 122)
	{
	str[i] = str[i] - 32;
	}
	i++;
	}
	return (str);
}
