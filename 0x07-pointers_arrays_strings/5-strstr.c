#include "holberton.h"
#include <stdlib.h>
/**
* _strstr -  search a string for a set of bytes
* @haystack:string source
* @needle: value string accept
* Return: string needle and NULL
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i] == needle[j])
			{
				return (needle);
			}
		}
	}
	return (NULL);
}
