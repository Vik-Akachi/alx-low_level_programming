#include "main.h"

/**
 * _pow_recursion - recursion function that prints the  power of an integer
 * @x: integer tested
 * @y: power of the integer
 * Return: 0
 */

int _pow_recursion(int x, int y)
{


	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
		return (x * _pow_recursion(x, y - 1));
	else
	{
		return (1);
	}

}
