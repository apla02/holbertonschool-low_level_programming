#include "holberton.h"
/**
 * _abs - found the abs of an integer.
 * @n: number integer
 * Return:always 0
 */
int _abs(int n)
{
	int i;

	if (n < 0)
	{
		i = n * -1;
		return (i);
	}
	else
	{
		return (n);
	}
}
