#include <stdio.h>

/**
 *main - Prnt Fibonacci sequence
 *
 *Return: zero
 *
 */
int main(void)
{
	long int x = 1;
	long int y = 2;
	long int z;
	int count = 2;

	printf("%ld, %ld, ", x, y);
	while (count < 50)
	{
	z = x + y;
	printf("%ld", z);
	if (count < 49)
	{
	printf(", ");
	}
	x = y;
	y = z;
	count++;
	}
return (0);
}
