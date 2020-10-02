#include "hash_tables.h"
/**
 * hash_table_print-  function to print a hash table
 * @ht: pointer to structure node
 *
 * Return: none
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *ptr;

	if (!ht)
		return;
	putchar('{');
	while (index < ht->size - 1)
	{

		if (ht->array[index])
		{
			ptr = ht->array[index];

			while (ptr)
			{
				printf("'%s': '%s'", ptr->key, ptr->value);
				if ((ptr->next) || (!ptr->next && ht->array[index + 1]))
					printf(", ");
				ptr = ptr->next;
			}
		}
		index++;
	}
	putchar('}');
	putchar('\n');
}
