#include <stdio.h>
#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - index of array to be checked
 * @array: array of characters
 * @size: size of the arrays
 * @cmp: for comaring characters
 *
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, n;

	if (array[i] != n)
		return (-1);
	else if (size <= 0)
		return (-1);
	{
	i = 0;
	while (i < size)
		if (array[i] == n)
			return (i);
	}
	i++;
	return (0);
}

