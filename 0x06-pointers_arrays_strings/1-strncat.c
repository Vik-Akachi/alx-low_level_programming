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
	int size1;
	int size2;

	for (size1 = 0; dest[size1] != '\0'; size1++)
	{
		continue;
	}

	for (size2 = 0; src[size2] != '\0' && size2 < n; size2++)

	{
		dest[size1 + size2] = src[size2];
	}
	dest[size1 + size2] = '\0';

	return (dest);
}
