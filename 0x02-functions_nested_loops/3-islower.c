#include "holberton.h"
/**
 * _islower - found lowcase of a letter.
 * @c: letter
 * Return:always 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
