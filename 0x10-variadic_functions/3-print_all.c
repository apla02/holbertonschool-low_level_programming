#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - function to print a format
 * @format: type format parameter
*/
void print_all(const char * const format, ...)
{
	unsigned int i = 0, j = 0;
	char *str;
	va_list flist;

	va_start(flist, format);
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(flist, int));
				j = 1;
				break;
			case 'i':
				printf("%d", va_arg(flist, int));
				j = 1;
				break;
			case 'f':
				printf("%f", va_arg(flist, double));
				j = 1;
				break;
			case 's':
				str = va_arg(flist, char *);
				if (str == NULL)
					printf("(nil)");
				else
					printf("%s", str);
				break;
			default:
				j = 0;
				break;
		}
		if (j == 1 && format[i + 1] != '\0')
			printf(", ");
	i++;
	}
	va_end(flist);
	printf("\n");
}
