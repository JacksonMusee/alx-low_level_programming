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
	int len = 0;
	
	if (!s)
	{
	return;
	}
	
	
	if (*s == '\0')
	{
	return (1);
	}
	else
	{
	len++;
	s++;
	}
	return (len + _strlen_recursion(s));
}
