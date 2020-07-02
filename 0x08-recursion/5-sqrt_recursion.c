#include "holberton.h"
/**
* _sqrt_recursion -  function to sqr
* @n: number to test
* Return: no zero
*/
int _sqrt_recursion(int n)
{
	int a = 0;

	return (raiz(n, a));

}

#include "holberton.h"
/**
* raiz -  function to find a square
* @n: number
* @a: counter
* Return: no zero
*/
int raiz(int n, int a)
{
	if (a * a > n)
	{
		return (-1);
	}
	else if (a * a == n)
	{
		return (a);
	}
	else
	{
		return (raiz(n, a + 1));
	}
}
