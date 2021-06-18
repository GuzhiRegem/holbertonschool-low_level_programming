#include <stdio.h>

/**
 *main - print a message with printf
 *
 *Return: end program
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		if (!((i == 'q') || (i == 'e')))
			putchar(i);
	putchar('\n');
	return (0);
}
