#include "3-calc.h"
#include <stdio.h>
/**
 * get_op_func - selects the correct function to perform the operation
 * @s:  is the operator passed as argument to the program
 * Return: no zero
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5 && s[1] == '\0')
	{
		if (*s == *ops[i].op)
			return (ops[i].f);
	i++;
	}
	return (NULL);
}
