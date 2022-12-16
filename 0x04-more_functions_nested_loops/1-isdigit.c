#include "main.h"

/**
 * _isdigit - function that checks for digits
 *
 * @c: integer to be checked
 *
 * Returns: 1 or 0 depending on the condition
 */

int _isdigit(int c)

{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
