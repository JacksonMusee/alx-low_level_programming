#include "main.h"

/**
 *wildcmp - Compare 2 strings
 *
 *@s1: string 1
 *@s2: String 2
 *
 *Return: 1 if identical 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
	{
	s1++;
	s2++;
	wildcmp(s1, s2);
	}

	if (*s1 != *s2 && *s2 == 42)
	{
	s2++;
	wildcmp(s1, s2);
	}

	if (*s1 != *s2 && *s2 != 42 && *(s2 - 1) == 42) 
	{
	s1++;
	wildcmp(s1, s2);
	}
	
	if (*s1 == '\0' && *s2 == 42)
	{
	s2++;
	wildcmp(s1, s2);
	}

	if (*s1 == '\0' && *s2 != 42 && *s2 != '\0')
	{
	return (0);
	}

	if (*s1 == '\0' && *s2 == '\0')
	{
	return (1);
	}

	return (wildcmp(s1, s2));
}
