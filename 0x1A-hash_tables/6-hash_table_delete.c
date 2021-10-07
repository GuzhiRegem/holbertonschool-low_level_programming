#include "hash_tables.h"

/**
 * free_node - a
 * @node: node
 * Return: nothing
 */
void free_node(hash_node_t *node)
{
	if (node->key)
		free(node->key);
	if (node->value)
		free(node->value);
	free(node);
}
/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *ptr, *next;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		ptr = ht->array[i];
		if (!ptr)
			continue;
		next = ptr->next;
		free_node(ptr);
		while (next)
		{
			ptr = next;
			next = ptr->next;
			free_node(ptr);
		}
	}
	free(ht->array);
	free(ht);
}
