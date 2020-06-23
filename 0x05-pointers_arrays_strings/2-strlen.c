#include "holberton.h"
/**
 * strlen - function to length a string
 * @s: string
 * Return: i
 */
int _strlen(char *s)
{
	int str;

	str = 0;

 	while (s[str] != '\0')
	++str;
	{
		return str;
	}
}
