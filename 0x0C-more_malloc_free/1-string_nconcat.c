#include <stdlib.h>
#include "holberton.h"
/**
* string_nconcat - function to concatenate 2 strings
* @s1: first string
* @s2: second string
* @n: first n bytes of second string
* Return: s
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; *(s1 + len1); len1++)/* length of first string*/
	{}
	for (len2 = 0; *(s2 + len2); len2++)/* length of second string*/
	{}
		if (n < len2)
		{
			len2 = n;
		}
	s3 = malloc((len1 + len2 + 1) * sizeof(char));
	if (s3 == NULL)
	{
		return (NULL);
	}
	for (len1 = 0; *(s1 + len1); len1++)
	{
		*(s3 + len1) = *(s1 + len1);
	}
	for (len2 = 0; len2 < n && *(s2 + len2); len1++, len2++)
		{
		*(s3 + len1) = *(s2 + len2);
		}
	*(s3 + len1) = '\0';
	return (s3);
}
