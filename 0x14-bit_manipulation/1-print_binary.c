#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_binary - convert numbers to binary
 * @n: converted number
 *
 * Return: number
 */

void print_binary(unsigned long int n)

{
	int a, count = 0;
	unsigned long int current;

	for (a = 63; a >= 0; a--)
	{
		current = n >> 1;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
