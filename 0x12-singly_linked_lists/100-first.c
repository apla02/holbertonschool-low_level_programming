#include <stdio.h>
/**
 * new_f - new function.
 *
 * Return: Always 0.
 */
int new_f(void) __attribute__((constructor));
int new_f(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
	return (0);
}
