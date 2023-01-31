#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - frees the memory when the program is done executing
 * @head: holds the pointer to the first node
 *
 * Return: 0
 */

void free_listint(listint_t *head)
{
	listint_t *next;

	if (head != NULL)
	{
		next = head->next;
		free(next);
		head = next;
	}
}
