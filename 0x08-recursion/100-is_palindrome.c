#include "main.h"

/**
 * check_p - check for a palindrome
 * @s: string pointer
 * @i: the given string
 * Return: 1 if check_p returns a palindrome or 0 otherwise
 */

int check_p(char *s)
{
	int i;

	if (i == '\0')
		return (0);
	if (s[i] == s[i - 1])
		return (1);
	else
		return (0);
			s++;
}

/**
 * is_palindrome - checking for palindrome strings
 * @s: address of string
 * @i: string being verified
 * Return: 1 if a string is palindrome or 0 otherwise
 */

int is_palindrome(char *s)
{
	return (is_palindrome(*s, s + 1));
		return (1);
}
