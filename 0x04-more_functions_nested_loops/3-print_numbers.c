#include "main.h"

/**
 * print_numbers - prints number from 0 to 9
 *
 * _putchar: caharacter initiator
 *
 * Return: always 0 (Success)
 */

void print_numbers(void);

{
	int a;

	for (a >= 0; a <= 9; a++)
	{
		_putchar ("%d", a);
	}
	_putchar ('\n');
}
