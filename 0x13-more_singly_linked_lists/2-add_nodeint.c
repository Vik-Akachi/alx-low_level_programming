#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - function adds a new node to tyhe string
 * @head: the holder of the address to the new node
 * @n: interger stored data stored in new node
 *
 * Return: something
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	if (head == NULL)
		return (NULL);
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
