#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *char_count - count number of charater in the array av
 *
 *@ac: aurguments count equivalent to number of elements in av
 *@av: array of argments
 *
 * Return: number of charaters
 */

int char_count(int ac, char **av)
{
	int count = 0;
	int i, j;

	for (i = 0; i < ac; i++)
	{
	j = 0;

	while (av[i][j] != '\0')
	{
	count++;
	j++;
	}
	}

	return (count);
}

/**
 *argstostr - concatenate all arguments to a string
 *
 *@ac: argument count
 *@av: array of all arguemnts
 *
 *Return: pointer to the new string
 */

char *argstostr(int ac, char **av)
{
	int c_count;
	int i, j;
	int k = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	c_count = char_count(ac, av);

	str = malloc(sizeof(char) * (c_count + ac + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;

		while (av[i][j] != '\0')
		{
		str[k] = av[i][j];
		k++;
		j++;
		}
		
		str[k] = '\n';

	}

	return (str);
}
