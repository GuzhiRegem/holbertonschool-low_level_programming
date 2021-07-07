#include "holberton.h"

/**
 *_strlen_recursion - print a message with printf
 *@s : number
 *
 *Return: end program
 */
void _strlen_recursion(char *s);
{
	if (s == "")
		return;
	return (1 + _strlen_recursion(s + 1));
}
