#include <stdio.h>

/**
 *main - Prnt Fibonacci sequence
 *
 *Return: zero
 *
 */
int main(void)
{
	long long int x = 1;
	long long int y = 2;
	long long int z;
	int count = 2;

	printf("%d, %d, ", x, y);
	while (count < 50)
	{
	z = x + y;
	printf("%d", z);
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
