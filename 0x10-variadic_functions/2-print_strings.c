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
	char *str;

	va_start(print_s, n);
	for (i = 0; i < n; i++)
	{
		str =  va_arg(print_s, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
			if (separator != NULL && i != n - 1)
				printf("%s", separator);
	}
	va_end(print_s);
	printf("\n");
}
