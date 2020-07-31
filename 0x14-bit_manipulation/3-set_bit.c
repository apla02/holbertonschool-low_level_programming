#include <stdio.h>
#include "holberton.h"
/**
 * set_bit - function set a bit at index
 * @n:  a number int
 * @index: index
 * Return: void.
 */
int set_bit(unsigned long int *n, unsigned int index)
{

	if (index < (sizeof(unsigned long int) * 8) && *n)
	{
		*n |= (1 << index);
		return (1);
	}
	else
		return (-1);
}
