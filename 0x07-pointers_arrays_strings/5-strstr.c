#include "holberton.h"
#include <stddef.h>
#include <stdio.h>

/**
 *_strstr - print a message with printf
 *@haystack : number
 *@needle : number
 *
 *Return: end program
 */
char *_strstr(char *haystack, char *needle)
{
	int a, b, c, checking, found = 0;
	char *final;

	checking = 0;
	found = 0;
	final = NULL;
	printf("nul\n");
	if (haystack != NULL)
	{
		for (a = 0; haystack[a]; a++)
		{
			if (needle != NULL)
			{
				if (checking == 0)
				{
					if (haystack[a] == *(needle))
						checking = 1;
					c = a;
				}
				else
				{
					b = a - c;
					if (needle[b] != haystack[a])
						checking = 0;
					else if (needle[b + 1] == 0)
					{
						found = 1;
						break;
					}
				}
			}
		}
	}
	if (found)
		final = haystack + c;
	if ((needle == NULL) && (haystack != NULL))
		final = haystack + c;
	return (final);
}
