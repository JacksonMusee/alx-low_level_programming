#include "main.h"
#include <stdio.h>

/**
 *print_alphabet - Prints all abphabet in lowercase
 *
 *Description: Obvious
 *
 * Return: void
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
