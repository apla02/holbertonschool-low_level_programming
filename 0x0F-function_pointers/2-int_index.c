#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * int_index - function of index of array
 * @array: array of function
 * @size: size of array
 * @cmp: search an integer
 * Return: no value
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size < 0)
			return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
