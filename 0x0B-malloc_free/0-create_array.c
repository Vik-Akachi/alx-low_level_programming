#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array - cretaes a string  array
 * @size: size of array
 * @c: character to be stored
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int l;

	if (size == 0)
	{
		return (NULL);
	}
	a = malloc(sizeof(c) * size);

	if (a == NULL)
	{
		return (NULL);
	}
	for (l = 0; l < size; l++)
		a[l] = c;
	return (a);
}
