#include "main.h"

/**
 * *_strcat - function that concatenates two strings
 *
 * @src: first pointer
 *
 * @dest: final destination for src
 *
 * Return: always 0
 */

char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0\)
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
