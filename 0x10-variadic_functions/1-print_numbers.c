#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - print arguments
 * @n: number of arguments
 * @separator: separator
 * Return: always zero
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list operacion;

	va_start(operacion, n);
	for (i = 0; i < n; i++)
	{
	printf("%d", va_arg(operacion, int));
	if (i != n - 1)
	printf("%s", separator);
	}
	printf("\n");
	va_end(operacion);
}

