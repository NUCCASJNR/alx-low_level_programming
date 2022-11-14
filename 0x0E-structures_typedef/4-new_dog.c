#include "dog.h"
#include <stdlib.h>

/**
 * _string - function holding the ptr
 * @point: pointer holding the values
 * Return: Always 0
 */
char *_string(char *point)
{
	char *ptr;
	int i;
	int len = 0;

	if (point == NULL)
	{
		return (NULL);
	}
	while (point[len] != '\0')
	{
		len++;
	}
	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; point[i] != '\0'; i++)
	{
		ptr[i] = point[i];
	}
	ptr[i] = '\0';
	return (ptr);
}

/**
 * new_dog - Funcion to create a new dog
 * @name: initial name of dog
 * @age: initial dog age
 * @owner: initial dog owner
 * Return: Always 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *dog_name, *dog_owner;
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	dog_name = _string(name);
	if (dog_name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->name = dog_name;

	dog->age = age;

	dog_owner = _string(owner);
	if (dog_owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->owner = dog_owner;
	return (dog);
}
