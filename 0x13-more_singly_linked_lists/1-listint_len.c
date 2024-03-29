#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the number of elements in a list
 * @h: holder of thge address of the firsty node
 *
 * Return: number
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
			count++;
	}
	return (count);
}
