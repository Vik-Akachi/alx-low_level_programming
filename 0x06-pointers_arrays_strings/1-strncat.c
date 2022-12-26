#include "main.h"
#include <string.h>
/**
 * _strncat - concatenate two strings
 *
 * @dest: final string destination
 *
 * @src: appended string
 *
 * @n: string length
 *
 * strncat: concartenating function
 *
 * Return: always 0
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	for (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0'; src <= n)

	{
		src++;
	}
	strncat(dest = n);

	return (n);
}
