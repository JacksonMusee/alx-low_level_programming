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

	if (*s != '\0')
	{
	s++;
	go_to_last(s);
	}

	return (s - 1);
}


int is_palindrome_helper(char *x, char *y)
{
	int rs;

	if (*x == *y)
	return (1);

	if (*x != *y)
	return (0);
	
	x++;
	y--;

	if (*x != '\0')
	{
	rs = is_palindrome_helper(x, y);
	}

	return (rs);
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
