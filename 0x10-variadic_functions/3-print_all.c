#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - function to print a format
 * @format: type format parameter
*/
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *str;
	va_list flist;

	va_start(flist, format);
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(flist, int));
				printf(", ");
				break;
			case 'i':
				printf("%d", va_arg(flist, int));
				printf(", ");
				break;
			case 'f':
				printf("%f", va_arg(flist, double));
				printf(", ");
				break;
			case 's':
				str = va_arg(flist, char *);
				if (str == NULL)
					printf("(nil)");
				else
					printf("%s", str);
				break;
			default:
				break;
		}
	i++;
	}
	va_end(flist);
	printf("\n");
}
