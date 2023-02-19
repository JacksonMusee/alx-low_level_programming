#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - create an array usng malloc and return a ponter to the array
 *
 *@size: size of the array
 *@c: specified character to initialize the array
 *
 * Return: pointer to the array created
 */

char *create_array(unsigned int size, char c)
{
	int i;
	char *str[];

	if (size == 0)
	{
	return (NULL);
	}

	str = malloc((sizeof(char) * size) + 1);

	for (i = 0; i < size; i++)
	{
	str[i] = c;
	}
	str[i] = '\0';

	return (str);
}
