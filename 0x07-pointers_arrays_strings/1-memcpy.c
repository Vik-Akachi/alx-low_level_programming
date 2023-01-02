#include "main.h"

/**
 * _memcpy -  a function that copies one memory to the other
 *
 * @dest: final destination of n
 * @src: initial destination of n
 * @n: maximum size of memory to be copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;


	for (a = 0; a <= n; a++)

	{
		a = src[n];
		dest[n] = a;
	}
	return (dest);
}
