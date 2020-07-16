#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - function argc and argv
 * @argc: number of arguments
 * @argv: vector or punters of arrays
 * Return: always zero
 */
int main(int argc, char *argv[])
{
	int a, b, c;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	operation = get_op_func(argv[2]);
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (((operation == op_div) || (operation == op_mod)) && (b == 0))
	{
		printf("Error\n");
		exit(100);
	}
	c = operation(a, b);
	printf("%d\n", c);
	return (0);
}
