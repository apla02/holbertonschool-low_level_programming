#include "lists.h"
/**
 * print_list - print a linked list
 * @h: pointer to structure
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	if (h == 0)
		return (0);

	while (h != '\0')
	{
		if ((*h).str != '\0')
			printf("[%u] %s\n", (*h).len, (*h).str);
		else
			{
				printf("[0] (nil)\n");
			}
		h = (*h).next;
		i++;
	}
	return (i);
}
