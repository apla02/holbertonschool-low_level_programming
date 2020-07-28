#include "lists.h"
/**
 * sum_listint - add  a new node to the beggining of the listint_t.
 * @head: pointer  to the structure.
 * Return: sum of all the numbers(n) of the list
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr = NULL;
	int suma = 0;

	if (head == NULL)
		return (0);

	ptr = head;
	while (ptr)
	{
		suma += ptr->n;
		ptr = ptr->next;
	}
	return (suma);
}
