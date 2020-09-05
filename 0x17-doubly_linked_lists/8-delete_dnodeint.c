#include "lists.h"
/**
 * delete_dnodeint_at_index - delet  a node in a given position
 * @head: double pointer to structure
 * @index: index of node to delete from the list
 * Return: 1 sucess, -1 failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int nth = 0;

	if (*head == NULL)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		if (tmp->next)
			tmp->next->prev = NULL;
		(*head) = (*head)->next;
		free(tmp);
		return (1);
	}
	while (tmp && nth <= index)
	{
		tmp = tmp->next;
		nth++;
	}
	if (tmp == NULL)
		return (-1);
	if (tmp->next)
		tmp->next->prev = tmp->prev;
	tmp->prev->next = tmp->next;
	free(tmp);
	return (1);
}

