#include "holberton.h"
/**
 * jack_bauer - count hours and minutes
 *
 * Return: always 0.
 */
void jack_bauer(void)
{
	int i;
	int j;
	char del = ':';

	for (i = 00; i <= 23; i++)
	{
		for (j = 00 ; j <= 59; j++)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(del);
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			_putchar('\n');
		}
	}
}
