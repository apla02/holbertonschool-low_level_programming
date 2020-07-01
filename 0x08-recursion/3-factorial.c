#include "holberton.h"
/**
* factorial -  function too return a factorial number
* @n: number to factorial
* Return: number factorial
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
