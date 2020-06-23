#include "holberton.h"
/**
 * swap_int - function to reset n to 98
 * @a: first integer
 * @b: second integer
 * void: no content
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}
