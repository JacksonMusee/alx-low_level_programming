#include "main.h"

/**
 *main - Entry point
 *
 *Description: Obvious
 *
 * Return: Always 0 (Success)
 */

int print_alphabet(void)
{
	int i;

	for (i = 97; i <= 123; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
