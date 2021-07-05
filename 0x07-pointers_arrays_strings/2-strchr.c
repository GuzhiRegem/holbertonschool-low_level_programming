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
	char *p;
	int i, find;

	find = 0;
	for (i = 0; (*(s + i) == 0) && (!find); i++)
	{
		if (*(s + i) == c)
		{
			p = (s + i);
			find = 1;
		}
	}
	if (find)
		p = NULL;
	return (p);
}
