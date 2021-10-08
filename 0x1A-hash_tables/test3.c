#include "hash_tables.h"

int main(void)
{
	hash_table_t *ht;
	unsigned long int i;
	hash_node_t *ptr;

	ht = hash_table_create(12);
	printf("created ht at: %p with size: %lu\n",(void *)ht,ht->size);
	hash_table_set(ht, "betty", "cool");
	hash_table_set(ht, "betty", NULL);
	for (i = 0; i < ht->size; i++)
	{
		ptr = ht->array[i];
		if (ptr)
			printf("<%lu> %s : %s\n", i, ptr->key, ptr->value);
	}
	return (EXIT_SUCCESS);
}
