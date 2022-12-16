#include "main.h"

/**
 * print_numbers -> Writes a function that prints the numbers, from 0 to 9
 *
 * @ _putchar: returns no argument
 *
 * return: always 0
 */

void print_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
		_putchar (a + '0');
	_putchar ('\n');		
}
