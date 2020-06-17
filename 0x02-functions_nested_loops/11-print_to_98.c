#include "holberton.h"
#include <stdlib.h>
/**
 * print_to_98 - print all natural numbers from n to 98
 * @n: number
 * void: no content
 */
void print_to_98(int n)
{
	for (n = 0; n >= 98; n++)
	{
		_putchar(n);
		_putchar(',');
		_putchar(' ');
		_putchar('\n');
	}
}
