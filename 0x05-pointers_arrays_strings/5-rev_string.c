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
	char rd_s[10];
	int j;

	while (s[i] != '\0')
	{
	i++;
	}
	i = i-1;
	j = 0;

	while (i >= 0)
	{
	rd_s[j] = s[i];
	i--;
	j++;
	}
	s = rd_s;
}
