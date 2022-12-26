/**
 *main - see code
 *
 *
 */

void main(void)
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
	printf("%d", sum);
}
