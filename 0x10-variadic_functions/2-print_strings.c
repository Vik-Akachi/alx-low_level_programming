#include <stdio.h>
#include  <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: space between strings
 * @n: number of characters in the string
 *
 * Return:
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

	unsigned int i;

	va_list(ptr);

	va_start(ptr, n);

	if (separator != NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		if (ptr[i] == NULL)
			printf("nil", va_arg(ptr, const unsigned int));
	}
	printf("%s", va_arg(ptr, char));
	{
		printf("\n");
	}
}
