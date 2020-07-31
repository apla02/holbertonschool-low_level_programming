#include <unistd.h>
#include <stdio.h>
#include "holberton.h"

/**
 * flip_bits - function set a bit at index
 * @n:  a number int
 * @m: m
 * Return: void.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = 0;
	unsigned long int suma = 0;


	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{

		if ((((m ^ n) >> i) & 1) == 1)
			suma = suma + 1;
	}
	return (suma);
}
