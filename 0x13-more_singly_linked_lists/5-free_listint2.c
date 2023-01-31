#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_listint2 - function that frees the list
 * @head: head of the list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		next = (*head)->next;
		free(head);
		*head = next;
	}
}
