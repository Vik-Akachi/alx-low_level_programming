#include "main.h"

/**
 * _print_rev_recursion - function that prints strings in reverse
 * @s: string to be reversed
 * Return: 0
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}
