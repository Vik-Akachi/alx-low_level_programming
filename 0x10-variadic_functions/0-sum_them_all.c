#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - a variadic function to sum up all integers in an array
 * @n: the number of arrays being summed up
 *
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list(ptr);

	if (n == 0)
		return (0);

	va_start(ptr, n);
	{
		for (i = 0; i < n; i++)
			sum = sum + va_arg(ptr, const unsigned int);

		va_end(ptr);
	}
	return (sum);
}
