#include "main.h"

/**
 *is_prime_number - check if a number is prime
 *
 *@n: the number
 *
 *Return: 1 if prime 0 if not prime
 */

int is_prime_number(int n)
{
	const int num = n;

	n--;
	if (num < 2 || num % n == 0)
	{
	return (0);
	}

	if (n > 1)
	{
	is_prime_number (n);
	}

	return (1);
}
