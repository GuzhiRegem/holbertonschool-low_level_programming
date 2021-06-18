#include <stdio.h>

/**
 *main - print a message with printf
 *
 *Return: end program
 */
int main(void)
{
	int i, i_;

	for (i = 0; i <= 98; i++)
	{
		for (i_ = i + 1; i_ <= 99; i_++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((i_ / 10) + '0');
			putchar((i_ % 10) + '0');
			if (i < 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
