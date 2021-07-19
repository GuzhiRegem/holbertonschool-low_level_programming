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
		if (d.name)
			printf("Name: %s\n", dog.name);
		else
			printf("Name: (nil)\n");
		if (d.age)
			printf("Age: %f\n", dog.age);
		else
			printf("Age: (nil)\n");
		if (d.owner)
			printf("Owner: %s\n", dog.owner);
		else
			printf("Owner: (nil)\n");
	}
}
