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
	unsigned long int x = 1;
	unsigned long int y = 2;
	unsigned long int z;
	int count = 2;

	printf("%lu, %lu, ", x, y);
	while (count < 98)
	{
	z = x + y;
	printf("%lu", z);
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
