#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
* str_concat - function to concatenate 2 strings
* @s1: string1
* @s2: string2
* Return: p or NULL
*/
char *str_concat(char *s1, char *s2)
{
	unsigned int l1, l2;
	char *s3;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (l1 = 0; *(s1 + l1); l1++)
	{
	}
	for (l2 = 0; *(s2 + l2); l2++)
	{
	}
	s3 = malloc(sizeof(char) * (l1 + l2 + 1));

	if (s3 == NULL)
	{
	return (NULL);
	}
	for (l1 = 0; *(s1 + l1); l1++)
	{
		*(s3 + l1) = *(s1 + l1);
	}
	for (l2 = 0; *(s2 + l2); l1++, l2++)
	{
		*(s3 + l1) = *(s2 + l2);
	}
	return (s3);
}
