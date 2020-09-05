#include "lists.h"
/**
 * free_dlistint - function that free a dlistint_t list.
 * @head: double pointer to structure
 * Return: none
 */
void free_dlistint(dlistint_t *head)
{

	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
