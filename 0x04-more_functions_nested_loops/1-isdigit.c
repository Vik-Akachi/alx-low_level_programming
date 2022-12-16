#include "main.h"

/**
 * _isdigit -> a function that checks for a digit
 *
 * @c: integer to be checked
 *
 * Return: returns to 1 or 0 not success
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	return (1);
	else
		return (0);
}
