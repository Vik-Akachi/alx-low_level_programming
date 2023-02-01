#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - function add a new node to a list
 * @head: pointer to the new node
 *
 * Return: new node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	*head = temp->next;
	n = temp->n;
	free(temp);
	return (n);
}
