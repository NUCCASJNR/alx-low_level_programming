#include "dog.h"
/**
 * init_dog - Entry point
 * @d: pointer
 * @name: name of dog
 * @age: dog age
 * @owner: dog owner
 * Return: Always 0
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
