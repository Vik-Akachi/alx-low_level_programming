#include "main.h"

/**
 * _strpbrk - function locates the first occurrence in a string
 * @s: the string address
 * @accept: the string length to be checked for
 * Return: s
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

		while (*s)
		{
			for (a = 0; accept[a]; a++)
			{
				if (*s == accept[a])
					return (s);
			}
			s++;
		}
	return ('\0');
}
