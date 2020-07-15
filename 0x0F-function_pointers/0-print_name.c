#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - function ti print a name
 * @name: name to print
 * @f: function pointer
 * Return: no value
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
	{
		return;
	}
	(*f)(name);
}
