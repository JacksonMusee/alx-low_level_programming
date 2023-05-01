#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 *main - Entry to complcations
 *
 *@argc: Argurmen coount
 *@argv: Argument vector
 *
 *Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int ans;
	int denom;
	int (*the_function)(int, int);

	if (argc != 4)
	{
	printf("Error\n");
	exit(98);
	}
	
	denom = atoi(argv[3]);
	if (denom == 0 && (strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0))
	{
	printf("Error\n");
	exit(100);
	}
	the_function = get_op_func(argv[2]);
	if (the_function == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	ans = the_function(atoi(argv[1]), denom);

	printf("%d\n", ans);

	return (0);
}
