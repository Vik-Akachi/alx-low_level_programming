#include "main.h"

/*
 * _strncpy - entry point
 *
 *
 *
 * @dest: final destination
 *
 * @src: to be copied
 *
 * @n: string length
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)

{
	int s1;

	for (s1 = 0; s1 < n && *(src + s1); s1++)
	{
		*(dest + s1) = *(src + s1);
	}
	for (; s1 < n; s1++)
	{
		*(dest + s1) = '\0';
	}

	return (dest);
}
