#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - new title for a new dog
 * @name: the dog's giveg name
 * @age: the dog's age
 * @owner: the dog's owner's name
 * Return: 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	unsigned int nm, ag, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t))
	if (dog == NULL)
		return (NULL);
	for (nm = 0; name[nm]; nm++)
		nm++;
	dog->name =malloc(nm * sizeof(char));
	if (dog->name == NULL)

	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < nm: i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (ag = 0; owner[ag]; ag++)

	ag++;
	dog->owner = malloc(ag * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < ag; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
