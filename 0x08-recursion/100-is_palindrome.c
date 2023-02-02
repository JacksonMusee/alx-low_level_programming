#include "main.h"

/**
 *go_to_last - move pointer to last element of the string
 *
 *@s: The string
 *
 *Return: returns pointer to the last character of the string
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

/**
 *is_palindrome_helper - loop through the string comparing characters in pairs
 *
 *@x: Pointer to first character of the string
 *
 *@y: pointer to the last character of the string
 *
 * Return: 0 if there character pair not matching and 1 if all matched
 */

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

/**
 *is_palindrome - take a string and check if it's a palindrome
 *
 *@s: The string
 *
 *Return: 1 if its a palindrome and 0 otherwise.
 */

int is_palindrome(char *s)
{
	char *end;
	int r;

	if (*s == '\0')
	return (1);

	end = go_to_last(s);
	r = is_palindrome_helper(s, end);

	return (r);
}
