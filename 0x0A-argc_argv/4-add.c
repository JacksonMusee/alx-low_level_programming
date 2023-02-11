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
	int i;
	int sum;
	int num;

	for (i = 0; i < argc; i++)
	{
		if (*argv[0] > 57)
		{
		printf("Error\n");
		return (1);
		}

		num = atoi(*argv);
		sum += num;
		argv++;
	}
	printf("%d\n", sum);

	return (0);
}
