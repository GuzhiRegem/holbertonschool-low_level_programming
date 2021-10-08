#include "hash_tables.h"

/**
 * new_node - creates a node
 * @value: the value
 * @key: the key
 * Return: pointer to new node
 */
hash_node_t *new_node(const char *value, const char *key)
{
	hash_node_t *out = NULL;
	char *n_key = NULL, *n_value = NULL;

	out = malloc(sizeof(hash_node_t));
	if (!out)
		return (out);
	n_key = malloc(strlen(key) + 1);
	if (!n_key)
	{
		free(out);
		return (NULL);
	}
	n_value = malloc(strlen(value) + 1);
	if (!n_value)
	{
		free(out);
		free(n_key);
		return (NULL);
	}
	strcpy(n_key, key);
	strcpy(n_value, value);
	out->key = n_key;
	out->value = n_value;
	out->next = NULL;
	return (out);
}
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: the key, it cannot be an empty string
 * @value: the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int exist = 0;
	hash_node_t *ptr, *new;
	char *val_cpy = NULL;
	unsigned long int ind;

	if (!ht || !key || !value || strlen(key) == 0)
		return (0);
	ind = key_index((const unsigned char *)key, ht->size);
	if (ht->array[ind])
		for (ptr = ht->array[ind]; ptr; ptr = ptr->next)
		{
			if (strcmp(key, ptr->key) == 0)
			{
				exist = 1;
				break;
			}
			if (!ptr->next)
				break;
		}
	if (exist)
	{
		val_cpy = malloc(strlen(value) + 1);
		if (!val_cpy)
			return (0);
		strcpy(val_cpy, value);
		free(ptr->value);
		ptr->value = val_cpy;
		return (1);
	}
	new = new_node(value, key);
	if (!new)
		return (0);
	new->next = ht->array[ind];
	ht->array[ind] = new;
	return (1);
}
