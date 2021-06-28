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
	while (i)
	{
		i--;
		out[leng - i] = *(s + i);
	}
	while (i < leng)
	{
		*(s + i) = out[i];
		i++;
	}
}
