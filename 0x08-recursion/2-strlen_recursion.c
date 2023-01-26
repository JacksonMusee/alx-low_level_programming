#include "main.h"

/**
 *_strlen_recursion - see code
 *
 *@s: Strng
 *
 *Return: Length
 */

int _strlen_recursion(char *s)
{
	
	if (!s)
	{
	return (0);
	}
	
	
	if (*s == '\0')
	return (1);
	
	s++;

	return (1 + _strlen_recursion(s));
}
