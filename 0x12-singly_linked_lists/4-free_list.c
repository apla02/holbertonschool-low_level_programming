#include "lists.h"
/**
 * free_list - free a linked list
 * @head: pointer to structure
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *t = NULL;

	while (head != '\0')
	{
		t = head;
		head = (*head).next;
		free(t->str);
		free(t);
		t->str = NULL;
		return;
	}
}
