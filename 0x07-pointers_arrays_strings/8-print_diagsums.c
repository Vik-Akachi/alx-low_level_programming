#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that sums up two diagonal ariables
 * @a: pointer variable
 * @size: size of the given matrix
 * Return: alway 0
 */

void print_diagsums(int *a, int size)
{
	int i, j, p, c = 0, r = 0;

	for (i = 0; i < size; i++)

	{
		p = (i * size) + i;
		c += *(a + p);
	}
	for (j = 0; j < size; j++)
	{
		p = (j * size) + (size - c - j);
		r += *(a + p);
	}
	printf("%i, %i\n", c, r);
}
