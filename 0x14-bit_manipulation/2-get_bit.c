#include <stdio.h>
#include "holberton.h"
/**
 * get_bit - function to cget a bit from a  index
 * @n:  a number int
 * @index: index
 * Return: void.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	if (index < (sizeof(unsigned long int) * 8))
	{
		for (i = 0; i < index; i++)
			n >>= 1;
		return (n & 1);
	}
	else
		return (-1);
}
