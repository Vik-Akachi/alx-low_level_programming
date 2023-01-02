#include "main.h"

/**
 * _memset - a funtion that fills and address with aconstant pointer
 *
 * @n: constant size
 * @s: pointer variable
 * @b: value of *s
 * Return: s
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	for  (c = 0; c < n; c++)

	{
		s[c] = b;
	}
	return (s);
}
