#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * array_iterator - arguments of function
 * @array: array of function
 * @size: size of array
 * @action: pointer
 * Return: no value
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array && size && action)
{
size_t i;
for (i = 0; i < size; i++)
	action(array[i]);
}
}
