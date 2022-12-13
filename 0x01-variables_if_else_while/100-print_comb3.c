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
	int numst;
	int nums;

	for (numst = 0; numst <= 9; numst++)
	{
		for (nums = numst + 1; nums <= 9; nums++)
		{
			putchar(numst + '0');
			putchar(nums + '0');

			if (numst < 8)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
