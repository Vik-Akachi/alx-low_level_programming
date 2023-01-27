#include "list.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * print_list -> prints the given list of data
 * @size_t: memory size allocated to the pointer
 *
 * Return: something 
 */


size_t print_list(const list_t *h)
{
	int count = 0;
	
	while (h)
	{
		if (h->str == NULL)
		{
			print("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		count++;
		h = h->next;
	}
	return (count);
}
