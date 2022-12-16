#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 *
 * _putchar: parameter tester
 *
 * @n: tested parameter
 *
 * Return:returns to 0
 */

void print_diagonal(int n)

{
	int b, i;

	if (n <= 0)
		_putchar ('\n');
	else
	{
		for (b = 0; b <= n; b++)
		{
			for (i = 0; i <= b; i++)
				_putchar (' ');
			_putchar ("\");
			_putchar ('\n');
		}
		_putchar ('\n');
	}
}
