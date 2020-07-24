#include "lists.h"
/**
 * add_node_end - print a linked list
 * @head: double pointer to structure
 * @str: string
 * Return: the number of nodes
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = NULL, *end = NULL;
	int i;

	new = (list_t *)malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	(*new).str = strdup(str);
	if ((*new).str == NULL)
	{
		free(new);
		return (NULL);
	}
	i = 0;
	while (*(str + i))
		i++;
	(*new).len = i;
	(*new).next = NULL;
	if (*head == NULL)
	{
		(*new).next = *head;
		*head = new;
	}
	else
	{
		end = *head;
		while ((*end).next != NULL)
			end = (*end).next;
		(*end).next = new;
	}
	return (new);
}
