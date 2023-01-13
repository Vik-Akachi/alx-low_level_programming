#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - function to concartenate two strings
 * @n: given string length
 * @s1: first string address
 * @s2: secong string length
 * return: s 
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i;

	int s1_length = strlen(s1);
	int s2_length = strlen(s2);
	int size = s1_length = s2_length + 1;

	char *s = malloc(s, sizeof(char));
	
	for (i = 0; i < s1_length; i++)
	{
		s[i] = s1[i];
	}
	if (n >= s1)
		_putchar(s2);

	for (i = 0; i < s2_length; i++)
	{
		s[s1_length + i] = s2[i];
	}
	s[size - 1] = '\0';
	return (s);
}
