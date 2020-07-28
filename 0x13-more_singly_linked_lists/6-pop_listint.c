#include "lists.h"
/**
 * pop_listint- delet the head node of a listint_t list.
 * @head: pointer to pointer the head pointer.
 * Return: the data of the head node.
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int n;


	if (*head == NULL)
		return (0);
	n = (*head)->n;
	ptr = (*head)->next;
	free(*head);
	*head = ptr;
	return (n);
}
