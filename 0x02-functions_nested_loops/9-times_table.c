#include "holberton.h"
/**
 * times_table - numbers
 * void: no content
 */
void times_table(void)
{
	int f;
	int c;
	int n;

	for (f = 0; f <= 9; f++)
	{
		for (c = 0; c <= 9; c++)
		{
			n = f * c;
			if (n > 9)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			if (c < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			}
			if (n <= 9)
			{
				_putchar(n + '0');
				if (c < 9)
					{
					_putchar(',');
					_putchar(' ');
					if ((n + f) < 10)
					_putchar(' ');
					}
			}
		}
		_putchar('\n');
			}
}
