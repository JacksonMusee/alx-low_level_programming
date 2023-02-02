#include "main.h"

/**
 *
 *
 *
 *
 *
 */

char *go_to_last(char *s)
{

	if (*(s + 1) == '\0')
	{
	return (s);
	}

	s++;

	return (go_to_last(s));
}


int is_palindrome_helper(char *x, char *y)
{
	if (*x != *y)
	{
	return (0);
	}

	if (*x == *y && *(x + 1) == '\0')
	{
	return (1);
	}

	x++;
	y--;

	return (is_palindrome_helper(x, y));
}


int is_palindrome(char *s)
{
	char *end;
	int r;

	if (*s == '\0')
	return (1);

	end = go_to_last(s);
	r = is_palindrome_helper(s, end);

	return(r);
}
