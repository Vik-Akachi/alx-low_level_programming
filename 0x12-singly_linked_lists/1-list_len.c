#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * list_len -> displays the count of the string characters
 * @h: pointer to the address of string
 *
 * Return: somthing
 */

size_t list_len(const list_t *h)
{
	int count = 0;


	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}

