#include "dog.h"
#include <stdio.h>

/**
 *free_dog - a
 *@d: a
 *
 *Return: a
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
	}
	free(d);
}
