#include "main.h"

/**
 * _strchr - a function that points to a location
 * @c: the occuring character
 * @s: the given string
 * Return: c
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return ('\0');
}

