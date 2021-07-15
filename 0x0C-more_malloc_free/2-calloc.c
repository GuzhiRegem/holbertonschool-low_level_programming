#include <stdlib.h>

/**
 *_calloc - a
 *@nmemb : aa
 *@size : aa
 *
 *Return: none
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i;
	void *p;

	if (nmemb && size)
		p = malloc(nmemb * size);
	if (p)
	{
		for (i = 0; i < (nmemb * size); i++)
			p[i] = 0;
	}
	return (p);
}
