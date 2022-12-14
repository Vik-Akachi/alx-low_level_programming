#include "mai.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: fir integer
 * @b: second integer
 * @c: third integer
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a < b && b < c)
	{
		printf (largest = a);
	}

	else if (b > a && a > c)
	{
		printf (largest = b);
	}

	else
	{
		printf (largest =c);
	}

	return (largest);
}
