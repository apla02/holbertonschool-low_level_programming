#include "lists.h"
/**
 * get_nodeint_at_index - add  a new node to the beggining of the listint_t.
 * @head: pointer  to the structure.
 * @index: index of listint_t list.
 * Return: the numbers of nodes
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = NULL;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	ptr = head;
	while (ptr && i < index)
	{
		ptr = ptr->next;
		i++;
	}
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
