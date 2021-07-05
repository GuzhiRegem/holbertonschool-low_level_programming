#include "holberton.h"
#include <stddef.h>

/**
 *_strchr - print a message with printf
 *@s : number
 *@c : number
 *
 *Return: end program
 */
char *_strchr(char *s, char c)
{
	char *p = NULL;
	int i, find;

	find = 0;
	p = s;
	if (s != NULL)
	{
		for (i = 0; ((s[i]) && (!find)); i++)
		{
			if (s[i] == c)
			{
				find = 1;
				break;
			}
		}
		if (find)
			p = s + i;
	}
	return (p);
}
