#include "main.h"

/**
 *_strpbrk - See code
 *@s: String one
 *@accept: Strng two
 *
 * Return: Pointer to first occurrence of a character in accept in s
 */

char *_strpbrk(char *s, char *accept)
{
	char *r = NULL;
	char *s_origi = s;

	while (*accept != '\0')
	{
		while (*accept != *s && *s != '\0')
		{
		s++;
		}
	if (*accept == *s)
	{
	r = s;
	}
	s = s_origi;
	accept++;
	}
	return (r);
}
