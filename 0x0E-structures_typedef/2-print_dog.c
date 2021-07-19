#include "dog.h"
#include <stdio.h>

/**
 *init_dog - a
 *@d: a
 *@name: a
 *@age: a
 *@owner: a
 *
 *Return: a
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		if (d->owner)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
