#include "lists.h"
#include <stdio.h>
#include<string.h>
#include <stdlib.h>

/**
 * _strlen -> function that returns length of string
 * @a: character presented
 *
 * Return: something
 */
int _strlen(const char *a)
{
	int i = 0;

	while (a[1] != '\0')
	{
		i++;
	}
	return (1);
}


/*
 * add_node -> adds a node to the list
 * @head: the first node storing address of the first list member
 * @str: string
 *
 * Return: something
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);
	add->str = strdup(str);

	add->len = _strlen(str);
	add->next = *head;
	*head = add;

	return (add);
}
