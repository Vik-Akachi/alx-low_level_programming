#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
* _calloc - function to contiguosly allocate memory in c
* @nmemb: assigened memory
* @size: allocated size
* Return: pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)

{
	unsigned int n;
	char *p;

	if ((nmemb == 0) || (size == 0))
	{
		return (NULL);
	}

	p = malloc(nmemb * size);

	if (p == 0)
	{
		return (NULL);
	}

	for (n = 0; n < (nmemb * size); n++)
		p[n] = 0;
	return (p);

}
