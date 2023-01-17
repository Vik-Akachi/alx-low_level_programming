#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints the details of a dog
 * @d: pointer to the address of dog
 *
 */

void print_dog(struct dog *d)
{

	if (d != NULL)
	{
	if (d->name != NULL)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)\n");
	printf("Age: %.6f\n", d->age);
	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);

	}
}
