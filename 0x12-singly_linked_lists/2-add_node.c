#include "lists.h"
/**
 * add_node - print a linked list
 * @head: double pointer to structure
 * @str: string
 * Return: the number of nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = NULL;
	int i = 0;

	if (head == '\0' || str == '\0')
		return (0);
	new = (list_t *)malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	(*new).str = strdup(str);
	if ((*new).str == NULL)
	{
		free(new);
		return (NULL);
	}
	while (*(str + i))
	{
		i++;
	}
	(*new).len = i;
	(*new).next = *head;
	*head = new;
	return (new);
}
