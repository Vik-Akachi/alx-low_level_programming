#include "main.h"

/**
 * _abs - Writes a function that computes the absolute value of an integer
 *@n: parameter
 *Return: returns absolute value of a number
 */

int _abs(int n)

{
	if (n < 0)
		n = -n;
	return (n);
}

