#include "dog.h"

/**
 * init_dog -> initiliazes a structure of the type dog
 * @d: pointer to the structure
 * @name: name of the dog
 * @age: age of dog
 * @owner: owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}
