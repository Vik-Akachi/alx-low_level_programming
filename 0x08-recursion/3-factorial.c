#include "main.h"

/**
 * factorial - function that finds the factoral of a given number
 * @n: the giving number
 * Return: 0
 */

int factorial(int n)
{

	int i = 1;

	if (n > 0)

	{
		n = ((n - i) * n);
				n--;
		_putchar(factorial(n));
	}
	return (0);
}
