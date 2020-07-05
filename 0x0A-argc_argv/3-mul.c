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
	int n1 = 0;
	int n2 = 0;

	if (argc == 3)
		{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		resultado = resultado + (n1 * n2);
		printf("%d\n", resultado);
		}

	else
		{
			printf("error\n");
			return (1);
		}
	return (0);
}
