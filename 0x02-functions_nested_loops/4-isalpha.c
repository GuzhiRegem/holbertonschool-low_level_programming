#include "holberton.h"

/**
 *_isalpha - print a message with printf
 *@c: The character to print
 *
 *Return: end program
 */
int _isalpha(int c)
{
	return ((((c >= 'A') && (c <= 'Z'))||((c >= 'a') && (c <= 'z'))));
}
