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
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);	
		if (num < '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
