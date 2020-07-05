#include <stdio.h>
/**
* main - main function
* @argc: number of arguments to program
* @argv: vector of arguments
* Return: always zero.
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	int i;

	for (i = 0; i < argc; i++)
	{}
	printf("%d\n", i - 1);
	return (0);
}
