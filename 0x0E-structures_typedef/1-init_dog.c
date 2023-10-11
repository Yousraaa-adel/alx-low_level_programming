#include "dog.h"

/**
 * init_dog - A function that initialize a variable of type struct dog
 * @d: array
 * @name: its name
 * @age: its age
 * @owner: its owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
