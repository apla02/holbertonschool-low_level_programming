#include "holberton.h"
/**
 * print_rev - writes the string in reverse
 * @s: string
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar (str[i]);
		}
		i++;
	}
	_putchar('\n');
}
