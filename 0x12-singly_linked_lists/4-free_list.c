#include "lists.h"
/**
 * free_list - free a linked list
 * @head: pointer to structure
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *ptr = NULL;

	while (head != '\0')
	{
		ptr = head->next;
		free(head->str);
		free(head);
		head = ptr;
	}
}
