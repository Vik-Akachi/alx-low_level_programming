#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - function adds a new node at the end of the list
 * @head: holds address of the first node
 * @n: integers stored in nodes
 * Return: new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (newn == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (new);
}
