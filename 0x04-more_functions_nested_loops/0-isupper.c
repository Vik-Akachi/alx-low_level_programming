#include "main.h"

/**
 * _isupper - this is a function that checks for uppercase character
 *
 * @c: an integer parameter
 *
 * Return: something but success
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
