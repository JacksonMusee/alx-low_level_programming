#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *main - Count coins for change
 *
 *@argc: Number aurguments passed to main
 *@argv: Array of the arguments
 *
 *Return: Coin count
 */

int main(int argc, char *argv[])
{
	int cents;
	int cncnt = 0;
	int i;
	int denoms[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}

	cents = atoi(*(argv + 1));

	if (cents < 0)
	{
	printf("%d\n", 0);
	return (0);
	}

	for (i = 0; i <= 4; i++)
	{
		while (cents >= denoms[i])
		{
		cncnt++;
		cents -= denoms[i];
		}
	}
	printf("%d\n", cncnt);

	return (0);
}
