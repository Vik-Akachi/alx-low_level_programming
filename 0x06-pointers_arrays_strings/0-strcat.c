#include "main.h"

/*
 * _strcat - function to append to strings
 *
 * @dest: final destination
 *
 * @src: initiating file
 *
 * Return: alwasy 0
 */

char *_strcat(char *dest, char *src)

{
	char *i = dest;

	while (*dest != '\0')
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

	return (i);
}
