#include "main.h"

/**
 * _strspn - a function that returns the number of bytes in a string
 * @s: initial segment
 * @accept: a string
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	int n = 0, a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] != 32)
		{
			for (b = 0; accept[b] != '\0'; b++)
			{
				if (s[a] == accept[b])
					n++;
			}
		}
		else
			return (n);

	}
	return (n);
}
