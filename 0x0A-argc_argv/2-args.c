#include "main.h"
#include <stdio.h>

/**
 *main - see code
 *
 *@argc: Argument count
 *@argv: Arrar of arguments
 *
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", *argv);
	argv++;
	}

	return (0);
}
