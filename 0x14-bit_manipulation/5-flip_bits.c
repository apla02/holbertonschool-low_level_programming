#include <unistd.h>
#include <stdio.h>
#include "holberton.h"
/**
 * print_binary- function print a binary
 * @n:  a number int
 * Return: void.
 */
void print_binary(unsigned long int n)
{
	unsigned long int
	if (n > 1)
		print_binary(n >> 1);

	binary = ((n & 1) + '0');

}
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * flip_bits - function set a bit at index
 * @n:  a number int
 * @m: m
 * Return: void.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit_n = 0;

	print_binary(n);
	print_binary(m);

	bit_n = m ^ n;

	return (bit_n);
}
