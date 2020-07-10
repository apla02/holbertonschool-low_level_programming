#include <stdlib.h>
#include "holberton.h"
/**
* _realloc - function to reallocate memory using malloc
* @ptr: array
* @old_size: old size of array
* @new_size: new size to reallocate
* Return: ptr
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	ptr = (void *) malloc(old_size);
	if (ptr == NULL && old_size == new_size)
	{
		return (NULL);
	}
	return (ptr);
	if (ptr == NULL || new_size > old_size)
	{
		free(ptr);
	}
	ptr = (void *) malloc(new_size);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
		return (ptr);
}

