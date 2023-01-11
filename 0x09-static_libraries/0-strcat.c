#include <stdio.h>
#include "main.h"

/**
 * *_strcat - My concat
 *
 *@dest: easy string
 *@src: source
 *
 *Return: final string
 */

char *_strcat(char *dest, char *src)
{
	char *cp_dest;

	if ((dest == NULL) && (src == NULL))
	return (NULL);

	cp_dest = dest;

	while (*cp_dest != '\0')
	{
	cp_dest++;
	}
	while (*src != '\0')
	{
	*cp_dest = *src;
	cp_dest++;
	src++;
	}
	*cp_dest = ('\0');
	return (dest);
}
