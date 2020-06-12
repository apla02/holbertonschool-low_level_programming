#include <stdio.h>
/**
 * main-prints the alphabet in lowercase, and uppercase followed by a new line
 * Return: 0
 */
int main(void)
{
	char alph = 'a';
	char alph2 = 'A';

	while (alph <= 'z')
	{
	putchar (alph);
	alph++;
	}
	while (alph2 <= 'Z')
	{
	putchar (alph2);
	alph2++;
	}
	putchar ('\n');
	return (0);
}
