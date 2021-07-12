#include "holberton.h"

/**
 *_abs - print a message with printf
 *@c: The character to print
 *
 *Return: end program
 */
int _abs(int c)
{
	return (c - (c * 2 * (c < 0)));
}
