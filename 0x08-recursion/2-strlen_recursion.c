#include "holberton.h"
/**
* _strlen_recursion -  function length a string
* @s: string to length
* Return: no zero
*/
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
	return ('\0');
	}
	s++;
	i = (_strlen_recursion(s) + 1);
	s--;
	return (i);
}
