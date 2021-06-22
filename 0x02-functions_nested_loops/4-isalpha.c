#include "holberton.h"

/**
 *_islower - print a message with printf
 *@c: The character to print
 *
 *Return: end program
 */
int _islower(int c)
{
	return ((((c >= 'A') && (c <= 'Z'))||((c >= 'a') && (c <= 'z'))));
}
