#include "holberton.h"
#include <stddef.h>

/**
 *_strstr - print a message with printf
 *@haystack : number
 *@needle : number
 *
 *Return: end program
 */
char *_strstr(char *haystack, char *needle)
{
        int posn = 0;
	int poshs = 0;
	char *p = NULL;

	if (haystack && needle && (needle[0] != 0))
	{
		for (poshs = 0; haystack[poshs] != '\0'; poshs++)
		{
			if(haystack[poshs] == needle[posn])
			{
				if (posn == 0)
				{
					p = haystack + poshs;
				}
				posn++;
				if(needle[posn] == '\0')
					break;
			}
			else
			{
				posn = 0;
				p = NULL;
			}
		}
	}
	return (p);
}
