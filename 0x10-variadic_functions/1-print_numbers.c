#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - will print given numbers
 * @n: the number of integers
 * @separator: space between numbers
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;


	va_list(ptr);

	va_start(ptr, n);

	if (separator == NULL)
		separator = "";


	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(ptr, int));
			if (i < n - 1)
				printf("%s", separator);
		}
		printf("\n");

		va_end(ptr);

	}
}
