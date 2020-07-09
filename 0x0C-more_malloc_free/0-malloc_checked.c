#include <stdlib.h>
#include "holberton.h"
/**
* malloc_checked - function to allocate memory using malloc
* @b : an integer parameter
* Return: ptr
*/
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = (void *) malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
