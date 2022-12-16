#include "main.h"

/**
 * print_numbers - prints number from 0 to 9
 *
 * _putchar: caharacter initiator
 *
 * @: for 0-9
 *
 * Return: always 0 (Success)
 */

void print_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		_putchar (a + '0');
	}
	_putchar ('\n');
}
