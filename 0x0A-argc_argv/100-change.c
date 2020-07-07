#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the minumum number of coins to change of a mount
 * @argc: number or arguments to program
 * @argv: vector of arguments
 * Return: zero
 */

int main(int argc, char *argv[])
{
	int i;
	int n;
	int coins;
	int s[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5; i++)
	{
		for (; n >= s[i]; coins++)
			n = n - s[i];
	}
	printf("%d\n", coins);
	return (0);
}
