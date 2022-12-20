#include <stdio.h>
#include "main.h"

/**
 *rev_string - Function
 *
 *@s: string
 *
 *
 */

void rev_string(char *s)
{
	int i;
	int j;

	while (s[i] != '\0')
	{
	i++;
	}
	i = i-1;
	j = 0;

	while (j <= 9)
	{
	s[j] = s[i];
	i--;
	j++;
	}
}
