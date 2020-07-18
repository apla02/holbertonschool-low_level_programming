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
	va_list p_number;

	va_start(p_number, n);
	for (i = 0; i < n; i++)
	{
	printf("%d", va_arg(p_number, int));
	if (separator != NULL && i != n - 1)
	printf("%s", separator);
	}
	printf("\n");
	va_end(p_number);
}
