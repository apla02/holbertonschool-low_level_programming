#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the beginning of a dlistint_t list.
 * @head: double pointer to structure
 * @n: number of nodes of the list
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp;

	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (!(*head))/* lista vacía*/
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	new->prev = tmp;

	return (new);
}
