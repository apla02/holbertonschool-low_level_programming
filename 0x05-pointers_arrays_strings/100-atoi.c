#include "holberton.h"
#include <stdio.h>
/**
 * _atoi - fun to convert string to integer
 * @s: string
 * Return: no zero
 *
 */
int _atoi(char *s)
{
	int sign = 0;
	int n;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			sign++;
		}
		else if (*s >= 0 && *s <= 9)
		{
		n = (n * 10) + (*s - '0');
		}
		else if (r > 0)
		{
			break;
		}
		s++;
	}
	if (sign % 2 != 0)
	{
		return (n * (-1));
		return (n);
	}
}
