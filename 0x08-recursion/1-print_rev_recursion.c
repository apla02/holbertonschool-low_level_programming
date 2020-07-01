#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _print_rev_recursion - function print in reverse a string
* @s: string to print
* Return: no zero
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
	return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar (*s);
}
