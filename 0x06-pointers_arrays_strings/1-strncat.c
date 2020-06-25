#include "holberton.h"
/**
* _strncat -  function to concatenate two strings
* @dest: first string
* @src: second string
* @n: numers of bytes
* Return: no zero
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	return (dest);
}
