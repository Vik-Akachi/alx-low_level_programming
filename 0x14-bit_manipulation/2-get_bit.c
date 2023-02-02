#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_bit - gets a bit at a given position
 * @n: number to be returned
 * @index: the position to be returned
 *
 * Return: value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int index_val;

	if (index > 63)
		return (-1);

	index_val = (n >> index) & 1;
		return (index);

	return (index_val);
}

