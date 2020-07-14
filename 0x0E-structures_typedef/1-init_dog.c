#include "dog.h"
/**
 * init_dog- function to initialize the structur
 * @d: pointer to ponting to structur
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return : no return
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != '\0')
	{
		(*d).name = name;
		d->age = age;
		d->owner = owner;
	}
}
