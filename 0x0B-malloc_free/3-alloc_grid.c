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
	int **grid;
	int w;

	if (width == 0 && height == 0)
	{
		return (NULL);
	}

	grid = (int **)malloc(width * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}

	for (w = 0; w < width; w++)
	{
		grid[w] = (int *)malloc(height * sizeof(int));
	}
	return (0);
}
