#include <stdlib.h>

/**
 *malloc_checked - a
 *b : a
 *
 *Return: none
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p)
		return (p);
	else
		exit(98);
}
