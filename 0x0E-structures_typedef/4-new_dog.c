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
	if (str)
	{
		if (str[0] == 0)
			return (1);
		return (str_len(str + 1) + 1);
	}
	else
		return (0);
}
/**
 *str_cpy - a
 *@str: a
 *
 *Return: a
 */
char *str_cpy(char *str)
{
	char *p = NULL;
	int i;

	p = malloc(str_len(str));
	if (p && str)
	{
		for (i = 0; str[i]; i++)
			p[i] = str[i];
	}
	return (p);
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

	cp_name = str_cpy(name);
	if (!cp_name)
		return (p);
	cp_owner = str_cpy(owner);
	if (!cp_owner)
	{
		free(cp_name);
		return (p);
	}
	p = malloc(sizeof(dog_t));
	if (!p)
	{
		free(cp_name);
		free(cp_owner);
		return (p);
	}
	p->name = cp_name;
	p->age = age;
	p->owner = owner;
	return (p);
}
