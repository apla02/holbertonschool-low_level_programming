#include "lists.h"
/**
 * insert_dnodeint_at_index - insert  a node to a dlistint_t list.
 * @h: double pointer to structure
 * @idx: index of node to get from the list
 * @n: data
 * Return: the adrress of nth node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp;
	unsigned int nth;

	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	tmp = *h;
	if (idx == 0)
	{
		new->n = n;
		new->next = (*h);
		if (*h)
			(*h)->prev = new;
		(*h) = new;
		return (new);
	}

	nth = 0;
	while (tmp && nth < idx - 1)
	{
		nth++;
		tmp = tmp->next;
	}

	new->next = tmp->next;
	new->prev = tmp;
	tmp->next = new;

	return (new);
}
