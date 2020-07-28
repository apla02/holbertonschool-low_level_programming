#include "lists.h"
/**
 * print_listint - print all the elements of a listint_t list.
 * @h: pointer to strcutur listint_t
 * Return: the numbers of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr;
	size_t index = 0;/* counts the number of nodes*/

	if (h == '\0')
		return (0);
	ptr = h;
	for (index = 0; ptr; index++)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;/*update the adress of pointer to h->next t*/
	}
	return (index);
}
