#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: the key, it cannot be an empty string
 * @value: the value associated with the key
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *content;
	hash_node_t *ptr, *new;

	if (!ht || !key)
		return (0);

	ptr = ht->array[key_index(key, ht->size)];
	
	content = malloc(strlen(value));
	if (!content)
		return (0);
	strcpy(content, value);
}
