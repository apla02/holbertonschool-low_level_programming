#include "holberton.h"
/**
* string_toupper -  function to change a lowercase char to uppercase one
* @s: string
* Return: void
*/
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
