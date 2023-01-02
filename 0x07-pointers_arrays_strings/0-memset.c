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
	int n = 0;

	for  (; n != '\0')
		n++;
	{
		char * const s = &n;
	}
	&n = b;
	s = &n;
	return (s);
}
