#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table you want to look into
 * @key: key you are looking for
 * Return: value associated with the element
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int ind, exist = 0;
	hash_node_t *ptr;

	if (!ht || !key)
		return (NULL);
	ind = key_index((const unsigned char *)key, ht->size);
	ptr = ht->array[ind];
	if (!ptr)
	{
		printf("no existe ptr\n");
		return (NULL);
	}
	if (strcmp(key, ptr->key) == 0)
		exist = 1;
	while (ptr->next)
	{
		if (strcmp(key, ptr->key) == 0)
		{
			exist = 1;
			break;
		}
		ptr = ptr->next;
	}
	if (!exist)
	{
		return (NULL);
	}
	return (ptr->value);
}
