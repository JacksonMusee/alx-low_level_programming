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
	char str[] = &s;

	i = 0;

	while(str[i])
	{
	strlen = i+1;
	i++;
	}

	return (strlen);
}
