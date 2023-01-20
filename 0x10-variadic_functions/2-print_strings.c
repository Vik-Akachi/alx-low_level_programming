#include <stdio.h>
#include <stdlib.h>
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
	char *str;

	va_list(ptr);
	va_start(ptr, n);

		if (separator == NULL)
			separator = "";

		for (i = 0; i < n; i++)
		{
			str = va_arg(ptr, char*);

			if (str == NULL)
			str = "(nil)";
				printf("%s", str);
		if (i < n - 1)
			printf("%s", separator);
		}

	printf("\n");
	va_end(ptr);
}
