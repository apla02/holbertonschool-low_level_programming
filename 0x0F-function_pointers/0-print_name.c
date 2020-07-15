#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - function ti print a name
 * @name: name to print
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		{
			return;
		}
	(*f)(name);
}
