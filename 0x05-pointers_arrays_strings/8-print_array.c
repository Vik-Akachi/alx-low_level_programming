#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array
 *
 * Return: always 0
 */

void print_array(int *a, int n)
{
	int o;

	for (o = 0; o < n; o++)
		if  (o != n - 1)
		printf("%d, ", a[o]);
		else
			printf("%d", a[o]);
	printf("\n");
}
