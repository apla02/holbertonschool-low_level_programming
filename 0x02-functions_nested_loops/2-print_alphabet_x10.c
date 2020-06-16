#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, j;

	for (i = 0  ; i <= 10 ; i++)
	{
		for (j = 'a'; j <= 'z' ; j++)
		_putchar (j);
		_putchar ('\n');
	}
		return (0);
}
