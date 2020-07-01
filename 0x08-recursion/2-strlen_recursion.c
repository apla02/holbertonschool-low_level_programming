#include "holberton.h"
/**
* _strlen_recursion -  function length a string
* @s: string to length
* Return: no zero
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
	return (0);
	}
	s++;
	_strlen_recursion(s);
	return (_strlen_recursion(s) + 1);
}
