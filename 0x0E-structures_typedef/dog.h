#ifndef HOLBERTON_H
#define HOLBERTON_H
/**
 *struct dog - a
 *@name: a
 *@age: a
 *@owner: a
 *
 *Description: a
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
