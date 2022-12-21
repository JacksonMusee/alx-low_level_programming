#include <stdio.h>
#include "main.h"

/**
 * *_strncat - See code
 *
 *@dest: arg
 *@src: arg
 *@n: max
 *
 * Return: return final string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *cp_dest;
	int appd_cnt = 0;

	if ((dest == NULL) && (src == NULL))
	return (NULL);

	cp_dest = dest;

	while (*cp_dest != '\0')
	{
	cp_dest++;
	}
	while ((*src != '\0') && (appd_cnt <= n))
	{
	*cp_dest = *src;
	cp_dest++;
	src++;
	appd_cnt++;
	}
	*cp_dest = '\0';
	return (dest);
}
