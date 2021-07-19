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
	dog_t doggo;
	char *cp_name;
	char *cp_owner;
	int i;

	if ((!owner) || (!name))
		return (p);
	cp_name = malloc(str_len(name));
       	cp_owner = malloc(str_len(owner));
	if ((!cp_owner) || (!cp_name))
		return (p);
	for (i = 0; name[i]; i++)
		cp_name[i] = name[i];
	for (i = 0; owner[i]; i++)
		cp_owner[i] = owner[i];
	doggo.name = name;
	doggo.age = age;
	doggo.owner = owner;
	p = &doggo;
	return (p);
}
