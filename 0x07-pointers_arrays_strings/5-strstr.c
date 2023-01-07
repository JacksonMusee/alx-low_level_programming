#include "main.h"
#include <stdio.h>

/**
 *_strstr - Get first occurrennce of a substring
 *@haystack: Man string
 *@needle: Substring
 *
 *Return: Pointer to first occurrence of sub string
 */

char *_strstr(char *haystack, char *needle)
{
	char *first_occ = NULL;
	char *needle_origi = needle;

	if (needle[0] == '\0')
	{
	return (haystack);
	}

	while (*haystack != '\0')
	{
		while (*haystack != *needle)
		{
		haystack++;
		}
		if (*haystack == *needle)
		{
		first_occ = haystack;

		while (*haystack == *needle && *haystack != '\0' && *needle != '\0')
		{
		haystack++;
		needle++;
		}
		if (*needle == '\0')
		{
		break;
		}
		else
		{
		haystack = first_occ;
		needle = needle_origi;
		}
		}
		haystack++;
	}
	return (first_occ);
}
