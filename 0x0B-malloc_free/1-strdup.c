#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
* _strdup - function to create an array of characters
* @str: size of variable type int
* Return: p or NULL
*/
char *_strdup(char *str)
{
	unsigned int i, j;
	char *dest;

	if (str == NULL)
	{
	return (NULL);
	}
	for (i = 0; *(str + i); i++)

	dest = malloc(sizeof(char) * (i + 1));

	if (dest == NULL)
	{
	return (NULL);
	}

	for (j = 0; j <= i ; j++)
	{
		*(dest + j) = *(str + j);
	}
	return (dest);
}
