#include <stdio.h>
#include "main.h"

/**
 * _isalpha - check if it's alphabet
 *
 * @c : The letter to be checked eg 'H'
 *
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
