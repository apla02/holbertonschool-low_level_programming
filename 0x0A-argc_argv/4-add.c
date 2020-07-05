#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* main - main function
* @argc: number of arguments to program
* @argv: vector of arguments
* Return: always zero.
*/
int main(int argc, char *argv[])
{
	int suma = 0;
	int i;
	int j = 0;

	for (i = 1; i < argc; i++)
	{
		if ((atoi(argv[i]) == '\0') && j < argc)
			j++;
		else
		{
			if (atoi(argv[i]) > 0)
				suma = suma + atoi(argv[i]);
			else
			{
				j = -1;
				break;
			}
		}
	}
	if (j == 0)
		printf("%d\n", suma);
	else
	{
		if (j == argc - 1)
			printf("0\n");
		else
		{
			if (j == -1)
				printf("Este programa solo puede sumar números positivos\n");
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	return (0);
}
