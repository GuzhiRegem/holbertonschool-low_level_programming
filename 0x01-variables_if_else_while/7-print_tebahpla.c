#include <stdio.h>

/**
 *main - print a message with printf
 *
 *Return: end program
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
