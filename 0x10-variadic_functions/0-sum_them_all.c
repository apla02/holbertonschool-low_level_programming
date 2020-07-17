#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - add all arguments
 * @n: number of arguments
 * Return: always zero
 */
int sum_them_all(const unsigned int n, ...)
{
	int suma = 0;
	unsigned int i;
	va_list operacion;

	if (n != 0)
	{
		va_start(operacion, n);
		for (i = 1; i <= n; i++)
			suma += va_arg(operacion, int);
		va_end(operacion);
		return (suma);
	}
	return (0);
}
