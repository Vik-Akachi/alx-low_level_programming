#include "main.h"

/**
 * _strlen_recursion - recursion function that returns string lenght
 * @s: string to be returned
 * Return: 0
 */

int _strlen_recursion(char *s)
{

	if (*s > 0)
	{
		s = s + 1;
			s++;
		_strlen_recursion(s);
	}
	else
	{
		_putchar(*s);
	}
}
