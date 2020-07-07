#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
* create_array - function to create an array of characters
* @size: size of variable type int
* @c: number of character of array
* Return: p or NULL
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	p = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		*(p + i) = c;
	}
	return (p);
}
