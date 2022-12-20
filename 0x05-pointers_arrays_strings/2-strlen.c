#include <stdio.h>
#include "main.h"

/**
 *
 *
 *
 *
 */

int _strlen(char s)
{
	
	int i;
	int strlen;

	i = 0;

	while(s[i] != NULL)
	{
	strlen = i+1;
	i++;
	}

	return (strlen);
}
