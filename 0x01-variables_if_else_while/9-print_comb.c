#include <stdlib.h>
#include <stdio.h>
/**
 * main-prints numbers
 * Return: 0
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
	putchar (num + '0');
	if (num <= 8)
	{
	putchar (',');
	putchar (' ');
	}
	num++;
	}
	putchar ('\n');
	return (0);
}
