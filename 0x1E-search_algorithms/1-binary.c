#include "search_algos.h"
/**
 * binary_search - function that searches for a value in a sorted
 * array of integers using the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in the array
 * @value: value to found in
 * Return: index of value if success or -1 if fails
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = (int)(size) - 1;

	if (!array || !size)
		return (-1);

	while (left <= right)
	{
		int index_mid = ((left + right) / 2);

		print_array(array, left, right);

		if (array[index_mid] < value)
			left = index_mid + 1;
		else if (array[index_mid] > value)
			right = index_mid - 1;
		else
			return (index_mid);
	}
	return (-1);
}

/**
 * print_array - print an array of integers separated by a comma and space.
 * @array: List of integer numbers sorted in an ascending order.
 * @left: The left end of the array.
 * @right: The right end of the array.
 */
void print_array(int *array, int left, int right)
{
	printf("Searching in array: ");
	while (left < right)
	{
		printf("%d, ", array[left]);
		left++;
	}
	printf("%d\n", array[left]);
}
