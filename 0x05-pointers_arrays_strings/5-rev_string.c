#include "holberton.h"

/**
 *rev_string - print a message with printf
 *@s : number
 *
 *Return: end program
 */
void rev_string(char *s)
{
	int i, leng;
	char out[999];

	i = 0;
	while (*(s + i) != 0)
		i++;
	leng = i;
	i = 0;
	while (*(s + i) != 0)
	{
		out[leng - i] = *(s + i);
		i++;
	}
	i = 0;
	while (*(s + i) != 0)
	{
		*(s + i) = out[i];
		i++;
	}
}
