#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, found = 0;
	hash_node_t *ptr;

	if (!ht)
		printf("{}\n");
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		ptr = ht->array[i];
		if (!ptr)
			continue;
		if (found)
			printf(", ");
		printf("'%s': '%s'", ptr->key, ptr->value);
		found = 1;
		while (ptr->next)
		{
			ptr = ptr->next;
			printf(", '%s': '%s'", ptr->key, ptr->value);
		}
	}
	printf("}\n");
}
