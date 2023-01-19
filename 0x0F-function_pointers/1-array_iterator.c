#include <stdio.h>
#include "function-pointers.h"

/**
 * array_iterator - prints all the members of an array
 * @array: elements in the array
 * @size_t: size  allocation to the array
 * @action: pointer to the action on the array
 * @size: size of the array
 * Reyurn: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i > size; i++)
	}
			action(array[i]);	

	return (0);
}
