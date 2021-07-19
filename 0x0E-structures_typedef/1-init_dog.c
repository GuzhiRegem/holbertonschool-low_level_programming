#include "dog.h"

/**
 *init_dog - a
 *@d: a
 *@name: a
 *@age: a
 *@owner: a
 *
 *Return: a
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
