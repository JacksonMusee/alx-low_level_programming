#include "main.h"

/**
 *_isdigit - Check if digit
 *@c: Character to check
 *
 *Return: 1 if its a dgt and 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
