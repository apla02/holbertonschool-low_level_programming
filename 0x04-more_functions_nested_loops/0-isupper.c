#include "holberton.h"
/**
  * _isupper - uppercase of a letter
  * @c: variable of a letter
  * Return: always 0.
  */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
