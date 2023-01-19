#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints the operator's name
 * @name: name of user
 * @f: name in capital letters
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
