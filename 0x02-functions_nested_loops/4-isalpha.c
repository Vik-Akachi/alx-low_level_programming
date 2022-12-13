#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character.
 *
 * @c: this is the character to be checked.
 *
 * Return: returns 1 or 0 depending on the condition
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
