#include "main.h"

/**
 * print_line -> printing straight lines
 *
 * @n: integer to be used
 *
 * Return: Always 0
 *
 */

void print_line(int n)
{
	int a;

	if (n <= 0)
		putchar ('\n');
	for (a = 0; a <= n; a++)
		putchar ('_');
	putchar ('\n');
}
