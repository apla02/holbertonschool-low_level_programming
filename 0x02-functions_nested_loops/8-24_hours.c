#include "holberton.h"
/**
 * jack_bauer - count hour and minutes
 *
 * Return: always 0.
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 00; i <= 23; i++)
	{
		for (j = i; j <= 59; j++)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(':');
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			_putchar('\n');
		}
	}
}
