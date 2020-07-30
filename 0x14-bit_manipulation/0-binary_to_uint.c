#include <stdio.h>
#include "holberton.h"
/**
 * binary_to_uint - function to convert binary to unsigned int
 * @b:  is pointing to a string of 0 and 1 chars
 * Return: numero.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int numero = 0, i = 0;

	if (b == NULL)
		return (0);

	for (i = 0; *(b + i); i++)
	{
		if (*(b + i) != '0' && *(b + i) != '1')
			return (0);

		numero <<= 1;

		if (*(b + i) == '1')
			numero ^= 1;
	}
	return (numero);
}
