#include "lists.h"
/**
 * list_len - list a number of nodes of a linked list
 * @h: pointer to structure
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	if (h == 0)
		return (0);

	while (h != '\0')
	{
		h = (*h).next;
		i++;
	}
	return (i);
}
