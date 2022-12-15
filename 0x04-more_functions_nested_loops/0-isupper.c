#include "main.h"

/**
 * _isupper -> this function checks for uppercase character
 *
 * @c: character to be checked
 *
 * Return: either 1 or 0 depending on the condition not success
 */

int _isupper(int c)

{

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
