#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main-This program will assign a random number to the variable assigned
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d\n is positive", n);
	}
	else if (n == 0)
	{
		printf("%d\n is zero", n);
	}
	else if (n < 0)
	{
		printf("%d\n is negative", n);
	}
	return (0);
}
