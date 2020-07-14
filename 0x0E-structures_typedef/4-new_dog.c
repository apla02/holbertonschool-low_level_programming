#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - function print the structure to dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: null or diferent
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	new_dog = malloc(sizeof(dog_t))
	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_dog);
}
