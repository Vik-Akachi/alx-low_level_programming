#include "main.h"

/**
 * *_strcpy - copies the value from string a to string b
 *
 * @src: destination 1
 * 
 * @dest: desination 2
 *
 * Return:always 0
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; a < src[a]; a++)
		dest[a] = src[a];
	dest[a] = '\0';
	return (dest);
}
