#include <stdlib.h>
#include <stdio.h>
/**
   * main-prints numbers
    * Return: 0
     */
int main(void)
{
	int num = 0;

	while (num <= 99)
	{
	putchar ((num / 10) + '0');
	putchar ((num % 10) + '0');

	if (num <= 98)
	{
	putchar (',');
	putchar (' ');
	}
	num++;
	}
	putchar ('\n');
	return (0);
}
