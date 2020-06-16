#include "holberton.h"
/**
 * print_alphabet_x10 -check alphabet x 10
 * @void: void
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0  ; i <= 10 ; i++)
	{
		for (j = 'a'; j <= 'z' ; j++)
		_putchar (j);
		_putchar ('\n');
	}
}
