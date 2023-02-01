#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - adds all the data in every node
 * @head: holds address of the first node
 *
 * Return: add all data
 */

int sum_listint(listint_t *head)
{
	int addition = 0;

	while (head != NULL)
	{
		addition += head->n;
		head = head->next;
	}
	return (addition);
}

