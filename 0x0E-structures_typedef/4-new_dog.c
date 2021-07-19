#include "dog.h"
#include <stdio.h>
#include <stddef.h>

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

	doggo.name = name;
	doggo.age = age;
	doggo.owner = owner;
	p = &doggo;
	return (p);
}
