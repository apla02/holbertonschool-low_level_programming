#include "holberton.h"
/**
* leet -  function that encripts
* @s: string
* Return: no zero
*/
char *leet(char *s)
{
	int i = 0;
	int j;
	char a[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char n[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

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
