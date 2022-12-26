#include <stdio.h>

/**
 *main - Fibonacci upt0 98 terms
 *
 *Return: Zero
 *
 *
 */

int main(void)
{
	long int x = 1;
	long int y = 2;
	long int z;
	int count = 2;

	printf("%ld, %d, ", x, y);
	while (count < 98)
	{
	z = x + y;
	printf("%ld", z);
	if (count < 97)
	{
	printf(", ");
	}
	x = y;
	y = z;
	count++;
	}
	putchar('\n');
	return (0);
}
