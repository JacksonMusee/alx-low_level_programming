#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>
#include <main.h>

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

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar("\n");

	return(0);
}
