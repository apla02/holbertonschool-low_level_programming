#include "lists.h"
/**
 * listint_len - print all the elements of a listint_t list.
 * @h: pointer to strcutur listint_t
 * Return: the numbers of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t index = 0;/* counts the number of nodes*/

	if (h == 0)
		return (0);

	for (index = 0; h; index++)
	{
		if (h->n)
		{
			h = h->next;/*update the adress of pointer to h->next : change the member into the structure ?*/
		}
	}
	return (index);
}
