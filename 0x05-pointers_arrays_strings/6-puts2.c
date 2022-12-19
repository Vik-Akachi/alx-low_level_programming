#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character of a string,
 * starting with the first character
 *
 * @@str: string paramenter
 *
 * Return: always 0
 */

void puts2(char *str)
{
	int h, i;

	h = strh (str);
	for (i = 0; i < h; i += 2)
		_putchar (str[i]);
	_putchar ('\n');
}
