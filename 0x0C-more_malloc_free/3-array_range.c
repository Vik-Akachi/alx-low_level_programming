#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * array_range - allocates and prints a range of arrays
 * @min: smallest number
 * @max: large
 * Return: i
 */

int *array_range(int min, int max)
{
	int *i;
	int a, size;
	
	if (min > max)
		return (NULL);

	size = max - min + 1;

	i = malloc(sizeof(int) * size);

	if (i == NULL)
		return (NULL);

	for (a = 0; min <= max; a++)
		i[a] = min++;
	return (i);
}
