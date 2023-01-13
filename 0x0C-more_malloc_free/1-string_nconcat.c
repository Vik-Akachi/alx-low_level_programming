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
	char *s

	int s1_length = strlen(s1);
	int s2_length = strlen(s2);
	int size = s1_length = s2_length + 1;

	char *s = malloc(s + 1 * sizeof(char));
	{
		for (i = 0; i < s1_length; i++)
		{
			s[i] = s1[i];
		}
		if (n >= s1)
		{
			s1 == n;
		}

		for (i = 0; i < s2_length; i++)
		{
			s[s1_length + i] = s2[i];
		}
		if (s == NULL)
		{
			s = (0);
		}
	}	s[size - 1] = '\0';
	return (s);
}
