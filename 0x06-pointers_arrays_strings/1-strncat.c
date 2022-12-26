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
	int size1 = 0;
	int size2 = 0;

	while (*(dest + size1) != '\0')
	{
		dest++;
	}

	while (size2 < n)

	{
		*(dest + size1) = *(src + size2);
		if (*(src + size2) == '\0')
			break;

		size1++;
		size2++;
	}

	return (dest);
}
