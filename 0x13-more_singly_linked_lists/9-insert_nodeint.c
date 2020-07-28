#include "lists.h"
/**
 *  * insert_nodeint_at_index - add  a new node at index position.
 * @head: pointer to pointer *head, that point to the structure.
 * @idx : index to insert a new node
 * @n: element int.
 * Return: the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *ptr = NULL;/** pointer to traverse the list*/
	listint_t *new = NULL;

	ptr = *head;
	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		*head = new;
		new->next = ptr;
		return (new);
	}
	while (ptr && i < idx - 1)
	{
		ptr = ptr->next;
		i++;
	}
	if (ptr == NULL)
		return (NULL);
	new->next = ptr->next;
	ptr->next = new;
	return (new);
}
