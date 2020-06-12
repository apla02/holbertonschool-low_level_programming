#include <stdlib.h>
#include <stdio.h>
/**
  * main - alphabeth
  * Return: Always 0 (Success)
  */
int main(void)
{
	int num = 0;
	char alpha = 'a';

	while (num <= 9)
	{
	putchar (num + '0');
	num++;
	}
	while (alpha <= 'f')
	{
	putchar (alpha);
	alpha++;
	}
	putchar ('\n');
	return (0);
}
