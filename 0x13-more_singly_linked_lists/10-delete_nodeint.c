#include "lists.h"
/**
 * delete_nodeint_at_index - delete a  node in an index the listint_t.
 * @head: pointer  to the strucure.
 * @index: index of listint_t list.
 * Return: 1 success, -1 fail.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;

	if (head && *head)
	{
		listint_t *siguiente;
		listint_t *anterior;

		if (index == 0)
		{
			siguiente = *head;
			*head = (*head)->next;
		}
		else
		{
			siguiente = *head;
			while (i++ < index && (siguiente->next))
			{
				anterior  = siguiente;
				siguiente = siguiente->next;
			}
			anterior->next = siguiente->next;
		}
			free(siguiente);
			return (1);
	}
	else
		return (-1);
}
