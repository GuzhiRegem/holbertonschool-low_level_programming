#include <stdio.h>
#include "dog.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	dog_t *my_dog;

	my_dog = new_dog("manom", 3.5, "jhon");
	if (my_dog)
		printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
	else
		printf("NULL\n");
	return (0);
}
