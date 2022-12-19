#include "main.h"
#include <string.h>

/**
 * print_rev - function that prints a string, in reverse
 *
 * @s: the string to be displayed
 *
 */

void print_rev(char *s)
{
	int i, n;

	n = strlen(s);
	for (i = n - 1; i >= 0; i--)
	{
		_putchar (s[1]);
	}
}
