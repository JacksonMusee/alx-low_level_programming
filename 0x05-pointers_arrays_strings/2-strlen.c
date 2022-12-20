#include <stdio.h>
#include "main.h"

/**
 *
 *
 *
 *
 */

int _strlen(char *s)
{
	
	int i;
	int strlen;
	char str[];

	i = 0;
	str[32] = &s;

	while(str[i])
	{
	strlen = i+1;
	i++;
	}

	return (strlen);
}
