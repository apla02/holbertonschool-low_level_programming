#include "holberton.h"
/**
* is_prime_number -  function
* @n: base
* Return: no zero
*/
int is_prime_number(int n)
{
	int i = 2;
	{
		return (primo(n, i));
	}
}

/**
* primo -  function to find a square
* @n: number
* @i: counter
* Return: no zero
*/
int primo(int n, int i)
{
	if (i == n)
	{
		return (1);
	}
	if (n < 2)
	{
		return (0);
	}
	if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (primo(n, i + 1));
	}
}
