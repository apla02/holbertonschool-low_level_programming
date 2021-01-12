#include "search_algos.h"
/**
 * linear_search- function that searches for a value in an array
 * of integers using the Linear search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: target to find
 * Return: first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	int index = 0;

	if (!array || !size)
		return (-1);

	for (; index < (int)(size); index++)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
