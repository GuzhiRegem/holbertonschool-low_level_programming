#include "hash_tables.h"

int main(void)
{
	hash_table_t *ht;
	unsigned long int i;
	hash_node_t *ptr;

	ht = hash_table_create(1024);
	printf("created ht at: %p with size: %lu\n",(void *)ht,ht->size);
	hash_table_set(ht, "c", "fun");
    hash_table_set(ht, "python", "awesome");
    hash_table_set(ht, "Bob", "and Kris love asm");
    hash_table_set(ht, "N", "queens");
    hash_table_set(ht, "Asterix", "Obelix");
    hash_table_set(ht, "Betty", "Cool");
    hash_table_set(ht, "98", "Battery Street");
    hash_table_set(ht, "c", "isfun");	
	hash_table_set(ht, "betty", "cool");
	hash_table_set(ht, "betty", NULL);
	hash_table_set(ht, "c", "fun");
	hash_table_set(ht, "hetairas", "awesome");
	hash_table_set(ht, "mentioner", "and Kris love asm");
	hash_table_set(ht, "heliotropes", "queens");
	hash_table_set(ht, "neurospora", "Obelix");
	hash_table_set(ht, "depravement", "Cool");
	hash_table_set(ht, "serafins", "Battery Street");
	hash_table_set(ht, "c", "isfun");
	for (i = 0; i < ht->size; i++)
	{
		ptr = ht->array[i];
		if (!ptr)
			continue;
		printf("<%lu> ", i);
		while (ptr)
		{
			printf("<%s : %s> -> ", ptr->key, ptr->value);
			ptr = ptr->next;
		}
		printf("\n");
	}
	return (EXIT_SUCCESS);
}
