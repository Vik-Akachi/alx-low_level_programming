#include "main.h"

/**
 * print_numbers -> Writes a function that prints the numbers, from 0 to 9
 *
 * @ putchar: returns no argument
 *
 * return: always 0
 */

void print_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
		putchar (a + '0');
	putchar ('\n');
		
}
