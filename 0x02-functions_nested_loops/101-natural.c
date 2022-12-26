#include <stdio.h>
/**
 *main - see code
 *
 *Return: zero
 */

int main(void)
{
	int sum;
	int i = 1;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
		sum += i;
		}
		i++;
	}
	printf("%d\n", sum);

	return (0);
}
