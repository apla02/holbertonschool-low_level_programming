#include "holberton.h"
/**
* _pow_recursion -  function to power of 2 integers
* @x: base
* @y: exponent
* Return: no zero
*/
int _pow_recursion(int x, int y)
{
	int product;

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	y--;
	product = (x * _pow_recursion(x, y));
	return (product);
}
