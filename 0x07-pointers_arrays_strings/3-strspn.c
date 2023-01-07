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
	char *accept_origi = accept;

	while (*s != '\0')
	{
		while (*s != *accept && *accept != '\0')
		{
		accept++;
		}
		if (*accept == *s)
		{
		len++;
		}
		else
		{
		break;
		}
		accept = accept_origi;
	s++;
	}
	return (len);
}
