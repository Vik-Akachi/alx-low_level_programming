#include "main.h"

/**
 * factorial - function that finds the factoral of a given number
 * @n: the giving number
 * Return: 0
 */

int factorial(int n)
{

	int i = 1;
	int j;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		j = ((n - i) * n);
	}
	return (j);
}
