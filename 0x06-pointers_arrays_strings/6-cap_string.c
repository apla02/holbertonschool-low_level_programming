#include "holberton.h"
/**
* cap_string -  function to change a lowercase char to uppercase one
* @s: string
* Return: void
*/
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if ((s[i - 1] == ' ' || s[i - 1] == '\n'
		|| s[i - 1] == '\t' || s[i - 1] == ','
		|| s[i - 1] == ';' || s[i - 1] == '!'
		|| s[i - 1] == '?' || s[i - 1] == '"'
		|| s[i - 1] == '(' || s[i - 1] == ')'
		|| s[i - 1] == '{' || s[i - 1] == '}'
		|| s[i - 1] == '.')
		&& (s[i] >= 97 && s[i] <= 122))
		{
			s[i] = s[i] - 32;
		}
		else if ((s[i] >= 97 && s[i] <= 122) && i == 0)
		{
			s[i] = s[i] - 32;
		}
		else
		{
			s[i] = s[i];
		}
		i++;
	}
		return (s);
}
