#include "holberton.h"

/**
 *_strlen_recursion - print a message with printf
 *@s : number
 *
 *Return: end program
 */
int _strlen_recursion(char *s)
{
	if (*s == 0)
		return;
	return (1 + _strlen_recursion(s + 1));
}
