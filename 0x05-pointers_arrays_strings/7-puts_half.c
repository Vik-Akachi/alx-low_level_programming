#include "main.h"

/**
 * puts_half - a function that prints half of a string
 *
 * _putchar: character diplay function
 *
 * @str: string function
 *
 * Return: always 0
 */

void puts_half(char *str)
{
	int color = 0, n;

	while (str[color] != '\0')
		color++;
	if (color + 1 % 2 != '0')
		n = (color - 1) / 2;
	else
		n = (color / 2);
	n++;

	for (color = n; str[color] != '\0'; color++)
	_putchar (str[color]);
	_putchar ('\n');
}
