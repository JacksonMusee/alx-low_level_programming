#include <stdio.h>
#include "main.h"

/**
 *
 *
 *
 *
 *
 */

char *cap_string(char *str)
{
	int i;

	while (str[i] != '\0')
	{
	if (i == 0 || (str[i] >= 97 && str[i] <= 122 && str[i-1] == 32))
	{
	str[i] = str[i] - 32;
	}
	i++;
	}
}
