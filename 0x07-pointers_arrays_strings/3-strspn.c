#include "main.h"

/**
 *_strspn - Compare strings
 *@s: String
 *@accept: string two
 *
 * Return: length of matching initial string
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int i;

	while (*s == *accept)
	{
	len++;
	s++;
	accept++;
	}
	return (len);
}
