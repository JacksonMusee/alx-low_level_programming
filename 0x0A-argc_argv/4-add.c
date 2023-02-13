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

	for (i = 1; i < argc; i++)
	{

		for (j = 0; ; j++)
		{
			if (argv[i][j] != '\0' && (argv[i][j] < 48 || argv[i][j] > 57))
			{
			printf("Error\n");
			return (1);
			}
			else if (argv[i][j] == '\0')
			break;
		}

		num = atoi(argv[i]);
		sum += num;
	}
	printf("%d\n", sum);

	return (0);
}
