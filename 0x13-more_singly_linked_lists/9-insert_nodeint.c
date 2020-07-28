#include "lists.h"
/**
 *  * insert_nodeint_at_index - add  a new node to the beggining of the listint_t.
 * @head: pointer to pointer *head, that point to the structure.
 * @idx : index to insert a new node
 * @n: element int
 * Return: the numbers of nodes
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *ptr = NULL;/** pointer to traverse the list*/
	listint_t *new = NULL;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	
	ptr = *head;
	while (ptr && i < idx)
	{
		ptr = ptr->next;
		i++;
		if (i == idx)
		{
			ptr->next = new;
			break;
		}
	}
	new->n = n;
	new->next = (*(ptr + 1)).next;
	return (new);
}
