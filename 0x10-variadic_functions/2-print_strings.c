#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - print strings
 * @n: number of arguments
 * @separator: separator
 * Return: always zero
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list print_s;

	if (separator != NULL)
	{
		va_start(print_s, n);
		for (i = 0; i < n; i++)
		{
		printf("%s", va_arg(print_s, char *));
		if (i != n - 1)
		printf("%s", separator);
		}
	printf("\n");
	va_end(print_s);
	}
}
