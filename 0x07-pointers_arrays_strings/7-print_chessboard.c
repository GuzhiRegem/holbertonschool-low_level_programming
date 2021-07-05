#include "holberton.h"

/**
 *print_chessboard - print a message with printf
 *@a : number
 *
 *Return: end program
 */
void print_chessboard(char (*a)[8])
{
	int y, b;

        for (y = 0; y < 8; y++)
	{
		for (b = 0; b < 8; b++)
		{
			_putchar(a[y][b]);
		}
		_putchar('\n');
	}
}
