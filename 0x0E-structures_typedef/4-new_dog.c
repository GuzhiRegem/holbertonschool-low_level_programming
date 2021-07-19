#include "dog.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 *str_len - a
 *@str: a
 *
 *Return: a
 */
int str_len(char *str)
{
	if (str[0] == 0)
		return (1);
	return (str_len(str + 1) + 1);
}
/**
 *new_dog - a
 *@name: a
 *@age: a
 *@owner: a
 *
 *Return: a
 */
dog_t *new_dog(char *name, float age, char *owner)
{
        dog_t *p = NULL;
	char *cp_name;
	char *cp_owner;
	int i;

	cp_name = malloc(str_len(name));
	cp_owner = malloc(str_len(owner));
	if (cp_name)
	{
		for (i = 0; name[i]; i++)
			cp_name[i] = name[i];
	}
	else
		return (p);
	if (cp_owner)
	{
		for (i = 0; owner[i]; i++)
			cp_owner[i] = owner[i];
	}
	else
		return (p);
	p = malloc(sizeof(dog_t));
	if (p)
	{
		p->name = cp_name;
		p->age = age;
		p->owner = cp_owner;
	}
	return (p);
}
