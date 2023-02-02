#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_uint - converts binary digits to decimal digits
 * @b: pointer to string of numbers
 *
 * Return: number on success
 */

unsigned int binary_to_uint(const char *b)
{

	int str;
	unsigned int dec_num = 0;

	if (!b)
		return (0);

	for (str = 0; b[str]; str++)
	{
		if (b[str] < '0' || b[str] > '1')
			return (0);
		dec_num = 2 * dec_num + (b[str] - '0');
	}
	return (dec_num);
}
