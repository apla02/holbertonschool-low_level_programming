#include "holberton.h"
/**
* leet -  function that encripts
* @s: string
* Return: no zero
*/
char *leet(char *s)
{
	int i;
	int j;
	char a[] = "aAeEoOtTlL";
	char n[] = "4433007711";

	while (s[i] != '\0')
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = n[j];
			}
		}
		i++;
	}
	return (s);
}
