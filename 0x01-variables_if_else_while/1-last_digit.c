#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main-This program will assign a random number to the variable assigned
 * @void- void parameter
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
printf("Last digit of %d is n%10", n)
	if (n > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (n == 0)
	{
		printf("and is 0\n");
	}
	else if (n < 6 && n != 0)
	{
		printf("and is less than 6 and not 0\n")
	return (0);
}
