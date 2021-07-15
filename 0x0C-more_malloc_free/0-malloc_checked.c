#include <stdlib.h>

/**
 *malloc_checked - a
 *@b : aa
 *
 *Return: none
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (!p)
		exit(98);
	return (p);
}
