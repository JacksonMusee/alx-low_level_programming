#include "main.h"
#include <stdio>

/**
 *main - Entry point
 *
 *Description: Obvious
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 123; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return;
}
