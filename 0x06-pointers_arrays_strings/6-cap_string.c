#include "holberton.h"

/**
 *cap_string - print a message with printf
 *@s : number
 *
 *Return: end program
 */
char *cap_string(char *s)
{
	int i, d, o;

	d = 'A' - 'a';
	o = 1;
	for (i = 0; s[i] != 0; i++)
	{
		o += (s[i] == ' ');
		o += (s[i] == ',');
		o += (s[i] == ';');
		o += (s[i] == '.');
		o += (s[i] == '!');
		o += (s[i] == '?');
		o += (s[i] == '"');
		o += (s[i] == '(');
		o += (s[i] == ')');
		o += (s[i] == '{');
		o += (s[i] == '}');
		o += (s[i] == 9);
	        if (((s[i] <= 'z') && (s[i] >= 'a')) && o)
		{
			s[i] += d;
			o = 0;
		}
	}
	return (s);
}
