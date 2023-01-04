#include "main.h"

/**
 * _strlen_recursion - recursion function that returns string lenght
 * @s: string to be returned
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s > 0)
	{

		i++;
		i += _strlen_recursion(s + 1);

	}
	return (i);
}
