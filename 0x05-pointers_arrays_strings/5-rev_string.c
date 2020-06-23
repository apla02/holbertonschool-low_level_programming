#include "holberton.h"
/**
 * rev_string - reverse a string
 * @s: string
 */
void rev_string(char *s)
{
	int i;
	int j = 0;
	int k;

	while (s[i] != '\0')
	{
	i++;
	}
	i = i - 1;
	while (j < i)
	{
	k = s[j];
	s[j] = s[i];
	s[i] = k;
	i--;
	j++;
	}
}
