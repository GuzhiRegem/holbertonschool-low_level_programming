#include <stdlib.h>
#include "holberton.h"

/**
 *argstostr - a
 *@ac : a
 *@av : a
 *
 *Return: la
 */
char *argstostr(int ac, char **av)
{
	char *p = NULL;
	int i, a, total_count, tot = 0;

	for (i = 0; i < ac; i++)
	{
		for (a = 0; av[i][a]; a++)
		{
			totalcount++;
		}
		totalcount++;
	}
	if ((ac > 0) && (av))
	{
		p = malloc(totalcount);
		if (p)
		{
			for (i = 0; i < ac; i++)
			{
				for (a = 0; av[i][a]; a++)
				{
					p[tot] = av[i][a];
					tot++;
				}
				p[tot] = '\n';
				tot++;
			}
		}
	}
	return (p);
}
