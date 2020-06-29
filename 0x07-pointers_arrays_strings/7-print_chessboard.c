#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
* _strstr -  search a string for a set of bytes
* @chessboard:function for print a chessboard
* @a: pointer to chess
* Return: void
*/
void print_chessboard(char (*a)[8])
{
	int f, c;

	for (f = 0; f < 8; f++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(a[f][c]);
		}
		_putchar('\n');
	}
}
