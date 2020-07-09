#include <stdlib.h>
#include "holberton.h"
/**
* array_range - function to allocate memory to an array range of integers
* @min: min value of the elements of array
* @max: size of byte each elementmax value oof the elements of array
* Return: ptr
*/
int *array_range(int min, int max)
{
	int *a;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	a = malloc((max - min + 1) * sizeof(int));
	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (max - min + 1); i++)
		a[i] = min + i;
	return (a);
}
