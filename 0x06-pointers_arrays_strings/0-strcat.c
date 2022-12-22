#include "main.h"

/**
 * *_strcat - unction that concatenates two strings
 *
 * @src: first pointer
 *
 * @dest: final destination for src
 *
 * @i: string length
 *
 * @n: new destination
 *
 * Return: always 0
 */

char *_strcat(char *dest, char *src)
{
	int dest_length = strlen(dest);
	int src_length = strlen(src);
	int size = dest_length + drc_length +1;
	char *n = calloc(size, sizeof(char));

	for (int i = 0; i < dest_length; i++)
		n[i] = dest[i];
	for (int i = 0; i < src_length; i++)
		n[dest_length +i] = src[i];

	n[size -1] = '\0';

	_putchar ('n');
}
