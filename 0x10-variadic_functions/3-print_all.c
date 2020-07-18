#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_c - fnction to print a format
 * @c: typef
*/
void print_c(va_list c) {printf("%c", va_arg(c, int)); }
/**
 * print_i - fnction to print a format
 * @i: typef
*/
void print_i(va_list i) {printf("%d", va_arg(i, int)); }
/**
 * print_f - fnction to print a format
 * @f: typef
*/
void print_f(va_list f) {printf("%f", va_arg(f, double)); }
/**
 * print_s - fnction to print a format
 * @s: typef
*/
void print_s(va_list s)
{
	char *string;

	string =  va_arg(s, char *);
	if (string == NULL)
		printf("(nil)");
	printf("%s", string);
}
/**
 * print_all - function to print a format
 * @format: type format parameter
*/
void print_all(const char * const format, ...)
{
	unsigned int i, j;
	char *separator;
	va_list args;
	format_t printall[] = {
	{"c", print_c},
	{"i", print_i},
	{"f", print_f},
	{"s", print_s}
	};
	separator = "";
	va_start(args, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
		if (format[i] == *printall[j].typef)
		{
		printf("%s", separator);
		printall[j].f(args);
		separator = ", ";
		}
		j++;
		}
	i++;
	}
	printf("\n");
}
