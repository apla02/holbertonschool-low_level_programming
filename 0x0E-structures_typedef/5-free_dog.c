#include "holberton.h"
/**
* free_dog - function
* @d : pointer to estructure
*/
void free_dog(dog_t *d)
{
	if (d == NULL)
	free(d);
	return (NULL);
}
