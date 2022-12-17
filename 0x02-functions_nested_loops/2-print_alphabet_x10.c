#include <stdio.h>
#include "main.h"

/*
 * print_alphabet_x10 - print alphabet 10 times on new lines
 *
 * Description: Nothing
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 97; j < 123; j++)
		{
			putchar(j);
		}
		putchar('\n');
	}
}
