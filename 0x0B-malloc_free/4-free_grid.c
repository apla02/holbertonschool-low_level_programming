#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
* free_grid - function to free a 2 dimensional array of strings
* @grid: doble puntero de grid, arreglo de dos dimensiones
* @height: puntero de filas del arreglo
* Return:  or NULL
*/
void free_grid(int **grid, int height)
{
	int w;

	for (w = 0; w < height; w++)
		free(grid[w]);
	free(grid);
}
