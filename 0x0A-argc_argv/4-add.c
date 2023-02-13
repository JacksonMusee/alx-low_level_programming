#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main - see code
 *
 *@argc: argument count
 *@argv: Argument vector
 *
 * Return: 0 success 1 error
 */

int main(int argc, char *argv[])
{
	int i, j;
	int sum;
	int num;

	for (i = 0; i < argc; i++)
	{
		for (j = 0; ; j++)
		{
			if (argv[0][j] != '\n' && argv[0][j] > 57)
			{
			printf("Error\n");
			return (1);
			}
			else if (argv[0][j] == '\n')
			break;
		}
		printf("%s\n", *argv);
		num = atoi(*argv);
		sum += num;
		argv++;
	}
	printf("%d\n", sum);

	return (0);
}
