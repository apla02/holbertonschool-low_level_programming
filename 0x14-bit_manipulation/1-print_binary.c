#include <stdio.h>
#include "holberton.h"
/**
 * print_binary - function to convert binary to unsigned int
 * @n:  a number int
 * Return: void.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
