#include <stdio.h>

/**
 *check_if_prime - See if x is a prme number
 *
 *Return: 1 if x is prime and 0 if x is not prime
 */
int check_if_prime(long int x)
{
	long int i;
	int is_prime;

	for (i = 2; i < x; i++)
	{
	if(x % i == 0)
	{
	is_prime = 0;
	break;
	}
	else
	{
	is_prime = 1;
	}
	}
	return (is_prime);
}

/**
 *man - see code
 *
 *
 */
int main(void)
{
	long int i;
	long int x = 612;
	int i_is_prime;
	long int current_p_factor;
	long int largest_p_factor = 1;

	for (i = 2; i < x; i++)
	{
		i_is_prime = check_if_prime(i);

		if (x % i == 0 && i_is_prime == 1)
		{
		current_p_factor = i;
		}
		if (current_p_factor > largest_p_factor)
		{
		largest_p_factor = current_p_factor;
		}
	}
	printf("%ld\n", largest_p_factor);

	return (0);
}
