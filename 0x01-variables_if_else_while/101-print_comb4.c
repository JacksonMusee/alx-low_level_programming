#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>

/**
 *main - Entry point
 *
 *Description: Checking if number is negative
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int j;
	int k;

	for (i = 48; i < 56; i++)
	{
		for (j = i + 1; j < 57; j++)
		{
			for (k = j + 1; k < 58; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i != 55 || j != 56 || k != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
