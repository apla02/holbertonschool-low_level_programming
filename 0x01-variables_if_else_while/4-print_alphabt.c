#include <stdlib.h>
#include <stdio.h>
 
/**
  * main - alphabeth
  * Return: Always 0 (Success)
  */
 
int main(void)
{
	char alph = 'a';
	     
	while (alph <= 'z')
	{
	if (alph != 'e' && alph != 'q')
	{
	putchar(alph);
	}
	alph++;
	}
	putchar('\n');
	return (0);
}
