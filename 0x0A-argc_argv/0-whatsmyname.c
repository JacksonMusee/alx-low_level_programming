#include "main.h"
#include <stdio.h>

/**
 *main - prnt program name
 *
 *@argc: Argument count
 *
 * @argv: Array of arguments
 *
 * Return: 0 for success 1 otherwise
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
