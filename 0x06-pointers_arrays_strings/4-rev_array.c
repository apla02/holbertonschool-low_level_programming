#include "holberton.h"
/**
* reverse_array -  function to reverse an array
* @a: first string
* @n: numbers of elements
* Return: void
*/
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = 0;
	int k;

	while (a[i] != '\0' && i < n)
	{
	i++;
	}
	i = n - 1;
	while (j < i)
	{
	k = a[j];
	a[j] = a[i];
	a[i] = k;
	i--;
	j++;
	}
}
