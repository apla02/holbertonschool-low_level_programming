#include "lists.h"
/**
 * get_dnodeint_at_index - gets a node from a dlistint_t list.
 * @head: double pointer to structure
 * @index: index of node to get from the list
 * Return: the adrress of nth node, or NULL if it failed
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int nth = 0;

	tmp = head;
	nth = 1;
	while (tmp && nth <= index)
	{
		tmp = tmp->next;
		nth++;
	}
	return (tmp);
}
