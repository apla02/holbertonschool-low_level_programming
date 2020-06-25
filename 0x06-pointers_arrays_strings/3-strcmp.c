#include "holberton.h"
/**
* _strcmp -  function to compare two strings
* @s1: first string
* @s2: second string
* Return: no zero
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while ((s1[i] != '\0' && s2[j] != '\0') && s1[i] == s2[j])
	{
		i++;
		j++;
	}
	if (s1[i] == s2[j])
	{
		return (0);
	}
	else
	{
		return (s1[i] - s2[j]);
	}
	return (0);
}
