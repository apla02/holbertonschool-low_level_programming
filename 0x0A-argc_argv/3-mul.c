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
	int resultado = 0;

	if (argc == 3)
		{
		resultado = resultado + (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", resultado);
		}

	else
		{
			printf("Error\n");
			return (1);
		}
	return (0);
}
