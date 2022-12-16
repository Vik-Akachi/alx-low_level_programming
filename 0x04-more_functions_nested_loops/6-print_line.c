#include "main.h"

/**
 * print_line - writes and function that prints a straight line
 *
 * @n: integer paramenter
 *
 * _putcher: parameter tester
 *
 * Return: returns a straight line
 */

void print_line(int n)
{
	int a;

	if (n <= 0)
		_putchar('\n');

	for (a = 0; a <= n; a++)
		_putchar ('_');
	_putchar ('\n');
}
