#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - new title for a new dog
 * @name: the dog's giveg name
 * @age: the dog's age
 * @owner: the dog's owner's name
 * Return: 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	typedef (char *new_dog);

	if (new_dog != NULL)
	{
		if (new_dog->name == name)
			printf("Name: %s\n", name);
		else if (new_dog->owner == owner)
			printf("Owner: %s\n", Owner);
	}
	else
		return (NULL);

}
