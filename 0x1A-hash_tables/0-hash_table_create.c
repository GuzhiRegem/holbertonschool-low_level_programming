#include "hash_tables.h"

/**
 *hash_table_create - creates a hash table
 *@size: size of the array
 *Return: newly created hash table or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *out = NULL;
	hash_node_t **array;

	if (!size)
		return (out);
	out = malloc(sizeof(hash_table_t));
	if (!out)
		return (out);
	array = calloc(size, sizeof(hash_node_t *));
	if (!array)
	{
		free(out);
		return (NULL);
	}
	out->array = array;
	out->size = size;
	return (out);
}
