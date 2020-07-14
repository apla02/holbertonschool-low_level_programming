#include "dog.h"
#include <stdio.h>
/**
 * print_dog- function print the structure to dog
 * @d: pointer to structure
 * Return : no return
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = ("nil");
	if (d->owner == NULL)
		d->owner = ("nil");
	printf(" name: %s\n age: %f\n owner: %s\n", d->name, d->age, d->owner);
}
