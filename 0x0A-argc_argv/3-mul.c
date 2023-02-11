#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - Multiplies two number
 *
 *@argc: Argument count
 *@argv: Array of args
 *
 *Return: 0 for success and 1 for error
 *
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int pdct;

	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}

	num1 = atoi(*(argv + 1));
	num2 = atoi(*(argv + 2));
	pdct = num1 * num2;

	printf("%d\n", pdct);

	return (0);
}
