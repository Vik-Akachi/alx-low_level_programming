#include "main.h"

/**
 * print_alphabet - to print all lower letters from a to z
 *
 * Return: always 0
 *
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}

	_putchar('\n');

}
