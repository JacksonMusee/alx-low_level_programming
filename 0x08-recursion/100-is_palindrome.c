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

	if (*x != *y)
	{
	return (0);
	}

	if (*x == *y)
	rs = 1;
	
	x = x + 1;
	y = y - 1;

	if (*x != '\0')
	{
	is_palindrome_helper(x, y);
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
