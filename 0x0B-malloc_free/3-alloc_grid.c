#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
* alloc_grid - function to concatenate 2 strings
* @width: ancho
* @height: largo
* Return:  or NULL
*/
int **alloc_grid(int width, int height)
{
	int **m;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	m = malloc(height * sizeof(int *));
	if (m == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		m[i] = malloc(width * sizeof(int));
		if (m[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(m[j]);
			free(m);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			m[i][j] = 0;
	}
	return (m);
}
