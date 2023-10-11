#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - new dog
 * @name: name's dog
 * @age: age's dog
 * @owner: owner's dog
 * Return: newdog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, j = 0, l;
	dog_t *dogee;

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	dogee = malloc(sizeof(dog_t));
	if (dogee == NULL)
	{
		free(dogee);
		return (NULL);
	}
	dogee->name = malloc(i * sizeof(dogee->name));
	if (dogee->name == NULL)
	{
		free(dogee->name);
		free(dogee);
		return (NULL);
	}
	for (l = 0; l <= i; l++)
		dogee->name[l] = name[l];
	dogee->age = age;
	dogee->owner = malloc(j * sizeof(dogee->owner));
	if (dogee->owner == NULL)
	{
		free(dogee->owner);
		free(dogee->name);
		free(dogee);
		return (NULL);
	}
	for (l = 0; l <= j; l++)
		dogee->owner[l] = owner[l];
	return (dogee);
}
