#nclude <stdio.h>

/**
 *main - sum Fibonacci terms not exceeding 4,000,000
 *
 *Return: Zero
 */
int main(void)
{
	long int x = 1;
	long int y = 2;
	long int z;
	long int sum = 2;

	for (z = 0; z <= 4000000;)
	{
	z = x + y;
	if (z % 2 == 0)
	{
	sum += z;
	}
	x = y;
	y = z;
	}
	printf("%ld\n", sum);
	return (0);
}
