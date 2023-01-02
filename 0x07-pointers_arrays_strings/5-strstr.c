#include "main.h"

/**
 * _strstr - a function that finds the first occurance of the substring
 * @haystack: the initial pointer array
 * @needle: string to be located
 * Return: a
 */

char *_strstr(char *haystack, char *needle)
{
	int a, b;

	for (a = 0; needle[a]; a++)
	{
		if (haystack[b] == needle[a])
			return (a);
		{
			else
				return ('\0');
		}
	return ('\0');
	}
}
